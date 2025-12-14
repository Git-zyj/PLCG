/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(((-1201563012 ? 238 : 3358828174236387246), 2642687011)));
    var_13 = (((var_3 ^ (var_6 ^ var_3))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [1] = (((1073741823 / 9) | ((((arr_0 [i_0] [i_0]) ? var_5 : var_7)))));
        arr_3 [i_0] = (((1073741823 > 28227) && (2642687022 / 41)));

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            var_14 = (!var_7);
            var_15 |= 18;
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_10 [i_2] = ((13886707436737838822 ? 3221225473 : 927190158988358167));
        arr_11 [10] = (var_6 * (var_4 + -17));

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_16 = ((4095 ? -1274646653 : 77));
            arr_14 [9] [i_3] = (+-19);
        }
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    arr_20 [4] [4] [i_4] = ((2642687011 ? ((-263471139 ? 2823148810313303815 : 38585)) : 1652280284));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 8;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_17 = (arr_4 [i_7] [i_4 + 3]);
                                var_18 = (max(var_18, (~1)));
                                var_19 *= ((((arr_16 [i_2] [7]) + var_9)));
                                var_20 = (13011327906458555763 | 13011327906458555757);
                                arr_25 [i_4] [i_7] = (((((-9161 ? 1652280283 : 32355))) ? 3247340653402826640 : (((arr_16 [7] [i_4]) ? 0 : -32365))));
                            }
                        }
                    }
                    arr_26 [i_2] [i_4] = (arr_23 [i_5] [4] [i_2] [i_2]);
                    var_21 = (((arr_19 [i_4 + 1] [i_4] [i_4 + 3]) ? 1 : (arr_6 [i_4 - 2] [i_4 - 2] [i_4 - 2])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_22 = ((-var_5 ? (arr_28 [i_8]) : ((28 ? 4294967295 : 16108460254232343165))));
        var_23 = (max(var_23, (2946458318849551862 / var_0)));
        arr_29 [i_8] = (~(arr_1 [i_8]));
        var_24 = 28209;
        arr_30 [i_8] [i_8] = 1073741842;
    }
    #pragma endscop
}
