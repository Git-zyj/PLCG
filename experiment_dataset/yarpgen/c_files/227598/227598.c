/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= ((max(var_4, ((var_0 ? 88778105 : var_9)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 |= (arr_1 [i_0]);
        var_13 = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? ((88778111 << (((arr_1 [i_0]) - 1994288222526752993)))) : (max(-82, var_0))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 8;i_3 += 1)
            {
                var_14 = (((((((min(var_1, 1)))) <= ((var_4 - (arr_5 [i_3 + 3]))))) ? ((-82 ? 0 : (arr_7 [i_1] [i_2] [i_1]))) : -27611));
                var_15 = (min(var_4, (arr_6 [i_1] [0] [i_3])));
                var_16 = (max(var_16, (((((7178747723575161030 ? 1884408739893487797 : 5609710926193174918)))))));
            }
            var_17 = 177;
            var_18 = var_3;

            for (int i_4 = 2; i_4 < 8;i_4 += 1)
            {
                var_19 = (max((min(((~(arr_11 [5] [i_2] [i_1]))), ((16448 ? var_9 : (arr_5 [i_1]))))), (arr_6 [i_4 + 3] [i_4] [i_4 + 1])));
                var_20 = (((6447 >= 11935488242812171592) ? -3285070509 : (max((arr_6 [i_1] [i_2] [i_4 + 3]), (arr_6 [i_1] [i_1] [i_1])))));

                /* vectorizable */
                for (int i_5 = 3; i_5 < 10;i_5 += 1)
                {

                    for (int i_6 = 2; i_6 < 10;i_6 += 1)
                    {
                        var_21 = ((-27607 ? 2235804429 : 1));
                        var_22 = (min(var_22, (((var_1 << (177 - 172))))));
                        var_23 = ((var_8 ? (arr_13 [i_4 - 2] [i_5 - 1] [i_6 - 1]) : (arr_8 [i_4 + 3] [i_1] [i_5 + 1] [i_6 - 1])));
                        var_24 = ((~(arr_16 [i_1] [i_5 - 3] [2] [i_6 - 2] [i_5])));
                    }
                    var_25 = 10764;
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    var_26 ^= ((-(!8)));
                    var_27 = ((!(arr_6 [9] [i_1] [i_4 + 3])));
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    var_28 = (max(var_28, 2608698951199095954));
                    var_29 = ((((((var_3 | (arr_1 [10]))) / (~354002084))) > 8169731863005127993));
                    var_30 = ((1750271203 / ((-1041103842101728153 ? (arr_11 [i_8] [i_4 - 1] [5]) : (arr_11 [5] [i_4 + 3] [i_4])))));
                }
                var_31 = ((((min((min(var_6, -441618340)), ((min((arr_19 [1] [i_1] [6] [7]), var_9)))))) ? (-4543179709826713558 ^ var_3) : ((((((var_9 - (arr_18 [i_4 - 2] [i_4] [i_4] [i_4])))) ? (min(var_1, (arr_0 [i_2]))) : 0)))));
            }
        }
        var_32 &= max(3320968932165566104, -2147483644);
        var_33 = var_10;
    }
    #pragma endscop
}
