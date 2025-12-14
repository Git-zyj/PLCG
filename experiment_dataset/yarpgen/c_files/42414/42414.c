/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((((max(5725, var_5)))), (((var_7 || 3) ? (!18034424017176593683) : var_12))));
    var_14 ^= ((+(min((-4594223336898557603 >= -3), (7627 % var_6)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {

                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            arr_12 [i_0] [i_1 - 1] [8] [i_2] [i_3] [i_4] = 3349090289;
                            var_15 = ((4 >> (((arr_7 [i_2] [i_1]) + 217704460))));
                        }
                        var_16 = (~var_4);
                        arr_13 [i_3] [i_1 - 1] [3] [1] = 27;
                    }
                }
            }
        }
        arr_14 [i_0] = (~12085774465395061180);
        arr_15 [i_0] = ((var_4 == (var_11 ^ var_9)));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {

                        for (int i_9 = 2; i_9 < 22;i_9 += 1)
                        {
                            var_17 = 2637331374864598468;
                            arr_30 [2] [i_5] [i_6] [i_7] [i_8] [i_6] = var_11;
                            var_18 = 1147740351;
                            var_19 = ((~((((arr_28 [1] [i_5] [i_6] [i_9 - 1] [1] [i_9 - 2]) || var_10)))));
                            var_20 = ((!(((~((var_11 ? var_3 : 1147740365)))))));
                        }
                        arr_31 [i_6] [i_7] [i_7] [i_8] [4] [i_6] = 1147740363;
                    }
                    arr_32 [i_6] = (3024695110 == ((((min(var_6, 3746347411))))));

                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                        {
                            arr_39 [i_6] [15] [i_7] [i_7] [14] [i_11] = ((var_3 ? (((!(((var_4 ? 7018872061784895593 : var_1)))))) : (arr_17 [i_11])));
                            arr_40 [i_11] [i_6] [i_6] = ((!((min(1016, 1)))));
                            arr_41 [i_6] [18] [i_7] = (min((var_8 * var_12), -3));
                        }
                        for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                        {
                            var_21 = (max(((7018872061784895595 ? 37 : 1431815842)), var_1));
                            arr_45 [19] [i_6] [i_5] [i_6] [i_12] [i_6] = var_1;
                            arr_46 [i_6] [i_6] [i_6] [i_10] [i_6] = ((var_1 ? ((~((2048 << (((var_11 + 1233361637536717569) - 8)))))) : 20));
                            var_22 -= (((min(((var_10 >> (var_6 - 3830228651284369008))), ((min((arr_2 [19] [i_10]), var_4))))) == (min((var_7 - var_10), 31))));
                        }
                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            var_23 = ((max(-2044, 65519)));
                            arr_49 [i_13] [i_13] [12] [i_10] [i_13] [i_13] |= ((-(((!(~var_12))))));
                        }
                        var_24 = (!var_4);
                    }
                }
            }
        }
        arr_50 [i_5] = (((((arr_5 [1] [1] [i_5] [i_5]) + ((min((arr_36 [i_5]), var_12)))))));
        arr_51 [12] [i_5] = ((min((!1), var_12)));
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 23;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 23;i_16 += 1)
                {
                    {
                        arr_61 [5] [i_14] [22] [6] [6] |= 210;
                        arr_62 [i_5] [i_14] [i_16] [6] [i_5] [1] = max(((((min(-10511, (arr_24 [12] [i_14] [i_14])))) ? var_9 : (((var_7 && (arr_24 [i_5] [i_15] [i_16])))))), ((min((arr_37 [i_5] [i_5] [i_5] [i_5] [i_14]), 19804))));
                        var_25 = (max(var_25, (((var_3 ? ((min(var_4, var_8))) : -2)))));
                    }
                }
            }
        }
        var_26 = (max(var_26, 30));
    }
    var_27 = var_1;
    #pragma endscop
}
