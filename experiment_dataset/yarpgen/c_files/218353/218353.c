/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_9 [i_0] [i_1] [i_0] [i_0] [i_3] = ((-(((arr_2 [i_0] [i_1] [i_2]) ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0] [11] [i_3])))));
                        arr_10 [1] [1] [10] [i_1] [i_2] [i_1] = -16;
                        var_13 = ((-(arr_3 [i_3] [i_3])));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        var_14 -= 10745;
                        var_15 = (min(var_15, ((((((7377000900960345023 ? (arr_0 [i_0]) : (arr_0 [i_4])))) ? ((((!(arr_11 [i_0] [i_0] [i_0] [i_2] [i_2] [i_0]))))) : (((((18446744073709551615 ? (arr_8 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : var_2))) ? (min(24, 7)) : (((((arr_0 [i_0]) || 6127)))))))))));
                        arr_14 [1] [i_2] [i_0] [i_0] = ((+(min((arr_1 [i_0]), 26187))));
                        arr_15 [i_0] [i_1] [i_1] = (arr_5 [i_0] [0] [i_0]);
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_1] [i_2] [14] = (((((-(arr_7 [i_0] [i_0] [3] [i_0])))) ? ((((var_2 || (arr_8 [i_1] [17] [1] [i_1] [17] [i_1]))))) : (((arr_1 [i_0]) ? (arr_1 [i_2]) : var_7))));
                        var_16 = (min(((((max(var_12, var_7))) ? (((arr_0 [i_1]) ? 255 : 677464452680196884)) : (((arr_12 [8] [i_1] [i_1] [11]) ? (arr_5 [7] [i_2] [i_1]) : var_4)))), (((!(!var_10))))));

                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_17 = (max((((arr_2 [i_0] [i_1] [i_2]) ? var_2 : (arr_2 [i_1] [i_1] [i_1]))), ((min((arr_2 [i_1] [i_1] [1]), (arr_2 [i_0] [i_0] [i_0]))))));
                            arr_21 [9] [9] [1] [i_5] [i_6] = var_11;
                        }
                        for (int i_7 = 1; i_7 < 14;i_7 += 1)
                        {
                            var_18 = ((-(((((-677464452680196885 ? var_8 : -1970361706355542825))) ? ((-677464452680196885 ? (arr_0 [13]) : var_9)) : (~1191521481)))));
                            var_19 = 2603919975435571418;
                        }
                    }
                    arr_25 [5] [i_1] = ((-(arr_7 [i_0] [i_1] [i_2] [i_1])));
                    var_20 = (max(var_20, ((max(var_7, (arr_6 [i_0] [i_1] [i_1] [12]))))));
                }
            }
        }
    }
    var_21 = ((((((var_5 ? 6263250069459658691 : var_3))) ? (min(var_3, var_4)) : var_10)));
    var_22 = (((((128 ? 4159118690 : 95))) ? 6654100147995579397 : (((var_5 ? -var_5 : (min(var_6, 1113912822)))))));
    #pragma endscop
}
