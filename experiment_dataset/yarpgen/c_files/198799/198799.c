/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_12 << (var_8 - 1114000193))) - var_2));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (((((-(arr_0 [i_0])))) && ((!(arr_0 [i_0])))));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_16 -= (((252 <= var_9) <= (var_1 < 493413646099882838)));
                var_17 = (!58);
                var_18 = ((((var_13 | (arr_6 [i_0] [i_1] [i_0]))) * (!255)));
            }
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                arr_13 [i_0] = (((((var_0 || (arr_12 [i_3] [i_3] [i_3])))) == ((-(10807 * 1)))));
                var_19 = (min(var_19, (255 - 255)));

                for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                {
                    var_20 = 2305838611167182848;
                    var_21 = (max(var_21, ((((((var_12 == (arr_4 [8])))) + (((!(arr_10 [i_1] [10] [i_4])))))))));
                    var_22 = ((~(!0)));
                    var_23 = (max(var_23, (((+((((16399939839754405727 == 745059987) || var_12))))))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    var_24 = (~1952140781);
                    var_25 = 10807;
                    var_26 = -18446744073709551615;
                    var_27 = (0 - 9223372036854775805);
                }
                var_28 = ((!(((109 - (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                var_29 = (-8306 < 268435456);
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        {
                            arr_25 [i_6] [i_6] [i_6] [5] [i_6] [i_0] = (-2070894364 % -543468200);
                            var_30 = (((((((((arr_22 [9] [1] [1] [i_6] [i_7] [1]) < var_12)))) | 8)) << ((((~((var_3 >> (4294967295 - 4294967291))))) + 50))));
                            var_31 = (max(var_31, (((!17218) << (!8589934560)))));
                            var_32 = ((-(87 * 0)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        {
                            var_33 = (i_0 % 2 == 0) ? ((((((!(arr_8 [i_0] [i_6] [i_0] [i_10])))) >> (((arr_4 [i_0]) - 581431992))))) : ((((((!(arr_8 [i_0] [i_6] [i_0] [i_10])))) >> (((((arr_4 [i_0]) - 581431992)) - 1026524525)))));
                            var_34 -= (((((!(arr_15 [8] [i_6] [i_1] [8])))) ^ (31867 >> var_14)));
                            var_35 = (max(var_35, (((!((((-1 + 2147483647) >> (31605 - 31579)))))))));
                        }
                    }
                }
            }
            var_36 = (((var_5 ^ (arr_20 [0] [0]))) ^ (((((arr_8 [i_0] [i_0] [i_0] [i_0]) != (!var_5))))));
        }
        arr_31 [i_0] = (!(255 <= var_14));
    }
    var_37 = (min(var_37, (-var_13 + var_2)));
    #pragma endscop
}
