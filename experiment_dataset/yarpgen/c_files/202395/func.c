/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202395
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (+(var_6))))))));
                    var_18 += ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_9))))) : ((+(var_3))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 3; i_3 < 12; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_5 = 1; i_5 < 11; i_5 += 2) 
                {
                    var_19 = var_15;
                    var_20 += ((/* implicit */signed char) var_0);
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 2; i_7 < 12; i_7 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) var_0);
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (max((var_3), (((/* implicit */long long int) 1040187392U))))));
                            }
                        } 
                    } 
                }
                arr_22 [i_3] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_13) >= (-7870084208855025167LL))))) : (var_0)));
                arr_23 [(signed char)10] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) var_9)))))) == ((~(var_5)))));
            }
        } 
    } 
}
