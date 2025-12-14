/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236189
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
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) var_5))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_15 [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
                                var_15 &= ((/* implicit */int) (+(min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_7 [i_4 - 1] [i_4 - 1] [i_1 - 1] [i_3])))));
                                var_16 = ((/* implicit */short) max((((/* implicit */long long int) (~(1865339726U)))), (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 - 3]))) / (arr_2 [i_0 + 1] [i_1 + 1])))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] = ((/* implicit */int) (+(arr_3 [i_0 - 1])));
            }
        } 
    } 
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) max((min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) - (-153417680)))))), (((/* implicit */unsigned long long int) var_4)))))));
}
