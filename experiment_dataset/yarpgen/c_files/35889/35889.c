/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = (((~42208) + ((((arr_0 [1]) && ((var_5 >= (arr_1 [2]))))))));
        arr_3 [i_0] [i_0] = (min((max(var_3, var_4)), var_11));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        var_14 = (max(var_14, var_4));

        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_10 [i_1 - 1] [i_2] = var_11;

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                arr_15 [i_3] [i_2] [i_1] = var_6;
                var_15 = (arr_0 [i_1 - 2]);
                arr_16 [i_1 - 1] [i_1 - 1] [i_2] [i_3] = (((((arr_6 [i_1 + 3]) + 2147483647)) << ((var_5 % (arr_0 [i_2])))));
            }
            arr_17 [i_2] = var_9;
            var_16 &= (arr_2 [i_1] [i_2]);
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_17 = (max(var_17, ((((arr_14 [i_1] [2] [i_1 + 2] [i_4]) * (arr_14 [i_1] [2] [i_1 + 1] [2]))))));
            arr_20 [i_4] = (arr_6 [i_4]);
            var_18 = (min(var_18, ((((var_12 && var_2) == var_3)))));
            arr_21 [i_1] [i_4] = (~32767);
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            arr_31 [i_4] [i_4] [i_4] [i_7] = (((((var_10 + (arr_13 [i_1] [8] [9])))) ? 0 : (!59)));
                            arr_32 [i_4] [10] [i_4] [i_6] [12] = (arr_9 [i_4] [i_4]);
                            arr_33 [i_4] [i_4] [i_5] [2] [i_7] [0] = var_10;
                            arr_34 [i_1] [i_1] [i_4] [6] [i_6] [i_4] = (((arr_29 [i_1] [i_6] [i_5] [i_1 + 2] [i_4] [1] [i_1 - 2]) - (arr_5 [i_4])));
                            var_19 = (max(var_19, var_1));
                        }
                        for (int i_8 = 2; i_8 < 16;i_8 += 1)
                        {
                            arr_39 [i_1] [i_4] [i_6] [i_4] [i_8] = ((!(arr_38 [i_1 + 1] [i_5] [i_6])));
                            arr_40 [i_4] [5] [i_8 - 1] [i_8 - 1] [i_8] = -29698;
                        }
                        var_20 += (arr_9 [2] [2]);
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        arr_43 [1] = (min(var_2, (((88512703 || (var_4 / 61677))))));
        arr_44 [17] = var_5;
        var_21 = (max(var_21, ((((var_11 > ((5171 - (arr_42 [3]))))) ? ((min(var_2, (arr_41 [i_9])))) : ((((((arr_41 [i_9]) % 229)) == (21199 + var_10))))))));
    }
    var_22 = (max(var_22, -8558885889221497576));
    #pragma endscop
}
