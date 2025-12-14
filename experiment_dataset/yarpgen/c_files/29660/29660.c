/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= 127;
    var_12 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    var_13 |= (((((-(1 * 255)))) || ((min(399087234, 0)))));
                    arr_8 [i_0] [13] [i_2] = var_5;
                    var_14 = var_7;
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    arr_11 [i_0] [1] [i_3] = 26448;
                    arr_12 [7] [7] [i_3] = -399087235;

                    for (int i_4 = 3; i_4 < 20;i_4 += 1)
                    {
                        var_15 = ((186 / ((238 ? (arr_5 [i_4 - 1]) : 148))));
                        arr_17 [i_4] [19] [10] [10] [i_1] [i_0 + 2] = (((arr_13 [i_0] [i_3 - 1] [20] [i_0] [i_4] [i_0]) ? var_4 : (arr_13 [i_4] [i_3 + 2] [17] [i_1] [i_1] [i_1])));
                        var_16 = var_0;
                    }
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    var_17 ^= ((9 ? ((((arr_13 [i_0] [i_0 + 2] [i_1] [i_1] [i_5 + 3] [i_5]) && (arr_9 [i_1] [i_1])))) : (arr_16 [i_0 + 1] [i_0] [i_0 + 1] [1])));
                    var_18 = ((26467 * (arr_1 [i_0])));
                    var_19 *= 74;
                }
                var_20 = (((((0 < 37) ? (arr_6 [i_0] [21] [i_1]) : (arr_4 [12] [i_0 + 1] [12]))) << ((max(1, -29104)))));
            }
        }
    }
    var_21 = (!68);
    #pragma endscop
}
