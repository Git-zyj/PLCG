/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_13 = (((((19 ? 61440 : var_12))) ? (arr_2 [i_0] [i_1]) : var_11));
            arr_4 [i_1] [13] [4] = ((-3 ? -45 : 1993930417907694919));
            arr_5 [i_0] [i_0] [i_1] = ((arr_2 [i_0] [i_1]) ? 19 : (arr_2 [i_0] [i_1]));
            var_14 = (max(var_14, (arr_0 [i_0] [i_1])));
        }
        var_15 = (min(var_15, ((max(((((((747016991 ? 19 : 45))) ? 29236 : 43))), ((var_7 ? (((var_10 ? (arr_0 [9] [9]) : var_1))) : 15373318281001390596)))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    arr_12 [i_2] [i_2] [i_3] [i_0] = (((((~((-32746 ? 48899 : 19))))) ? (((arr_2 [i_2] [i_3]) ? 36300 : 747016986)) : ((((!(arr_11 [i_0] [23] [i_0] [i_0])))))));

                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_16 = (max(var_16, (min(68, 29247))));

                        for (int i_5 = 2; i_5 < 24;i_5 += 1) /* same iter space */
                        {
                            var_17 = var_7;
                            var_18 -= ((((((arr_14 [i_0] [i_3] [i_3] [i_5 - 1] [i_5] [i_3]) / (arr_17 [i_5 + 1] [1] [i_5] [i_5] [i_5] [i_5 + 1])))) ? ((((arr_13 [i_0]) ? (arr_9 [i_2]) : -8326107527256647242))) : (((arr_9 [i_2]) ? (max(var_8, (arr_15 [i_0] [i_2] [i_0] [i_4] [i_4] [i_3]))) : ((((arr_0 [i_0] [i_0]) ? 1152921504606322688 : 36305)))))));
                            arr_18 [i_0] [i_0] [i_0] [i_3] [i_0] = -40;
                        }
                        for (int i_6 = 2; i_6 < 24;i_6 += 1) /* same iter space */
                        {
                            var_19 = ((!((min((max(69, 2803772062)), (((48991 ? 29231 : var_6))))))));
                            var_20 = ((!(arr_17 [i_0] [i_2] [i_3] [i_6 + 1] [23] [i_0])));
                            var_21 = 747016985;
                            var_22 = ((!(((7991 ? 57559 : 2803772062)))));
                        }
                        for (int i_7 = 2; i_7 < 24;i_7 += 1) /* same iter space */
                        {
                            var_23 = (arr_7 [i_0] [i_2] [i_3]);
                            arr_23 [i_3] [6] [6] [1] [i_7] [6] = ((-96739314 ? var_11 : (min(62, (arr_14 [i_3] [i_2] [i_3] [i_4] [i_7] [i_3])))));
                            var_24 = (((((~(((arr_20 [7] [7] [i_3] [i_3] [i_3]) ? -1593877110 : var_7))))) ? (((59301 ? 29247 : 51))) : ((var_0 ? (arr_17 [i_0] [i_7 - 2] [i_3] [i_4] [i_7] [i_7]) : var_1))));
                        }
                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 24;i_8 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [i_3] [22] [i_4] [i_4] [i_4] [i_8] = ((arr_15 [i_0] [i_8 + 1] [i_3] [24] [i_3] [8]) ? 26131 : 229);
                            arr_27 [i_3] [i_3] [i_3] [i_4] [i_8 - 2] [i_3] [i_2] = ((~(arr_0 [i_8 + 1] [i_8 + 1])));
                        }
                    }
                    var_25 = var_1;
                    arr_28 [i_0] [i_3] [i_2] [i_3] = 18272;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
    {
        arr_31 [i_9] = (((((26 ? 205 : (arr_1 [8])))) ? ((205 ? 144115188071661568 : (arr_24 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))) : ((18446744073709551594 ? 214 : 144115188071661568))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                {
                    var_26 |= (~var_12);
                    var_27 = (var_8 / var_4);
                }
            }
        }
        var_28 = (((((var_5 ? 144115188071661568 : (arr_0 [10] [i_9])))) ? 234 : (((!(arr_15 [i_9] [i_9] [i_9] [i_9] [1] [i_9]))))));
        var_29 = (max(var_29, ((((arr_29 [i_9] [i_9]) ? var_6 : (arr_29 [i_9] [i_9]))))));
        arr_36 [i_9] = (arr_20 [17] [i_9] [i_9] [i_9] [i_9]);
    }
    var_30 = (min(var_30, ((((var_7 ? (!var_3) : 59301))))));
    #pragma endscop
}
