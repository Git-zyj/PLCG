/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [1] [i_1 + 1] [i_1] = (min(((((arr_2 [i_1] [i_0]) || ((max(var_10, var_0)))))), ((2147483648 ? (arr_3 [i_1 - 2] [i_1 - 1] [i_0]) : var_8))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_20 = (~1741443827);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [18] [i_3] [i_2] [18] [i_0] = 2063556171;
                                var_21 *= (2177012086 + 2568011902);
                                var_22 = ((min(var_8, (~171))));
                                var_23 = ((~((16 ? 14138727391422315565 : 9223372036854775806))));
                                arr_14 [1] [i_3] [i_4] [11] [1] = ((!((((arr_8 [i_1 + 1] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1] [i_1]) ? (arr_8 [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1] [i_0]) : (arr_8 [i_1 - 1] [i_0] [18] [i_1 + 1] [i_0] [i_0]))))));
                            }
                        }
                    }
                }
                var_24 ^= ((99 >> (-24531 + 24542)));
            }
        }
    }
    #pragma endscop
}
