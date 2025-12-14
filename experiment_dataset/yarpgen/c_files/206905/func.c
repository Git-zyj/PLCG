/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206905
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_0] = ((/* implicit */unsigned long long int) arr_1 [(unsigned char)14] [i_1]);
                    var_15 = ((/* implicit */int) min((((/* implicit */unsigned int) var_4)), (max((((/* implicit */unsigned int) arr_1 [i_2] [i_1])), (arr_4 [i_1])))));
                    var_16 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) 933044604U)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) var_4)))), (((/* implicit */int) ((unsigned char) arr_3 [i_1] [i_2])))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        arr_11 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)32764)) / ((-(((/* implicit */int) arr_10 [21] [i_1] [i_2] [i_3]))))))) ? (((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_10 [i_3] [i_3] [i_3] [i_3]))))))) : (arr_9 [i_0] [i_0])));
                        var_17 *= ((/* implicit */unsigned int) ((((var_1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) : (-6393272063365932501LL))) / (((/* implicit */long long int) arr_4 [i_0]))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        arr_16 [i_1] [i_2] = ((/* implicit */unsigned long long int) (((+(var_13))) & (((/* implicit */unsigned int) arr_6 [i_1]))));
                        var_18 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) var_14)))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_12)))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 3361922686U)) && (((/* implicit */_Bool) (short)-24210)))), (((((((/* implicit */int) arr_17 [i_5] [i_5])) > (((/* implicit */int) var_1)))) || ((!(((/* implicit */_Bool) 3553510997U))))))));
        var_19 = ((/* implicit */signed char) arr_18 [i_5] [i_5]);
    }
}
