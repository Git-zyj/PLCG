/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -8661963904268830553;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_17 = var_14;
        arr_2 [i_0] = (max((((-97 ? -8661963904268830553 : 8661963904268830552))), var_11));
        arr_3 [i_0] [i_0] = (((23 ^ 0) - (max(822552292067893539, (3297087093 == 0)))));
        arr_4 [i_0] = (((0 / var_0) <= ((max(0, (var_15 - var_2))))));
        arr_5 [i_0] = (max((((var_3 ? 3307668317 : (-9223372036854775807 - 1)))), (min(1056263599548936955, 15569218093713565686))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        arr_16 [i_3] = (((((38 - 8525078405479158408) > var_9)) ? ((max(((max(0, var_12))), ((var_8 ? 27158 : 22))))) : (min(-74, var_5))));
                        arr_17 [i_2] [i_2 - 2] [i_3] [i_2 - 2] = (((var_6 - var_9) + (((min(var_8, 171))))));
                    }
                }
            }
        }
        var_18 |= (max((((var_7 >= (max(1239828217, var_10))))), (max(0, 3055139079))));
        arr_18 [i_1] [i_1] = var_5;
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {

        for (int i_6 = 2; i_6 < 16;i_6 += 1)
        {
            var_19 = (min(var_19, ((min((-1217584395 / 75), var_8)))));
            arr_24 [i_6] = 22576;
            /* LoopNest 3 */
            for (int i_7 = 4; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 15;i_9 += 1)
                    {
                        {
                            arr_32 [i_6] [i_7] [i_8 - 3] [i_9] = (min(63, 57294));
                            arr_33 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = (max(var_9, (var_5 - 22)));
                            arr_34 [i_5] [i_6] [i_7 + 1] [i_7 + 1] [i_9] [i_9] [i_7] = 9307305401969544356;
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            var_20 = (((min(3578383488279593484, -117)) == ((min(var_0, 1)))));
            var_21 = (min((((var_1 + ((max(var_12, 41925)))))), (((var_4 || 1932629271) | var_0))));
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        {
                            var_22 = (max(var_22, var_5));
                            arr_44 [i_10] [i_10] [8] [i_13] = ((var_13 ? (1023 + var_2) : ((545667021 ? 9122217277044446581 : var_5))));
                            arr_45 [13] [12] [i_10] [3] [i_13] = var_6;
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_14 = 1; i_14 < 16;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 17;i_16 += 1)
                {
                    {
                        arr_54 [i_14] [i_14] = -4532;
                        arr_55 [i_5] [3] [i_5] [i_14] = (((min(2981472650, -25294)) / var_5));
                        arr_56 [i_14] [i_14 - 1] [i_15] = (((min(var_14, var_7)) == var_4));
                    }
                }
            }
        }
    }
    #pragma endscop
}
