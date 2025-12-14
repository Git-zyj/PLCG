/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_14 = (((arr_1 [i_0]) ? (((~(var_1 / var_5)))) : var_9));

        /* vectorizable */
        for (int i_1 = 4; i_1 < 17;i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] [i_0 + 1] [i_1] = (arr_3 [i_0 + 1]);
            arr_7 [i_1] [i_1 - 1] = (arr_3 [i_0 + 1]);
        }
        for (int i_2 = 4; i_2 < 17;i_2 += 1) /* same iter space */
        {
            var_15 = (((arr_1 [16]) >> ((((((min(-1311940408301309949, 1497637271))) ? (max((arr_3 [i_0]), (arr_8 [i_0 - 1] [i_0 - 1]))) : (arr_4 [i_2 - 4] [i_2 - 4] [i_0 - 1]))) - 5895961180954475965))));
            arr_10 [i_2] [i_2] = var_12;
            arr_11 [i_2] [i_2] = ((((min((max(var_2, (arr_2 [7] [14]))), (arr_5 [6] [6] [i_2])))) || (((var_4 ? (var_6 % var_11) : (arr_4 [9] [i_2] [i_2]))))));
        }
    }
    #pragma endscop
}
