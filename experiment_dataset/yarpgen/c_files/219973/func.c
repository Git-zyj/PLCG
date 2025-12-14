/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219973
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
    for (short i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_3 [i_1] [i_2 + 1] [i_2 - 1]), (arr_3 [i_1] [i_2 + 1] [i_2 - 1]))))));
                    arr_7 [i_1] = max((((unsigned int) arr_1 [i_0 - 2])), (((/* implicit */unsigned int) ((unsigned char) arr_1 [i_0 - 2]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_16 ^= ((/* implicit */unsigned int) ((((unsigned int) arr_10 [i_0] [i_1] [i_1] [i_3])) > (((/* implicit */unsigned int) ((/* implicit */int) (((+(((/* implicit */int) (short)21280)))) <= (((/* implicit */int) ((arr_12 [i_4] [i_4] [i_1] [i_3]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_1]))))))))))));
                                var_17 *= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) ((short) arr_9 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_4]))) + (((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_2])) ? (((/* implicit */int) arr_5 [i_3] [i_1])) : (((/* implicit */int) arr_0 [i_0])))))));
                                arr_13 [i_0] [i_1] [i_1] [i_3] [i_2 - 2] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_11 [i_0 - 2] [i_1])))), (((((/* implicit */int) arr_11 [i_0 - 1] [i_0 + 1])) / (((/* implicit */int) arr_11 [i_0 - 3] [i_0 + 1]))))));
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((18289989805676939101ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)140)))))) << (min((((unsigned long long int) arr_10 [i_0] [i_1] [i_3] [i_3])), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)17394)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) ((((((/* implicit */int) (!(((/* implicit */_Bool) (short)-17395))))) ^ (((/* implicit */int) ((unsigned char) var_6))))) > (((/* implicit */int) ((short) var_6)))));
    var_20 = ((/* implicit */unsigned char) ((((((unsigned long long int) var_8)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_0)), ((short)-17395))))))) & (((/* implicit */unsigned long long int) min((((((/* implicit */int) (short)-17395)) + (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) (short)17395)) ? (((/* implicit */int) (short)-17395)) : (((/* implicit */int) var_0)))))))));
}
