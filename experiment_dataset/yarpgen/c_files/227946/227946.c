/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    var_13 = var_4;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_14 = ((((((~(arr_2 [i_0 + 2]))) != (arr_2 [i_0]))) ? (((((max((arr_0 [i_0 + 2]), -8316625935121522639))) ? (((arr_2 [23]) % (arr_1 [i_0] [i_0 - 1]))) : (((max(var_5, (arr_0 [i_0 + 2])))))))) : (8316625935121522638 % 6752078780732825172)));
        var_15 = arr_1 [i_0] [i_0];

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_5 [i_1] [i_1] [i_1] = (arr_4 [i_0] [i_0] [i_0]);
            var_16 = (max((((~((max((arr_0 [i_0]), (arr_0 [i_1]))))))), (max(((((arr_1 [i_0] [i_1]) ? (arr_1 [i_0] [i_0]) : (arr_3 [i_0 - 1])))), (max(4315517110303920848, (arr_2 [i_0])))))));
        }
        arr_6 [i_0] [i_0] = max(var_8, (arr_1 [i_0] [i_0]));
        var_17 = (max(((((max(var_4, (arr_4 [i_0] [6] [21])))) ? var_11 : (((arr_3 [i_0 + 1]) ? var_7 : (arr_4 [i_0] [i_0] [i_0]))))), (min(((~(arr_4 [i_0] [1] [24]))), (arr_0 [i_0 + 1])))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_18 = (1 > var_11);
        var_19 = (arr_7 [6] [i_2]);
        var_20 = (max(-7941921799196465385, 60682));
    }
    #pragma endscop
}
