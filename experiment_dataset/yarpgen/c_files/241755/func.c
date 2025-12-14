/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241755
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
    for (unsigned char i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [4ULL] [i_2] [i_1] [i_0 - 2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-111)), (10906639590692561976ULL)));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 7; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 7; i_4 += 3) 
                        {
                            {
                                var_18 *= ((/* implicit */_Bool) ((short) max((var_4), (((/* implicit */long long int) (unsigned short)43243)))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4 + 2] [i_1] = ((/* implicit */long long int) min((max((arr_14 [i_0 + 3] [i_3] [i_2] [i_3 - 4] [i_4 + 2]), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) var_16))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) ((var_4) == (((/* implicit */long long int) (+(((/* implicit */int) var_14)))))));
                    var_20 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 10532501914031854201ULL)) ? (min((var_10), (((/* implicit */unsigned int) arr_11 [i_0] [i_1] [(signed char)6] [i_2])))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_16), (var_13))))))), (min((arr_7 [i_0] [i_1] [i_1 + 2]), (((/* implicit */unsigned int) var_8))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) var_16);
    var_22 = ((/* implicit */signed char) max((((((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_6)))) >> (((var_1) - (7452556474550206200ULL))))), (var_15)));
}
