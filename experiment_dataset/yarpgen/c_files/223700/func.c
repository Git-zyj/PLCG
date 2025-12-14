/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223700
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
    for (short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */_Bool) ((short) ((((/* implicit */unsigned long long int) (-(var_16)))) + (((arr_0 [i_0] [i_0]) - (((/* implicit */unsigned long long int) var_15)))))));
                var_19 = (~(arr_4 [i_1]));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_3 [i_0 - 1] [i_0 - 1] [i_0 + 1]), (arr_1 [i_0 + 1])))) ? (((long long int) 1023274875)) : (((/* implicit */long long int) ((/* implicit */int) ((var_4) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-24421)))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            arr_11 [i_3] [i_1] [i_2] [i_1] [i_1] [(short)2] = ((/* implicit */unsigned int) min((9223372036854775807LL), (1225988210938150673LL)));
                            var_21 = ((long long int) 9223372036854775807LL);
                            var_22 = ((/* implicit */long long int) (~((-(((/* implicit */int) arr_2 [4ULL] [i_2 + 3]))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((arr_4 [8]), (((/* implicit */long long int) 1091071734))))) ? (arr_9 [i_0] [(short)7] [3LL]) : (((/* implicit */long long int) ((/* implicit */int) (short)480))))) < (arr_9 [5] [i_0] [5]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) max((var_24), ((!(((min((5130698293637766246LL), (((/* implicit */long long int) var_2)))) >= (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
}
