/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216994
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                var_15 ^= ((/* implicit */long long int) max((((/* implicit */unsigned int) ((signed char) 8U))), (max((((/* implicit */unsigned int) arr_2 [i_1 - 1])), (var_1)))));
                var_16 = ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)16563))));
                var_17 ^= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (short)501)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))) - (((/* implicit */int) max((arr_4 [(unsigned short)1] [i_1]), (((/* implicit */unsigned short) (short)-501))))))) / ((+(((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_0])), (var_12))))))));
                var_18 = (_Bool)1;
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0] [(short)7] [i_0] [i_3] = ((/* implicit */unsigned char) max((arr_7 [i_0] [i_1] [(unsigned char)1] [i_3] [i_0]), (((/* implicit */signed char) (_Bool)1))));
                            arr_10 [i_0] [i_1] [i_1] [i_0] [i_3] = ((/* implicit */int) max((((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 10U)))))))), (((((/* implicit */_Bool) arr_5 [(unsigned short)9] [i_0] [3ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 1] [i_3 + 1] [i_2]))) : (arr_6 [i_0] [i_0] [7] [i_3])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (var_1)))) || (((/* implicit */_Bool) (unsigned short)44586))))), (var_13)));
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59085))) ^ (var_9))))));
}
