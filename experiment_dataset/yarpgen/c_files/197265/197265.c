/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((max(var_2, var_6))) ? (((!((max(var_8, var_4)))))) : (max(((min(14123, 25151))), (~var_8)))));
    var_12 = min(14123, 72);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (((arr_4 [i_1]) != (max((arr_4 [i_1]), -196))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_13 = ((min((arr_8 [1] [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_12 [i_0]))));
                                var_14 = (arr_12 [i_4]);
                                var_15 = 127;
                                arr_13 [i_1] = (i_1 % 2 == zero) ? (((((min((((arr_2 [4]) << (((arr_4 [i_1]) - 5757017414431084930)))), (((arr_8 [i_0] [i_0] [i_0 - 1] [i_0]) & (arr_9 [i_0] [i_1] [1] [i_3] [i_3] [6])))))) ? ((((((arr_1 [i_0 - 1]) != (arr_2 [i_3]))) ? (arr_9 [i_0] [1] [i_2] [i_3] [i_0] [i_0 - 1]) : ((0 ? (-32767 - 1) : 69))))) : (min((min((arr_7 [i_1] [i_1] [i_1] [i_1]), (arr_10 [i_1] [i_1] [i_2] [i_3]))), (((arr_2 [i_0]) ? (arr_4 [i_1]) : (arr_12 [i_0 - 1])))))))) : (((((min((((arr_2 [4]) << (((((arr_4 [i_1]) - 5757017414431084930)) - 18293102948381400608)))), (((arr_8 [i_0] [i_0] [i_0 - 1] [i_0]) & (arr_9 [i_0] [i_1] [1] [i_3] [i_3] [6])))))) ? ((((((arr_1 [i_0 - 1]) != (arr_2 [i_3]))) ? (arr_9 [i_0] [1] [i_2] [i_3] [i_0] [i_0 - 1]) : ((0 ? (-32767 - 1) : 69))))) : (min((min((arr_7 [i_1] [i_1] [i_1] [i_1]), (arr_10 [i_1] [i_1] [i_2] [i_3]))), (((arr_2 [i_0]) ? (arr_4 [i_1]) : (arr_12 [i_0 - 1]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = var_1;
    var_17 = (((((-70 ? 439020297 : 90))) ? ((((var_10 ? var_7 : var_9)))) : (31 >= 0)));
    #pragma endscop
}
