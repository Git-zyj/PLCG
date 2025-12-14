/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((var_9 > (var_12 / var_3))))) / var_3));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_15 = 5771232007983154324;
                            var_16 ^= (4294967295 != var_0);
                            var_17 = (arr_7 [5] [i_1]);
                            var_18 = (((arr_9 [i_1] [3] [i_0 + 1] [i_0 + 1] [i_0] [i_0]) - -23));
                        }
                        arr_16 [13] [8] [13] [4] [i_1] = ((((30 < (arr_13 [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0 - 1]))) ? var_11 : ((((max(4294967294, 21))) ? (arr_15 [i_1] [i_1] [i_1] [i_3 + 1] [i_3 - 1] [7]) : -var_5))));
                    }
                }
            }
        }
        var_19 = (((((((min((arr_4 [8] [i_0]), (arr_14 [18] [18] [i_0 + 1] [18] [2])))) ? (min((arr_6 [1]), var_4)) : (((-5771232007983154325 ? 30 : 4294967264)))))) + (min((((arr_8 [i_0] [10] [10] [i_0]) ? (arr_0 [9]) : var_6)), (-2147483647 - 1)))));
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        arr_21 [i_5] = (225 ? (min((2147483647 / 5771232007983154324), 4294967271)) : (((~((min((arr_3 [i_5]), var_12)))))));
        var_20 = (arr_3 [i_5]);
    }

    for (int i_6 = 1; i_6 < 9;i_6 += 1)
    {
        var_21 = min((((((-48 ? var_3 : 159)) >= (arr_18 [i_6] [i_6])))), (min((((!(arr_2 [i_6 + 1] [i_6])))), (arr_8 [i_6] [i_6] [i_6] [i_6 + 2]))));
        arr_25 [3] [i_6] = -23053;
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 7;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 9;i_8 += 1)
            {
                {
                    var_22 = (min(var_22, ((((min(var_5, 18446744073709551609)) >= (((((arr_5 [i_6 - 1] [i_6 + 2]) > var_12)))))))));
                    arr_31 [6] [i_6] = (min(-216980754265843792, (((var_3 && ((219 && (arr_2 [i_8] [i_7]))))))));
                    var_23 ^= (min(252, (((252 && (arr_28 [i_8]))))));
                    arr_32 [i_6] [i_7] [i_7] [i_6] = ((((((arr_10 [i_7 + 3] [i_6 + 2] [i_8] [i_8 + 2]) ? var_8 : -1776926345))) ? ((min(var_10, 5939913202153482224))) : (arr_7 [i_7 + 3] [i_6 + 2])));
                }
            }
        }
        var_24 = (1 + 1);
    }
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
        {
            var_25 ^= var_1;
            var_26 += var_2;
            var_27 = (max(var_27, var_2));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
        {
            var_28 &= var_10;
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 18;i_13 += 1)
                {
                    {
                        arr_43 [i_13] [i_11] [i_12] [i_13 + 1] = var_10;
                        var_29 = (~1);
                        var_30 = -2147483647;
                    }
                }
            }
        }
        var_31 -= (~8);
        arr_44 [18] [i_9] = 54;
        arr_45 [i_9] = ((((18446744073709551608 <= var_11) && ((min(var_2, var_11))))) ? ((((min((arr_9 [i_9] [i_9] [12] [i_9] [i_9] [i_9]), var_2))) ? (min(var_3, var_13)) : (arr_2 [i_9] [i_9]))) : (!var_7));
    }
    for (int i_14 = 0; i_14 < 13;i_14 += 1)
    {
        arr_48 [i_14] = var_10;
        arr_49 [i_14] [2] &= (((~13) > (~var_8)));
        var_32 = (min((((13 != ((min((arr_41 [3] [3] [i_14] [3] [3] [i_14]), 1)))))), -32));
    }
    var_33 = (var_10 | 4294967274);
    #pragma endscop
}
