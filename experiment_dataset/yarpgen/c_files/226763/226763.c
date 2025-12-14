/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = 67108864;
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_1 - 3] [i_2] = (!4227858432);
                    arr_10 [i_0] = (~var_9);
                    var_17 = (max(var_17, (arr_6 [i_0] [i_1 - 1] [i_2])));
                    arr_11 [i_0] [i_1 + 2] [i_0] = 65535;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_18 = (min(-1860422909153076573, (~var_9)));
                                var_19 = (max(var_19, ((((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]) > (arr_3 [i_2]))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
    {
        arr_21 [i_5 - 1] = 67108864;
        var_20 = (max(var_20, (((412779757 ? 67108864 : ((-103 ? ((4227858432 ? (arr_20 [i_5] [i_5 + 3]) : var_3)) : ((((-103 + 2147483647) >> (4227858432 - 4227858428)))))))))));
        arr_22 [i_5 + 2] = var_11;
        var_21 = ((-255 ? -var_13 : 37439));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
    {
        arr_25 [i_6] [i_6] = 0;
        var_22 = (min(var_22, ((((arr_23 [i_6] [i_6 + 1]) * (arr_23 [i_6 + 3] [i_6 + 2]))))));
        arr_26 [i_6] = var_5;
        var_23 = (min(var_23, var_7));

        for (int i_7 = 2; i_7 < 17;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    {
                        arr_34 [i_6] [i_6] [i_8] [i_6] = ((-(var_2 ^ -1)));
                        arr_35 [i_6] [i_7] [i_8] [i_9] [i_6] = var_1;
                    }
                }
            }
            var_24 ^= ((0 && (arr_33 [i_6] [i_6] [i_7 + 1] [i_6] [i_6 + 1])));
        }
    }
    for (int i_10 = 2; i_10 < 24;i_10 += 1)
    {
        arr_38 [i_10] = -1521882785;
        arr_39 [i_10] = (arr_36 [i_10] [i_10]);
        arr_40 [i_10] = var_15;
    }
    var_25 = ((!(!var_3)));
    var_26 = (max(var_26, (0 > 2633017243)));
    #pragma endscop
}
