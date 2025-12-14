/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {
                        var_21 = (arr_3 [i_0 + 1]);
                        var_22 *= ((65535 + 723972203) > (var_2 && 8));
                        arr_11 [i_3] [i_0] [i_0] [i_0] |= (1 != 2147483647);
                    }
                }
            }
            var_23 = (~1);
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_24 = 2281583240212695199;
            var_25 = (min(16165160833496856395, var_7));
        }
        for (int i_5 = 3; i_5 < 8;i_5 += 1)
        {
            var_26 = ((-(((104 || (arr_2 [i_0 - 2]))))));
            var_27 = var_7;
            var_28 -= (var_13 == (max((arr_9 [i_0] [i_0] [i_5] [i_5] [i_5]), ((268802123 ? (arr_0 [8] [i_5 + 1]) : var_10)))));
            var_29 = (-268802113 * var_14);
        }
        /* vectorizable */
        for (int i_6 = 4; i_6 < 10;i_6 += 1)
        {
            arr_19 [i_0] [i_0] [i_0] = (arr_18 [i_6 - 4] [i_6 - 2] [i_6 - 4]);
            arr_20 [i_0] [i_6] [3] = (((arr_0 [i_0 - 2] [i_6 - 4]) ? 17861472262651812671 : -1025270540));
            arr_21 [i_0] = (-2162604200606913276 ? (arr_3 [i_0 - 2]) : -31306);
        }
        arr_22 [2] = ((arr_17 [i_0] [i_0] [i_0]) ? (arr_16 [i_0] [5]) : (max(var_2, (arr_17 [8] [i_0 - 2] [i_0 - 1]))));
        arr_23 [i_0] = (arr_10 [i_0] [i_0] [i_0]);
    }
    var_30 = 268802108;
    #pragma endscop
}
