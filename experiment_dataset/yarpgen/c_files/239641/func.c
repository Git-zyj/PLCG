/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239641
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
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] |= ((/* implicit */unsigned char) (~(min((((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_1)))), (min((((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_1])), (arr_0 [i_1] [i_0])))))));
                    var_12 = ((/* implicit */unsigned short) min((((((/* implicit */int) var_6)) - (((/* implicit */int) arr_7 [i_2 - 1] [i_0 + 1])))), (max((((/* implicit */int) arr_8 [i_0] [i_1] [i_2 - 1])), (((((/* implicit */int) (short)0)) ^ (((/* implicit */int) var_4))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_16 [i_4] [i_4] [i_2 - 1] [i_3] [i_4] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!((_Bool)1)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-1)) >= (((/* implicit */int) (_Bool)1)))))) - (arr_13 [i_1] [i_1])))));
                                var_13 = arr_15 [i_0] [i_1] [i_1];
                                arr_17 [i_1] [i_1] [i_3 - 1] [i_4] &= ((/* implicit */unsigned char) min((((((/* implicit */int) arr_14 [i_1] [i_2 - 2] [i_2] [i_2] [i_2 - 1] [i_3 - 1] [i_1])) * (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_2))))))), (((int) arr_7 [i_0 - 1] [i_0 - 1]))));
                                arr_18 [i_0 - 1] [i_1] [i_2] [0] [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_3 - 1] [i_2 - 2] [i_0 - 1]))))) ? (((arr_13 [i_0 + 1] [i_0 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 - 2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_2 - 1]), (arr_8 [i_3 + 1] [i_2 - 1] [i_0 - 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) max((((/* implicit */long long int) ((unsigned short) var_5))), (max((max((((/* implicit */long long int) var_1)), (var_7))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))))))))))));
    var_15 = ((/* implicit */int) max((((long long int) (_Bool)1)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_2))))) : (var_7)))));
}
