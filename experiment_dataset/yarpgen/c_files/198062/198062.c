/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((max(var_7, var_4))) ? ((min(var_6, var_9))) : var_8);
    var_11 = ((var_3 % (~var_4)));
    var_12 = ((var_8 ? (((((-1420553286 ? var_6 : var_1))) ? var_5 : ((var_3 ? 1420553285 : var_8)))) : ((var_3 ? ((var_4 ? -51906372 : var_7)) : var_8))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        var_13 = (max(var_13, ((~((-(arr_6 [i_3 - 1] [i_3 - 1] [i_3 + 1])))))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_14 = (((((max(var_5, var_7)) ? 249 : (((arr_6 [i_1] [i_3 + 1] [i_1]) ? (arr_9 [i_0] [i_1] [i_0] [i_0]) : (arr_12 [i_0] [3] [i_0] [i_0] [i_0] [i_0])))))));
                            var_15 = (min(var_15, (((!((min((arr_3 [i_3 - 1]), (arr_3 [i_3 + 1])))))))));
                            arr_14 [i_0] = (arr_1 [4]);
                            arr_15 [i_0] [i_1] [4] [i_3 + 1] [i_4] = (arr_4 [i_0] [5] [i_4]);
                        }
                    }
                    var_16 = (((((((var_3 ? var_3 : var_3))) ? 218242956 : (var_3 == var_3)))) ? var_0 : ((((0 != ((((arr_2 [9] [9]) << (((arr_6 [4] [i_1] [i_2]) + 4836383912513076582))))))))));

                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_17 ^= (var_8 != (((arr_17 [i_1] [i_0]) ? var_4 : ((218242956 ? 107 : 1)))));
                        var_18 |= ((((2341113761 | (((var_1 ? (arr_4 [i_1] [0] [i_1]) : 107))))) >= var_4));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        var_19 = (max(var_19, ((((107 - var_5) ? (((max(56, 0)))) : (arr_10 [i_1] [i_6] [5] [i_1] [i_0] [i_0]))))));
                        var_20 = ((var_7 ? (((arr_2 [i_0] [i_1]) ? var_9 : (arr_2 [i_0] [i_1]))) : (arr_12 [1] [i_6] [i_6] [7] [7] [2])));
                        arr_21 [i_2] &= (arr_20 [i_0]);
                    }
                    arr_22 [6] [i_1] [6] = (var_8 != var_0);
                }
            }
        }
    }
    var_21 = var_0;
    #pragma endscop
}
