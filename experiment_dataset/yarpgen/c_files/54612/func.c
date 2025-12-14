/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54612
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            arr_8 [i_3] = ((/* implicit */unsigned long long int) (((~(arr_6 [i_3] [i_3] [i_2] [i_1] [i_0] [i_0]))) & (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-11990)))))));
                            arr_9 [i_0] [(unsigned short)2] [i_0] [i_0] |= (~(max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-120))))), (min((0ULL), (((/* implicit */unsigned long long int) 1812429347U)))))));
                            var_19 = ((/* implicit */int) var_14);
                            var_20 = ((/* implicit */signed char) ((unsigned long long int) arr_5 [i_1] [i_2] [i_3]));
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) 0ULL))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    var_22 |= ((/* implicit */unsigned short) (short)1206);
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)11865)) / (((/* implicit */int) var_10)))) / ((+(((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_1])))))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((var_16) - (((var_11) >> (((/* implicit */int) (unsigned short)0))))))));
}
