/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((4294967291 * (max(-1305362328396277605, (60781 * 0))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] [i_1] = 24;
                    arr_11 [i_0] [i_1] [i_2 - 2] [i_1] = ((((arr_6 [i_0] [i_1] [i_0]) ? (arr_5 [i_1] [i_1]) : (arr_9 [i_0] [i_1] [i_2 + 2]))));
                    arr_12 [i_1] [i_0] [i_1] [i_2] = arr_4 [i_0];
                    var_11 = (((arr_2 [i_2 + 1] [i_1 - 1]) ? (arr_2 [i_2 - 1] [i_1 - 1]) : var_1));
                    arr_13 [i_0] [4] |= ((var_6 || (arr_0 [i_2 - 2] [i_1 - 1])));
                }
                arr_14 [i_0] [i_1] = ((((arr_6 [i_1 - 1] [i_1] [i_1 - 1]) ? (arr_6 [i_1 - 1] [i_1] [i_1 - 1]) : (arr_6 [i_1 - 1] [i_1] [i_1 - 1]))));
            }
        }
    }
    var_12 = (min(((((max(18446744073709551615, 0))) ? 18446744073709551615 : (var_2 <= 3313097725))), -var_1));
    var_13 = (min(var_13, (8929571384299275501 * 6146143009316332819)));
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 8;i_4 += 1)
        {
            {
                var_14 = (min(var_14, 16775168));
                var_15 = var_5;
            }
        }
    }
    #pragma endscop
}
