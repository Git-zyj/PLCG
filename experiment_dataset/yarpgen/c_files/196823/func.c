/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196823
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (-(arr_0 [i_1] [i_1])))) ? ((+(((/* implicit */int) (_Bool)0)))) : ((+(((/* implicit */int) (unsigned short)14756)))))))))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((+(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) (-(arr_0 [i_1 + 1] [i_0])))) ? ((~(var_12))) : ((-(((/* implicit */int) var_2)))))) : ((-(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_1 + 2]))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] |= ((/* implicit */unsigned long long int) (~((-(((((/* implicit */_Bool) arr_1 [i_2])) ? (837518584) : (((/* implicit */int) (_Bool)1))))))));
                            arr_11 [i_2] [i_2] [i_2] [i_2] = (((!(((/* implicit */_Bool) (+(var_12)))))) ? ((+((~(arr_6 [i_2] [i_1]))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? ((~(arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) (+(var_16)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */short) (~((+((+(var_15)))))));
    var_21 = (+(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)251))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-116))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_11))))));
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        for (int i_5 = 4; i_5 < 15; i_5 += 2) 
        {
            {
                var_22 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)5))));
                arr_18 [i_4] = ((/* implicit */unsigned long long int) (-((~(((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */int) (short)-3100)) : (((/* implicit */int) var_13))))))));
            }
        } 
    } 
}
