/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52961
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_9 [i_2 - 2] [i_2] [i_2] [i_3] [i_4])))))));
                                arr_12 [i_4] [i_3] [i_0] [i_1] [i_0] |= ((/* implicit */unsigned long long int) arr_2 [i_0] [i_3] [i_4]);
                                arr_13 [i_0] [i_0] [i_2] [i_2] [i_4] = ((/* implicit */unsigned int) var_5);
                                arr_14 [i_2] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)15701)), (-1740246682))))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) min((max((var_2), (arr_10 [i_1] [(_Bool)1] [(signed char)2] [i_1] [i_1] [i_0] [i_1]))), (((/* implicit */unsigned int) arr_0 [i_1])))))));
                    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_2 [i_0] [i_2 - 1] [i_2 - 2])))))))));
                    var_14 = ((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_6 [i_2] [i_2] [i_2] [i_2])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                }
            } 
        } 
    } 
    var_15 ^= ((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */unsigned char) min((var_9), (var_9)))), ((unsigned char)148)))), (max(((~(((/* implicit */int) var_3)))), (((/* implicit */int) var_1))))));
    var_16 = ((/* implicit */unsigned long long int) var_2);
}
