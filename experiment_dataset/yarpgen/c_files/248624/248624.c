/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_17 >= 32767) ? (max(-var_13, var_9)) : var_13));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (~32762);

        for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_21 = (arr_0 [i_0]);
            arr_7 [i_0] [i_1 - 1] = ((32762 == (arr_5 [i_0] [i_0] [i_0])));
            var_22 = 17921435070584946153;
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_23 = ((!((((arr_0 [i_0]) ? (arr_6 [i_0] [i_0]) : (arr_1 [i_2]))))));

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                var_24 = ((~(arr_13 [i_2 - 1] [i_2 - 1] [i_2])));

                for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                {
                    arr_17 [i_0] [i_0] [i_0] [i_2 - 1] [i_3] [i_4] = ((((-32763 + 2147483647) << (26716057 - 26716057))));
                    arr_18 [i_0] [i_0 - 4] [i_0] = (arr_12 [i_0 - 2] [i_2 - 1] [i_4] [i_4]);
                    arr_19 [i_0 - 4] [i_0] [i_0] [i_0] [i_3] = arr_11 [i_2] [i_0] [i_2];
                    arr_20 [i_0] [i_0] = ((arr_1 [i_0 - 4]) ? 32741 : (arr_1 [i_2 - 1]));
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                {
                    arr_24 [i_2] [i_2 - 1] [i_0] = 2147483647;
                    arr_25 [i_0 - 3] [i_0] [i_0 - 2] [i_0] = (((arr_21 [i_0 - 1] [i_0]) ? var_3 : (arr_21 [i_0 - 4] [i_0 - 4])));
                }
            }
            for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
            {
                var_25 = 1;
                var_26 = -32738;
                arr_28 [i_2 - 1] [i_0] = (arr_9 [i_0] [i_2]);
            }
            for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
            {
                var_27 = var_19;
                var_28 = (arr_29 [i_2] [i_2] [i_2 - 1]);
            }
            for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
            {
                arr_35 [i_0] [i_2] [4] [i_0] = (-(arr_31 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]));

                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_39 [i_0] [i_9] = (~9714597930304443368);
                    arr_40 [i_0] [i_8] [i_2] [i_0] = (arr_1 [i_0 + 2]);
                }
            }
        }
    }
    #pragma endscop
}
