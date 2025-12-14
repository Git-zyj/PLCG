/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_10 = (min(var_10, ((((max((max(98, (arr_1 [i_0] [i_0]))), (min(242115593, (arr_1 [i_0] [i_0]))))) % (((((-(arr_1 [i_0] [i_0 + 1])))) ? (((~(arr_0 [i_0] [i_0])))) : (arr_2 [i_0 - 1] [0]))))))));
        var_11 = (min((min(((~(arr_2 [i_0] [i_0]))), ((max((arr_0 [i_0] [i_0]), 1113006780))))), (((arr_1 [i_0] [i_0]) ? (((arr_2 [23] [i_0]) & (arr_1 [i_0 + 1] [i_0 + 1]))) : (arr_2 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = (+-var_1);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_7 [i_1] = ((!(0 & 1624645606)));
        arr_8 [15] = (((((arr_0 [i_1] [i_1]) ? (((((arr_2 [i_1] [i_1]) + 9223372036854775807)) >> (-2147483629 - -2147483634))) : (((1215773132 >> (1083370718482646180 - 1083370718482646160)))))) != (arr_6 [i_1] [i_1])));
    }
    for (int i_2 = 3; i_2 < 24;i_2 += 1)
    {
        var_12 = (max(var_12, ((((((((max((arr_9 [9]), (arr_9 [i_2])))) % ((-(arr_10 [i_2])))))) ? -1617111363 : ((-((-7380943674780006712 - (arr_11 [i_2] [i_2]))))))))));
        arr_12 [i_2] [i_2] = arr_10 [i_2];
        var_13 += 222;
        arr_13 [i_2] &= 1130878391;
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 10;i_4 += 1)
        {
            {
                arr_18 [1] [1] [i_4] = (min(((17878 >> (((~907040655) + 907040704)))), (((((((arr_0 [i_3] [i_4]) - var_3))) ? ((min((arr_9 [i_4]), 32750))) : ((((arr_11 [i_3] [i_4]) == 1142459347))))))));
                arr_19 [i_3] [i_3] [i_4] &= (arr_2 [i_3] [i_3]);
            }
        }
    }
    #pragma endscop
}
