/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-var_4 > ((((!var_8) >= var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_11 [i_0] [i_0] [i_1] [i_0] = ((~(arr_10 [i_1])));
                    arr_12 [i_0] [i_0] [i_0] [i_0 + 1] = 32763;
                    arr_13 [i_0] [i_1] [i_0] = (((arr_2 [i_0 - 1]) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 + 1])));
                    var_13 = -24;
                    var_14 = (((arr_4 [i_0] [i_0 + 1] [i_0 + 1]) + (arr_8 [i_0 + 1] [i_0 + 1] [i_0 - 1] [1])));
                }
                arr_14 [i_0] [i_0] = (max(9223372036854775807, -10137));

                for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                {
                    arr_18 [i_1] [i_0] [i_1] = 9223372036854775807;
                    var_15 = (20 ? 65535 : 20);
                }
                for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_0] [i_1] [i_4] = ((((arr_0 [9]) ^ (((~(arr_5 [i_0 + 1])))))));
                    arr_22 [4] [i_0] = ((10120 ? (((((((arr_8 [4] [4] [i_1] [4]) || (arr_4 [i_0] [i_0] [i_0]))) || (((-532073866 ? (arr_10 [i_0]) : (arr_5 [i_1])))))))) : ((-9223372036854775794 ? 9223372036854775794 : 1985125974782119036))));
                }
            }
        }
    }
    var_16 = (~var_11);

    /* vectorizable */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_17 = 9693568626770364938;
        var_18 = ((-32749 ? var_9 : (-1305198328 >= -9223372036854775794)));
        var_19 = ((5868328640662644734 ? (((arr_23 [i_5]) ? 22782 : 0)) : 32749));
        arr_27 [i_5] = -3437809238428575996;
        var_20 = 9223372036854775794;
    }
    for (int i_6 = 1; i_6 < 15;i_6 += 1)
    {
        arr_32 [i_6] = ((!(arr_26 [i_6 - 1])));
        arr_33 [i_6] = ((~(arr_23 [i_6])));
    }
    var_21 = ((var_8 * ((11952 << (8783128686460904818 - 8783128686460904812)))));
    #pragma endscop
}
