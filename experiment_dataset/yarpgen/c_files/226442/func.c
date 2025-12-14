/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226442
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
    var_20 = ((/* implicit */_Bool) var_14);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_21 ^= ((/* implicit */signed char) var_7);
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */int) arr_3 [i_0] [i_0])), (var_12)))), (arr_0 [i_1])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_3] [i_3] [i_4] = ((/* implicit */int) max(((+(arr_12 [i_4 + 2] [i_4] [i_4] [i_4] [i_4] [i_4 + 2] [i_4 + 3]))), (((/* implicit */long long int) ((int) (short)-4561)))));
                                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) min((min((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_6))))))), (((/* implicit */unsigned long long int) ((unsigned int) max((arr_1 [i_0]), (((/* implicit */unsigned int) 235033538)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) 1146849750U))) ? (((/* implicit */int) ((unsigned short) 536870911))) : (((/* implicit */int) var_0))));
    }
    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) min((((((/* implicit */_Bool) var_19)) ? (((((/* implicit */_Bool) 1146849750U)) ? (((/* implicit */unsigned long long int) var_5)) : (var_9))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), (var_6)))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) 536870911))))), (min((-536870894), (((/* implicit */int) var_14))))))))))));
    /* LoopSeq 1 */
    for (int i_5 = 2; i_5 < 11; i_5 += 4) 
    {
        arr_17 [2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((4294967294U), (((/* implicit */unsigned int) arr_3 [i_5 - 1] [i_5 + 1]))))) ? (((/* implicit */int) (short)11398)) : (((/* implicit */int) ((var_8) < (((/* implicit */int) var_15)))))));
        var_26 = ((min((1852945811U), (4294967294U))) - (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_7))))));
    }
}
