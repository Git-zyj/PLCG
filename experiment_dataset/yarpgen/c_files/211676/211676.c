/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((var_5 << ((((var_4 << (-32767 + 32771))) - 365600)))), var_9));
    var_15 = (min(var_6, -32767));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 = (min(var_16, var_3));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_2] [9] [1] = (-32767 | 67108863);
                    arr_9 [i_0] [i_1] [12] = var_0;
                    arr_10 [i_0] [i_1] [i_2] = -32761;
                    arr_11 [i_2] [i_1] [i_1] [i_0] = (var_6 & var_12);
                }
            }
        }

        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            arr_15 [i_0] [i_0] [i_3] = 18;
            var_17 += (((arr_3 [i_0] [i_3]) ? (((((65531 ? (arr_13 [i_3 - 2]) : var_7))) ? ((min(8191, var_11))) : var_1)) : (var_3 != 4227858432)));
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                var_18 += (((2174610974101913749 * var_10) ? (arr_19 [i_0] [i_4] [i_5]) : (arr_3 [i_0] [i_4])));
                arr_21 [i_0] [i_4 + 1] [i_4] = (arr_0 [i_0]);
            }
            var_19 += -42;

            for (int i_6 = 2; i_6 < 13;i_6 += 1) /* same iter space */
            {
                var_20 = (57324 > 18446744073709551615);
                var_21 = ((-29567 ? (((83 ? var_0 : 67108863))) : var_7));
                var_22 = (((((arr_0 [i_6]) ? 32754 : var_5)) == 2047));
            }
            for (int i_7 = 2; i_7 < 13;i_7 += 1) /* same iter space */
            {
                arr_27 [i_4] = var_2;
                var_23 += ((((arr_22 [5]) ? (arr_18 [10]) : var_5)));
            }
            for (int i_8 = 2; i_8 < 13;i_8 += 1) /* same iter space */
            {
                arr_30 [i_0] [i_4] [i_4] = var_1;
                arr_31 [i_0] [i_4] [i_4 + 1] [i_4] = var_5;
                arr_32 [0] [i_4] [i_4] = (-1441553468 & (var_11 > 6610226816675955745));
            }
        }
        for (int i_9 = 1; i_9 < 16;i_9 += 1)
        {
            arr_37 [3] = -13830;
            var_24 += ((((-(arr_33 [i_0] [i_0] [i_0])))));
            var_25 = (~3464107363606445135);
        }
    }
    var_26 = (min(var_26, (((-(min(-74, ((4227858406 ? 3305434410 : 192)))))))));
    var_27 = ((var_9 || ((max(264860706039523925, ((min(29196, var_6))))))));
    #pragma endscop
}
