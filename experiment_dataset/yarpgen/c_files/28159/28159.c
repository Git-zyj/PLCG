/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!((!(!1827982858358752530)))));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_11 = (min(var_11, (arr_0 [i_0] [10])));
        var_12 = (min(var_12, var_9));
        var_13 *= (max(-114, (~var_5)));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_14 = (((7370646866474829483 % (arr_3 [1]))));
        var_15 = (((+-0) > 10));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_16 = ((5 << (((arr_4 [i_2]) - 1886086483))));
        arr_6 [i_2] |= (var_1 || -4);
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_17 = ((var_5 != (arr_10 [i_3 - 1] [i_3 - 1] [i_3] [i_3])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_18 = (min(var_18, (--2147483640)));
                                var_19 = (~var_6);
                                arr_19 [i_2] [i_2] = (((arr_9 [i_2] [i_2] [i_3 - 1]) - (arr_9 [i_3] [i_3 - 1] [i_3 - 1])));
                                arr_20 [i_2] [i_4] = (((arr_13 [i_2] [i_2] [i_3 - 1] [i_3 - 1]) >> (194 - 172)));
                            }
                        }
                    }
                    arr_21 [1] [1] [i_3] [16] |= (4294967295 <= 17019110240543675181);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 7;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            {
                var_20 = (((-16289 + 227) ? (max((15 / 60340), (arr_2 [i_7 + 2]))) : (((~(arr_16 [i_7 + 3] [i_7 + 3] [i_7 + 1] [i_7 + 2] [i_7]))))));
                var_21 += var_4;
                var_22 = ((((arr_25 [i_7 + 2] [i_7 - 1]) * 18446744073709551615)));
            }
        }
    }
    var_23 = var_9;
    #pragma endscop
}
