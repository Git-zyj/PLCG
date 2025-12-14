/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1] [i_2 + 1] = (arr_2 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_0 - 1] [i_1 - 1] [i_1] [i_3] [i_3] = ((((max((arr_8 [i_0] [i_1 - 1] [i_2] [i_4 - 1]), (arr_5 [i_2 - 2] [i_1 - 1] [i_1])))) ? (((arr_8 [i_0] [i_4] [i_2 - 2] [i_4 - 1]) - (arr_8 [i_0] [i_0] [i_2 - 4] [i_4 - 1]))) : ((var_9 ? (arr_8 [i_0] [i_1] [1] [i_4 - 1]) : (arr_8 [i_0] [i_1] [i_1] [i_4 - 1])))));
                                var_10 ^= min((((arr_14 [i_0] [i_0] [1] [i_0] [i_3 + 1] [i_3 + 1] [6]) + var_8)), (arr_0 [i_0]));
                            }
                        }
                    }
                }
            }
        }
    }
    var_11 = -var_1;
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 22;i_6 += 1)
        {
            {
                arr_24 [i_5] [i_6 + 1] = ((((var_4 ? (arr_18 [i_6 - 1]) : (arr_18 [13]))) * ((max((arr_18 [i_5 + 1]), (arr_18 [i_5 - 2]))))));
                var_12 ^= var_4;
                var_13 *= max(0, (0 - 1));
                var_14 = ((536870912 ? 0 : 17591112302592));
                var_15 += ((var_7 ? -1 : (((min(var_4, (arr_20 [i_5] [i_5])))))));
            }
        }
    }
    #pragma endscop
}
