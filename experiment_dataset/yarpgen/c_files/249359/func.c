/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249359
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
    var_16 = (!(((/* implicit */_Bool) var_15)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (~(((((/* implicit */_Bool) max(((unsigned short)18508), (((/* implicit */unsigned short) arr_4 [i_0] [i_1] [1ULL]))))) ? (arr_7 [i_0] [9ULL] [9ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned short)5] [i_2]))))))))));
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_7))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        for (unsigned int i_4 = 1; i_4 < 13; i_4 += 2) 
        {
            for (short i_5 = 2; i_5 < 11; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        for (short i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            {
                                arr_23 [i_3] [i_3] [i_5] [i_6] [i_3] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (-(var_12)))))) ? (((/* implicit */int) ((unsigned char) arr_6 [i_4 + 1] [i_5 - 1]))) : (((/* implicit */int) ((unsigned char) -1537710835)))));
                                var_19 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1537710835))));
                                var_20 = ((/* implicit */unsigned int) var_11);
                                var_21 = ((/* implicit */unsigned int) ((unsigned long long int) arr_2 [i_3] [i_5]));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) 8))));
                }
            } 
        } 
    } 
}
