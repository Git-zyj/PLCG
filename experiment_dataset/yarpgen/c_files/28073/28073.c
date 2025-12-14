/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_17 = (((max(0, -30841))) ? ((119226897817622000 ? -30862 : var_7)) : var_11);
                        var_18 += 791041518;
                        var_19 = (max(var_19, ((-((-27604 ? 26699 : (max(var_5, var_7))))))));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_20 = var_6;
            var_21 += arr_13 [i_4] [i_0];

            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                var_22 += (min(-1326879615, ((min(var_3, (arr_15 [i_0] [i_0] [i_0]))))));
                var_23 = -27604;

                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    var_24 |= (((min(38837, ((-(arr_2 [i_5]))))) + var_6));
                    var_25 ^= ((max(0, 27591)));
                }
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    var_26 = (min(-6, 0));
                    arr_22 [i_7] [i_0] &= var_8;
                    var_27 += (max((((var_15 || (arr_11 [i_7])))), (min((arr_7 [i_7] [i_7]), 1))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_28 = 244;
                    var_29 += var_10;
                    var_30 += (-1 * 14634050418076725650);
                    var_31 = -18949;
                }
            }
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            var_32 = 1326879630;
            var_33 = 4211274114;
            arr_27 [i_0] [1] [1] |= (1 | (+-1006632960));
        }
        arr_28 [i_0] = (!((((arr_14 [i_0] [i_0]) + -6))));
        arr_29 [i_0] [i_0] = -4084778347;
    }
    for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
    {

        for (int i_11 = 2; i_11 < 16;i_11 += 1)
        {
            var_34 = ((((arr_17 [i_11 + 1]) ? -220670697 : (arr_17 [i_11 - 2]))));
            arr_34 [i_10] [i_11] = (min((-24902 % var_12), (((min(261120, var_4))))));
            arr_35 [i_10] [i_11] = (min(0, 112));
            var_35 = ((-(((arr_2 [i_11 + 2]) ? var_3 : (arr_2 [i_11 + 1])))));
        }
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {

            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                arr_41 [i_10] [i_10] [i_13] = ((~(max(4294967291, var_2))));
                var_36 -= ((min(((0 ? 1 : var_13)), ((min(1, 1))))));
                arr_42 [i_10] [i_10] = (min((var_14 && -1), var_12));
                var_37 = ((26699 ? (~3812693655632825981) : var_11));
            }
            arr_43 [i_10] [i_10] = ((~((49116 ? -220670699 : 49))));
            arr_44 [i_10] [i_12] [i_12] = ((!((min(((((arr_5 [i_10] [i_10]) >= (arr_19 [i_10] [i_10] [i_12] [i_12] [i_12])))), (max(var_1, (arr_26 [i_10] [i_12]))))))));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            var_38 = (min(var_38, ((((arr_17 [i_10]) ? 127 : -3749)))));
            var_39 = 58455;
            var_40 = ((-(arr_37 [i_10])));
            var_41 *= (arr_2 [i_14]);
        }
        for (int i_15 = 0; i_15 < 18;i_15 += 1)
        {
            var_42 = (!(857146351 % 43894));
            var_43 = (((((arr_48 [i_15] [i_10]) ? 4294967293 : var_9))));
            var_44 = ((-(min(var_1, ((max(-54, var_8)))))));
            var_45 = (max(var_45, 0));
        }
        arr_52 [i_10] = 1;
    }
    for (int i_16 = 0; i_16 < 18;i_16 += 1) /* same iter space */
    {
        var_46 -= -1;
        var_47 = (max(var_47, ((max(((~((min(1, (arr_0 [i_16] [i_16])))))), ((75 ? var_4 : (arr_36 [i_16]))))))));
        arr_55 [i_16] = ((-(((max(var_7, 3636082152))))));
    }
    var_48 = var_11;
    #pragma endscop
}
