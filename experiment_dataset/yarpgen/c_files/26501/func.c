/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26501
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
    var_16 = ((/* implicit */short) ((long long int) max((((var_9) - (var_9))), ((~(((/* implicit */int) (signed char)-104)))))));
    var_17 = ((/* implicit */int) var_15);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 2257872328U)) ? (2037094968U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)21199)))))));
                    arr_7 [i_0] [12U] [i_2] = ((/* implicit */short) (signed char)-98);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [(signed char)20] [i_0] [i_2] [i_4] = ((/* implicit */unsigned short) (((~(((((/* implicit */unsigned int) ((/* implicit */int) (short)21199))) ^ (16U))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                                var_18 = ((/* implicit */int) arr_0 [i_2]);
                                var_19 = ((/* implicit */short) ((_Bool) (((!(((/* implicit */_Bool) 2037094967U)))) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_3])) : (((/* implicit */int) ((unsigned short) arr_9 [i_0] [i_0] [i_2] [(unsigned char)19] [i_2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_15 [i_0] = ((/* implicit */signed char) var_11);
    }
}
