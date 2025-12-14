/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52007
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
    var_13 |= ((/* implicit */int) ((long long int) var_12));
    var_14 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_15 ^= ((int) (-(((/* implicit */int) (_Bool)1))));
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(arr_5 [i_3 - 1] [i_2 - 1] [i_0 - 1])))) < (((unsigned int) arr_9 [i_0 - 1] [(unsigned char)4] [i_2 + 3]))));
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0 + 1]))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) 16852128805036273517ULL)) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [(short)5] [i_1] [i_2 + 3]))))))))));
                    var_18 = ((/* implicit */short) (((-(arr_3 [i_0 + 2] [i_0 + 2] [i_0 + 1]))) <= (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) arr_8 [i_0 + 2] [i_0] [i_0 - 3]))))));
                    arr_13 [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)172))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_10))));
}
