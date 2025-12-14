/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_11 = (min((((((((arr_3 [i_0] [i_1]) || var_0)))) > (min(var_5, (arr_2 [i_1]))))), ((var_8 > (((((arr_2 [i_2]) || var_4))))))));
                            var_12 = (max(var_12, ((((var_2 || var_10) > (((min((arr_3 [8] [i_2]), var_9)) >> (((arr_4 [i_3 - 1] [i_1]) + 1103691602)))))))));
                            var_13 = min((max((arr_9 [i_0] [i_1] [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_1] [i_2] [i_1]))), ((var_3 ? var_5 : (arr_5 [i_0] [i_0] [i_2] [i_2]))));
                        }
                    }
                }
                var_14 = (min(var_14, (((((1073741823 || -3061) ? ((var_8 % (arr_1 [i_0]))) : (arr_9 [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                var_15 = ((((!(arr_9 [1] [i_1] [i_0] [i_1] [i_0]))) || (((var_7 ? -1073741815 : var_6)))));
                arr_10 [i_0] [i_0] = ((((((-7887 ? ((-(arr_9 [i_0] [i_0] [i_0] [i_1] [i_0]))) : (((var_9 >= (arr_9 [8] [i_1] [8] [8] [i_0])))))) + 2147483647)) >> (1073741823 - 1073741804)));
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 1; i_4 < 12;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = (var_10 || var_3);
        var_16 = (((arr_8 [i_4] [i_4 + 1] [i_4] [i_4 + 1]) ? 1 : var_5));
        arr_16 [i_4] [i_4 + 1] = (((arr_2 [i_4]) ? 1 : (arr_2 [i_4 - 1])));
        var_17 = var_8;
    }
    #pragma endscop
}
