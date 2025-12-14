/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((65535 ? 0 : 6));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 = (min(var_20, (((((((arr_1 [i_0]) || (arr_0 [i_0])))) ^ 65532)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_21 = (arr_4 [i_0] [i_1] [i_3]);
                        var_22 = var_0;
                        var_23 ^= ((min(5, var_17)));
                        arr_8 [i_0] [i_1] [i_2] [i_2] [i_0] [i_3] = (((arr_7 [i_3] [i_3]) && var_9));
                    }
                }
            }
        }

        for (int i_4 = 4; i_4 < 9;i_4 += 1) /* same iter space */
        {
            var_24 = ((4294967295 + (((((max(4294967289, var_2)) <= (((392552692 ? 16383 : 20989)))))))));
            arr_11 [6] [i_4 - 1] = (min((((arr_4 [i_4 - 2] [i_4 - 4] [i_4 - 2]) ? var_9 : (arr_4 [i_4 - 3] [i_4 - 4] [i_4]))), ((min((arr_4 [i_4 + 1] [i_4 - 4] [i_4]), (arr_4 [i_4 - 3] [i_4 - 4] [i_4]))))));
        }
        for (int i_5 = 4; i_5 < 9;i_5 += 1) /* same iter space */
        {
            var_25 ^= (((((arr_7 [i_0] [i_5 + 1]) ? (arr_6 [i_5 - 3] [i_5 - 1]) : (arr_6 [i_5 - 1] [i_5 - 2]))) > (((arr_6 [i_5 - 1] [i_5 - 1]) ? (arr_6 [i_5 - 1] [i_5 + 1]) : (arr_6 [i_5 - 1] [i_5 - 3])))));
            var_26 = ((5 ? (((min(65535, var_10)) & var_9)) : ((((-25565 ? var_2 : 4294967278)) ^ var_5))));
        }
        for (int i_6 = 4; i_6 < 9;i_6 += 1) /* same iter space */
        {
            arr_20 [i_6] [i_0] [i_0] |= (min(var_10, ((((((arr_6 [i_6] [i_0]) ? var_17 : var_2)) != 20989)))));

            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                var_27 = (min(var_27, (((~((65530 ? 1 : 5)))))));
                var_28 = (min(var_28, ((min((((-((65529 << (3203 - 3194)))))), (min((max((arr_24 [6] [i_6]), 5)), (arr_21 [i_6 - 2] [i_6 - 2] [i_6 - 1] [i_6]))))))));
            }
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 8;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            arr_34 [i_0] [i_9] [i_9] [i_9] [i_9] [i_10] = (((arr_32 [i_9] [i_8] [i_6]) ? ((max(-3136, -100))) : ((65521 ? (arr_32 [i_8 + 1] [i_8 + 1] [i_8 + 1]) : (arr_32 [i_6 - 3] [i_9] [i_10])))));
                            var_29 = ((((var_4 % var_16) <= (arr_28 [i_0] [i_6] [i_8 + 2] [i_9] [8]))));
                            arr_35 [i_0] [i_9] = ((((((min(15, 0))))) & (((arr_18 [i_6 - 2]) | var_17))));
                        }
                    }
                }
            }
            var_30 = max(((min((arr_26 [i_6] [i_6 + 1] [1]), (arr_27 [i_6] [i_6 - 1] [i_6 - 1] [i_6 - 1])))), (((arr_25 [i_6 - 4] [i_6 - 2] [i_6]) << ((((max((arr_21 [i_0] [i_0] [i_6 + 1] [i_0]), (arr_14 [i_0])))) - 30886)))));
        }
    }
    #pragma endscop
}
