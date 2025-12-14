/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((2500014324 || 2500014324) ? (((((var_5 ? 0 : var_7)) <= -32755))) : (((32760 >= (var_8 <= var_15))))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_18 = (0 >= ((17611434139507816920 ? -28032 : (!10))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_19 = var_13;
                        var_20 = (min(var_20, (((!(arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]))))));
                        arr_12 [i_0] [i_1] [1] [i_3] [1] = (((arr_7 [i_0 + 1] [i_1] [i_0 - 1]) == (arr_7 [i_0 - 1] [i_1] [i_0 - 1])));
                    }
                }
            }
            var_21 &= -var_1;
        }
        for (int i_4 = 1; i_4 < 19;i_4 += 1) /* same iter space */
        {
            arr_16 [i_4] = (i_4 % 2 == 0) ? ((((((!(((0 ? 3588282409 : 30702)))))) >> ((((((var_6 ? (arr_5 [i_4]) : var_1)) ^ (arr_3 [i_0 + 1] [i_4] [i_4 + 1]))) + 28063))))) : ((((((!(((0 ? 3588282409 : 30702)))))) >> ((((((((var_6 ? (arr_5 [i_4]) : var_1)) ^ (arr_3 [i_0 + 1] [i_4] [i_4 + 1]))) + 28063)) - 3523)))));
            var_22 = ((((1 && -101) || 3588282395)));
            var_23 = (max(var_23, 0));
            var_24 = ((0 >= (((((0 ? (arr_6 [i_0 - 1] [i_0 + 1] [i_4] [i_4]) : 65356))) ? (~-16) : (arr_7 [i_4] [i_4] [10])))));
            var_25 = (((((4111604472 || var_9) > ((((arr_7 [i_4] [i_4] [6]) || (arr_11 [i_0] [i_4] [i_4] [i_0])))))) ? (!0) : var_8));
        }
        for (int i_5 = 1; i_5 < 19;i_5 += 1) /* same iter space */
        {
            arr_20 [i_0] [i_0 - 1] [i_5] = (arr_0 [i_0]);
            arr_21 [i_5] = (((((arr_1 [i_0 - 1] [i_0 - 1]) ? -7526857568119464216 : ((min(var_6, 1))))) * ((((arr_15 [i_0] [i_5] [i_0 - 1]) ? ((-(arr_6 [i_0] [i_0] [i_5] [i_5]))) : ((min(-101, 0))))))));
            var_26 = (max((((arr_18 [i_5]) ? (arr_18 [i_5]) : (arr_18 [i_5]))), ((-(arr_18 [i_5])))));
        }
        var_27 = (min(var_27, (arr_3 [0] [6] [i_0 + 1])));
        var_28 |= (min(var_2, ((12329 ^ (arr_0 [i_0])))));
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_29 = (min(var_29, ((min((arr_6 [i_6] [i_6] [i_6] [i_6]), ((1 ? (arr_24 [i_6] [i_6]) : (max((arr_1 [i_6] [11]), var_10)))))))));
        arr_25 [i_6] |= (max((arr_2 [i_6] [i_6] [i_6]), ((min((var_0 && 4294967276), 96)))));
    }
    for (int i_7 = 2; i_7 < 12;i_7 += 1)
    {
        var_30 = 566837813;
        var_31 = (((0 ? 103 : 28332)));
    }

    /* vectorizable */
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        var_32 -= (((((arr_30 [6] [6]) / (arr_19 [i_8] [i_8]))) >= ((((arr_2 [i_8] [i_8] [i_8]) ? var_1 : var_0)))));
        var_33 += ((-478516445522122088 || (((arr_18 [1]) >= 566837811))));
    }
    var_34 = max((31504 >= 7), 31216);
    var_35 &= (((max((var_11 << var_3), var_9)) >> (5809055876884236671 - 5809055876884236664)));
    #pragma endscop
}
