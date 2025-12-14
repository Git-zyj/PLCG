/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51116
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
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (-(((/* implicit */int) var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
                            {
                                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((unsigned int) var_1)))));
                                arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) || (((/* implicit */_Bool) var_6))));
                                var_14 -= ((/* implicit */unsigned int) arr_12 [15U] [i_1] [i_2] [i_2] [i_4]);
                            }
                            arr_14 [i_0] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */signed char) (unsigned short)26880);
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 24; i_5 += 1) 
                            {
                                arr_18 [i_0] [i_1] [i_2] [i_3] &= (-(((/* implicit */int) var_3)));
                                var_15 = ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 2]))));
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_5))));
                                var_17 = ((/* implicit */unsigned short) min((var_17), (arr_17 [i_0 - 1] [i_1] [i_3] [i_5])));
                            }
                            arr_19 [i_0] [(unsigned short)21] [i_2] [i_3] [i_0] = ((/* implicit */unsigned char) var_1);
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_0 - 3] [i_0 + 1] [i_0 + 1] [i_0 + 1])) * (((/* implicit */int) arr_17 [i_0] [i_0 + 1] [i_0 + 1] [i_0])))))));
                        }
                    } 
                } 
                var_19 = (-((+((+(var_4))))));
                arr_20 [i_1] &= ((/* implicit */unsigned int) arr_0 [(_Bool)1]);
            }
        } 
    } 
}
