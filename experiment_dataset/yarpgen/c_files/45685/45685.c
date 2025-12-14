/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    var_11 = -6747658382478735307;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 ^= ((((((min(-5005, (arr_1 [i_0 - 1])))) + 2147483647)) << ((((((-5005 | (arr_3 [i_1] [i_0 + 1]))) + 10)) - 5))));
                var_13 = -1807285774;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_14 = (arr_7 [i_0] [i_0 - 1] [i_0 - 1]);
                            var_15 = var_6;
                            arr_11 [i_0] [i_1] [i_2] [i_0] = (max((((((var_7 ? -898453618 : (arr_7 [i_0] [i_0] [i_2])))) ? (-15 ^ 4998) : (arr_10 [i_0] [i_3] [i_0] [i_0] [i_0] [i_0]))), ((max((arr_4 [i_0]), (arr_4 [i_0]))))));
                            var_16 = (min((arr_6 [i_0] [i_0]), (((!(arr_2 [i_0]))))));
                            var_17 = (min(((~(arr_8 [i_3] [i_0] [i_1] [i_0] [i_0]))), 1));
                        }
                    }
                }
                arr_12 [i_0] [i_1] [i_0] = ((~(min(((~(arr_3 [i_0] [i_1]))), (arr_9 [i_0] [i_1] [i_0] [i_0])))));
            }
        }
    }
    #pragma endscop
}
