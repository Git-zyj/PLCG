/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245376
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
    var_18 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((unsigned int) 13072263463241277142ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((var_6) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)152))))) <= (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)9)) / (((/* implicit */int) var_3)))))))))));
    var_19 = ((/* implicit */signed char) ((((unsigned int) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_9))))) <= (max((((((/* implicit */_Bool) var_7)) ? (2649882165U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned int) var_2))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) arr_0 [i_0]))))), (min((((/* implicit */unsigned long long int) var_6)), (arr_1 [i_0] [i_0])))));
        var_21 *= max((((arr_1 [i_0] [(unsigned char)4]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned long long int) ((short) (_Bool)1))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_10)))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 3; i_2 < 18; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 3; i_3 < 18; i_3 += 2) 
            {
                {
                    arr_8 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (signed char)59)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 3) 
                    {
                        for (long long int i_5 = 1; i_5 < 17; i_5 += 3) 
                        {
                            {
                                var_23 *= ((/* implicit */_Bool) ((arr_12 [i_4 - 1] [i_4 + 2] [i_4 - 2] [i_4 + 1]) ? (((/* implicit */int) arr_12 [i_4] [i_4] [i_4 + 2] [i_4])) : (((/* implicit */int) arr_12 [i_4] [(_Bool)1] [i_4 + 1] [i_4 + 2]))));
                                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_4 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)239))) : (arr_3 [i_1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
