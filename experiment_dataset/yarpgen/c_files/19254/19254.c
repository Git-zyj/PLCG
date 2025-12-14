/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (6505761330991915520 == 255);

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0 - 2] [12] |= (arr_1 [i_0]);

        for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] = var_5;
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_11 [i_3] [i_1 + 1] [i_2] [i_1 + 1] [i_0] = (arr_9 [7]);
                        var_12 = (max(var_12, (((305861380 ? 919 : 3)))));
                        arr_12 [i_1 - 1] = 127;
                        var_13 = 26;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_14 = ((~((var_3 ? (arr_17 [i_1 - 1] [i_5] [i_1 - 1] [i_0 - 1]) : (arr_8 [i_1 + 1])))));
                            var_15 = (((arr_10 [i_6]) ? 79 : (4199 || 70368744177663)));
                            var_16 = (~68);
                            arr_24 [i_0] [17] [i_0 - 2] [i_0 - 2] = var_5;
                            arr_25 [i_0 - 2] [i_0 - 2] [i_4] [i_4] [i_4] = (arr_17 [i_0] [i_4] [i_0] [i_0]);
                        }
                    }
                }
            }
        }
        for (int i_7 = 1; i_7 < 18;i_7 += 1) /* same iter space */
        {
            var_17 = var_4;
            arr_28 [i_7] = (((arr_20 [i_0] [i_7] [i_7 + 1] [i_0 - 2] [i_7]) / (1933516367 % 536870911)));
            var_18 = (((-89 + 2147483647) >> ((var_0 ? (var_10 > 177) : -1))));
        }
        for (int i_8 = 1; i_8 < 18;i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            var_19 = -21508;
                            arr_41 [i_11] [i_11] [i_10] [i_11] [i_11] [i_11] |= (-15 <= 0);
                            arr_42 [i_0] [i_0] [6] [i_0 - 3] [i_11] [i_0] [i_0] = (arr_13 [i_9] [i_9]);
                            var_20 = (~var_9);
                        }
                        var_21 = (((((242 ? -5988030230805370853 : 217))) && (((var_10 - (arr_0 [17]))))));
                        var_22 ^= (-(arr_39 [i_10] [i_8]));
                        var_23 = var_1;
                        arr_43 [i_9] [8] [7] [i_9] [i_9] [i_9] = 7503564860411762062;
                    }
                }
            }
            var_24 = (max(var_6, 242));
        }
        var_25 = ((15 - (min(3455425633526334369, -77))));
    }
    for (int i_12 = 0; i_12 < 24;i_12 += 1)
    {
        var_26 = (min(var_26, ((min(((~(arr_44 [i_12]))), (min(-231, (arr_44 [i_12]))))))));
        arr_46 [i_12] [i_12] |= (((((14 >> (((arr_44 [i_12]) - 5620002385597509697))))) ? (~-77) : -var_3));
    }

    for (int i_13 = 0; i_13 < 13;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 13;i_15 += 1)
            {
                {
                    var_27 += (min(-2360102001049591740, 2147483647));
                    arr_59 [i_13] [2] [i_14] [i_13] = var_5;
                }
            }
        }
        var_28 -= ((1943355600 ? -2713215845226159172 : 109));
        var_29 = 32767;
        var_30 = (max(var_30, var_2));
    }
    for (int i_16 = 0; i_16 < 12;i_16 += 1)
    {
        var_31 = (max(var_31, (((((2360102001049591739 ? -var_7 : (((-9223372036854775807 - 1) ? 5090889562077509438 : 1859122341)))) / var_1)))));
        arr_63 [i_16] = (((var_4 && 14082) && ((((arr_35 [i_16] [i_16] [i_16] [i_16]) + (arr_30 [i_16]))))));
        var_32 = ((((-(((var_10 || (arr_4 [i_16])))))) == (max(2147483621, 120))));
    }
    #pragma endscop
}
