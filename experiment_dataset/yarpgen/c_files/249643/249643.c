/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((var_5 ? var_6 : ((-3799580918154072446 ? var_3 : var_7)))) / (((max((60414 <= var_11), (!2337967408)))))));
    var_17 &= var_9;
    var_18 += (max((~var_12), var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 += ((!((((((var_10 ? (arr_3 [i_0] [i_0]) : 60414))) ? (arr_1 [12] [i_1]) : (!1))))));
                var_20 = (max(var_20, -var_15));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
                {
                    var_21 = (-(arr_3 [i_0] [i_1]));
                    arr_7 [i_0] [10] [i_2] = (((arr_6 [i_0] [i_1] [i_2]) ? (arr_6 [i_0] [i_1] [i_2]) : 1));
                    var_22 = (min(var_22, (arr_5 [i_0] [i_0] [i_1] [i_2])));
                    var_23 = ((((var_8 & (arr_1 [i_0] [i_0])))) ? (arr_4 [i_0] [1] [19] [i_2]) : (arr_1 [i_0] [i_1]));
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {

                        for (int i_5 = 3; i_5 < 22;i_5 += 1)
                        {
                            arr_16 [1] [i_4] [i_4] [i_3] [i_3] [0] [i_0] = ((-(min((((var_10 < (arr_1 [8] [i_1])))), (~17559146232104361971)))));
                            arr_17 [i_1] [i_1] [i_3] [i_1] = (max(((((arr_1 [i_0] [i_1]) && (arr_9 [i_0] [i_0] [i_0] [i_0])))), (arr_12 [i_5 - 2] [i_5] [i_4] [i_0] [i_1] [i_0])));
                            arr_18 [i_1] [i_4] [i_3] [i_1] [i_0] = (max((arr_8 [i_0]), (arr_9 [i_0] [i_1] [i_3] [3])));
                            var_24 = (((((-1 ? var_1 : ((max(var_12, (arr_3 [i_1] [i_1]))))))) || (arr_12 [i_5 - 1] [i_5] [i_3] [i_5 + 1] [i_4] [i_3])));
                            var_25 = (max(var_25, (arr_10 [i_0] [i_1] [8] [i_0] [i_5])));
                        }
                        arr_19 [8] [8] = 1;
                    }
                    var_26 = (-4 ? ((var_0 ? (arr_11 [i_0] [i_0] [i_1] [i_0]) : -13)) : ((min((min((arr_5 [22] [1] [i_1] [i_0]), (arr_15 [i_3] [i_1] [i_1] [11] [i_0]))), (arr_8 [i_0])))));
                    var_27 = 6135;
                }
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    arr_22 [i_1] [i_1] = (((!5118) > (arr_14 [i_0] [i_0] [i_0] [i_1] [i_0])));
                    var_28 = (max(var_28, (arr_1 [1] [1])));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_29 = (arr_11 [i_0] [19] [i_7] [i_7]);
                    arr_25 [i_0] [i_1] = ((-(arr_5 [i_0] [i_1] [15] [i_1])));
                    var_30 = (((arr_14 [i_0] [i_0] [i_0] [i_0] [17]) ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                }
                arr_26 [i_0] = 4;
            }
        }
    }
    var_31 = (((!var_6) ? ((var_8 ? (~5437758728376547260) : var_11)) : ((((!var_6) ? -305261706 : ((var_7 ? var_0 : var_13)))))));
    #pragma endscop
}
