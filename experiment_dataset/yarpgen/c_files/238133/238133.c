/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [0] [0] &= ((var_13 ? ((((1 ? var_11 : var_10)) / (((max((arr_5 [2] [2]), (arr_5 [0] [0]))))))) : (0 & 1)));
                var_18 = (arr_0 [i_0 + 1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                arr_15 [0] [i_2] = (-18378 < 56);
                var_19 = min(var_11, var_7);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    var_20 ^= ((!((((((1435719317 ? 2363707538 : 88))) ? (arr_22 [i_4 + 3] [i_5] [i_4 + 3] [15]) : (!2755024383))))));
                    var_21 = (min(0, 7275));
                    var_22 |= (max((arr_20 [i_4 - 1] [i_4] [i_4 + 2] [i_4 - 1]), (min(15652786064741186195, (arr_20 [i_4 + 1] [i_4] [i_4 + 2] [i_4 + 3])))));
                    var_23 *= var_9;
                }
            }
        }
    }
    #pragma endscop
}
