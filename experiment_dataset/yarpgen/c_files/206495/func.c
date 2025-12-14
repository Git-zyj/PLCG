/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206495
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
    var_20 = ((/* implicit */short) var_4);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_0 [i_0] [i_1]))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 7; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_8)), (min((((/* implicit */unsigned long long int) (~(var_13)))), (min((arr_10 [i_0] [i_1 - 1] [i_0] [i_0] [i_4 - 1]), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1 + 2] [i_2]))))))));
                                arr_14 [i_0 - 1] [i_1] [i_2] [i_1] [i_0] = var_16;
                                var_22 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_7 [i_0 + 1] [i_0 - 1] [i_0])), ((+(5825252514231964941ULL)))));
                            }
                        } 
                    } 
                } 
                var_23 -= ((/* implicit */signed char) max((((/* implicit */long long int) (short)32767)), (0LL)));
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) var_1))));
}
