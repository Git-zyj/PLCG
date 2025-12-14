/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((var_2 ? (max(-var_2, var_9)) : (((max(var_1, 36026597995708416)) + (max(18410717475713843199, 36026597995708416)))))))));
    var_11 ^= (((((var_0 ? (0 <= var_6) : var_0))) ? (((!((min(18410717475713843172, var_6)))))) : ((((((max(var_7, var_7)))) > var_9)))));
    var_12 *= (((!var_1) * (((var_7 < var_2) << ((min(var_4, var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((~((((max(18410717475713843208, 0))) ? (~var_7) : (arr_1 [i_0 - 1] [i_0 - 2])))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = -795064992;
                    var_13 = (max(var_13, (((((min((var_5 > 14079911255414243185), ((1955691329 ? 18208256879543571165 : 208))))) ? var_8 : (((arr_7 [i_0] [i_0] [i_0] [i_0]) % (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? var_0 : var_4)))))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                {
                    var_14 = (max(var_14, var_1));
                    var_15 = (1 / var_4);
                    var_16 &= ((((-795064992 ? 3967580464 : 18410717475713843172)) * 7));
                }
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    var_17 -= (max((((374727036 && (arr_13 [i_0] [i_0])))), ((max((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : 190)), 1)))));
                    var_18 = (i_0 % 2 == 0) ? ((((max(((18446744073709551607 ? 393469585469386531 : 0)), (((var_2 ? (arr_2 [i_4] [i_4]) : (arr_5 [i_0] [i_0] [i_0])))))) <= (((var_8 << (((((((arr_12 [i_0]) + 2147483647)) << (var_3 - 69))) - 2147483516)))))))) : ((((max(((18446744073709551607 ? 393469585469386531 : 0)), (((var_2 ? (arr_2 [i_4] [i_4]) : (arr_5 [i_0] [i_0] [i_0])))))) <= (((var_8 << (((((((((((arr_12 [i_0]) - 2147483647)) + 2147483647)) << (var_3 - 69))) - 2147483516)) + 2147483443))))))));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_19 = 63;
                    var_20 = 16843704621148891681;
                    var_21 = ((((var_0 ? (-2121645604 | var_8) : ((-(arr_8 [i_0] [i_0] [i_0]))))) * (((((var_4 == var_0) >= var_1))))));
                }
                var_22 = (max(var_22, (arr_11 [i_0] [i_0] [i_0] [i_0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 4; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            {
                var_23 = (min(var_23, var_6));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        {
                            var_24 &= 0;
                            var_25 ^= 3920240260;
                            arr_24 [i_7] [i_6] [i_6] [i_6] [i_7] = (max(((((!25) ? (arr_19 [i_7]) : (((arr_8 [i_6] [i_6] [i_6]) ? -1 : var_3))))), ((~((-6439813750520866128 ? 238487194165980451 : 1920724729308500456))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
