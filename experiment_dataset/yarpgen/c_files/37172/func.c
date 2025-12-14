/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37172
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
    for (short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) min((var_6), (((/* implicit */unsigned int) (unsigned char)187)))));
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (unsigned char)212))));
                                arr_13 [i_0 - 1] [i_0 - 1] [i_1] [i_2] [i_2] [11] = ((/* implicit */int) max(((~((~(arr_6 [i_0] [i_0]))))), (((/* implicit */unsigned int) -265388437))));
                                arr_14 [i_0] [i_1] [i_2] [i_3 - 2] [i_4] = ((/* implicit */int) max((((/* implicit */long long int) ((int) arr_11 [i_0 + 1] [i_2] [i_3 - 3] [i_4]))), ((~(arr_11 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1])))));
                                var_13 = ((/* implicit */unsigned char) (-(1139045376U)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) var_10);
    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~((-(var_3))))))));
    var_16 -= ((/* implicit */unsigned int) -265388437);
    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) ? (max((var_6), (1358957121U))) : (((/* implicit */unsigned int) min((((/* implicit */int) var_1)), (var_3)))))) == ((-(var_6)))));
}
