/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min((max((min(98, 0)), var_6)), 124);
    var_13 = (max(var_4, var_3));
    var_14 = (min(((min(1, var_0))), (min(((min(1, 1))), -262144))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = (min((max(1, -101918824)), ((min(1, 234)))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        arr_14 [i_0] [i_1 - 1] [i_0] [2] [i_1] = min((min(1, 0)), (min(0, 140)));
                        var_15 = min((min(978694327, 1)), (min(0, 1416549152)));
                    }
                    arr_15 [i_0] [i_0] [i_1] [i_0] = (max((min(234, 0)), (max(1, (max(77, 1))))));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_20 [i_1] = max(86, (min(356929396, ((max(1, 234))))));
                        var_16 = 1;
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 8;i_5 += 1) /* same iter space */
                    {
                        var_17 = 0;
                        var_18 = 0;

                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            arr_26 [i_0] [i_1] [i_5] [i_6] = 101918824;
                            var_19 += 234;
                        }
                    }
                    for (int i_7 = 1; i_7 < 8;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 2; i_8 < 7;i_8 += 1)
                        {
                            arr_33 [i_8] [i_7] [i_1] [i_1] [i_1 + 1] [i_0] = (max((max(-356929396, 1)), (min(0, 1157374291))));
                            var_20 = (min(1, 16515072));
                        }
                        var_21 -= (min((min(1, 0)), (max(0, 66))));
                        arr_34 [i_7 + 2] [i_1] [i_1] [i_0] = (min((min(1, (min(-1416549153, 1)))), 0));
                    }
                    for (int i_9 = 1; i_9 < 8;i_9 += 1) /* same iter space */
                    {
                        arr_37 [i_1] = max(1, (min(2146435072, 0)));
                        arr_38 [i_0] [i_1] [1] [i_1] = (max((min(1416549152, -1416549152)), (max(-688750069, 44))));
                        var_22 = (max(var_22, 1));
                    }
                }
            }
        }
        arr_39 [i_0] [i_0] = max((max(2029801665, 1416549152)), (max(-1416549152, 205)));
    }
    for (int i_10 = 2; i_10 < 10;i_10 += 1)
    {
        /* LoopNest 3 */
        for (int i_11 = 3; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 0;i_13 += 1)
                {
                    {
                        arr_52 [i_12] [i_10] [i_12] [i_12] = 93;

                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            arr_55 [i_10 - 2] [i_12] [i_13] [i_10] = max((min(-1416549153, 1416549152)), (min(0, 709022290)));
                            var_23 ^= min(228, 688750068);
                        }
                    }
                }
            }
        }
        var_24 = (min((min(124, (-2147483647 - 1))), ((max(194, 112)))));
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {
                {
                    var_25 = max((max((-2147483647 - 1), ((max(66, 5))))), 0);
                    arr_63 [i_10] [i_10] = (min((min(246, 2147483647)), ((max((min(0, 36)), 64)))));

                    /* vectorizable */
                    for (int i_17 = 1; i_17 < 10;i_17 += 1)
                    {
                        var_26 = 5;
                        var_27 = 250;
                        arr_67 [i_10] = -1912248456;
                    }
                    for (int i_18 = 0; i_18 < 13;i_18 += 1)
                    {
                        arr_72 [i_10] [i_10] = (max((min(163, -743354696)), 162));
                        arr_73 [i_10] [i_10] [i_15] [i_16] [i_18] = (max((min(((max(0, 0))), (min(2029801665, 1)))), ((min(1, 18)))));
                        arr_74 [i_10 - 2] [i_10] [i_18] [i_15] = max((min(-960622141, 112)), ((min(137, 143))));
                        arr_75 [i_10] [i_15] [i_16] [i_18] [0] [i_10] = min((max(0, 58)), 183);
                    }
                    arr_76 [i_10] [i_10] [i_16] = 1495683064;
                }
            }
        }
    }
    #pragma endscop
}
