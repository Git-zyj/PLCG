/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218705
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
    var_16 = ((/* implicit */unsigned int) min((var_16), (var_2)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_0] [7ULL] [i_0] = max((((((/* implicit */_Bool) min((var_5), (var_15)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))), (((((/* implicit */_Bool) ((arr_1 [i_0]) ? (1304150184U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((-5960333477906908992LL) + (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) arr_2 [i_0])))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 2786908478455195813ULL)) && ((_Bool)0))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_3 [i_0] [i_2] [i_3]) : (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : (4294967295U)))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_2])) ? (var_13) : (((((/* implicit */long long int) var_12)) - (-6875256008963529689LL)))))));
                            var_17 = ((/* implicit */_Bool) ((long long int) ((((var_6) >= (var_6))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0] [i_3])) ? (var_7) : (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
                            arr_11 [i_2] [i_2] [i_3] |= (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_5)))) : (var_2));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] [2] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_10))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_4 = 0; i_4 < 19; i_4 += 3) 
    {
        arr_17 [i_4] = arr_15 [i_4];
        var_18 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_4]))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_0)))));
        var_19 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_6)) || (arr_14 [i_4]))), (arr_14 [i_4])));
    }
    for (unsigned int i_5 = 1; i_5 < 8; i_5 += 1) 
    {
        arr_21 [i_5 + 4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) (+(544999748830522371LL)))) : ((+(18446744073709551615ULL)))));
        var_20 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_2)) : (var_11)))));
        var_21 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(arr_9 [i_5 + 2] [i_5] [i_5 + 2] [i_5 + 2])))), (max((((/* implicit */unsigned long long int) var_6)), (var_1)))));
    }
}
