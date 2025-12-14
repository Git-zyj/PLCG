/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((var_4 || (((-(!var_3)))))))));
    var_11 = ((!((((24888 ^ 3044722) ? 4294967295 : 4291922582)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (((((arr_2 [i_0]) ? (arr_2 [i_0]) : var_4)) + (((arr_2 [i_0]) - (arr_2 [i_0])))));
        var_12 = (min((2047 * 32752), (arr_0 [i_0])));
    }

    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 14;i_2 += 1)
        {
            var_13 = (max(var_13, ((((50985 ? 39440 : -116))))));

            for (int i_3 = 3; i_3 < 15;i_3 += 1) /* same iter space */
            {
                arr_12 [i_1] [i_1] [i_1] [i_1] = (max(var_6, ((-32754 ? ((max(26066, var_5))) : 14523))));
                arr_13 [i_1] [i_1] [i_1] = ((~(var_0 && var_7)));
                arr_14 [i_1] [i_3] = (arr_11 [i_1] [i_3] [i_2] [i_1]);
            }
            for (int i_4 = 3; i_4 < 15;i_4 += 1) /* same iter space */
            {
                var_14 = ((~(arr_5 [i_2] [i_4 - 3])));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_15 = var_1;
                            var_16 = (3044738 ? 99 : 4291922569);
                            var_17 = var_1;
                            arr_24 [0] [i_5] [i_5] [i_1] = (((~27205) ? (min((arr_19 [i_5 + 1] [i_4 - 3] [7] [i_2 - 1] [i_2] [i_2]), (arr_19 [i_5 + 1] [i_4 - 3] [i_4] [i_2 - 1] [i_1] [i_1]))) : ((-(arr_19 [i_5 + 1] [i_4 - 3] [i_2] [i_2 - 1] [i_2 + 2] [i_2])))));
                        }
                    }
                }
                arr_25 [i_1] [i_2 + 1] = (arr_18 [6] [i_2] [i_4 - 1]);
            }
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            var_18 *= (arr_21 [i_1] [0] [i_7] [i_7] [i_7] [i_7] [i_7]);
            var_19 = (min((arr_10 [i_1] [i_1] [i_7] [i_7]), (arr_22 [i_1] [i_7] [i_1] [i_1] [i_1] [i_1] [i_1])));
            var_20 = ((-((-(arr_15 [i_7] [i_7] [i_1])))));
        }
        var_21 = (min(var_21, (~63488)));
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        arr_33 [i_8] &= (arr_29 [i_8]);
        var_22 += 2147483647;
    }
    #pragma endscop
}
