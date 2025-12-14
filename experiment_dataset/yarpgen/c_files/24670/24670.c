/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 67108863;
        arr_3 [6] = (((arr_1 [2] [i_0]) ? ((((arr_1 [i_0] [i_0]) / (arr_0 [i_0] [i_0])))) : 2060547226));
        var_18 = ((~(arr_0 [i_0] [i_0])));
        var_19 = (min(var_19, (((~(arr_1 [i_0] [i_0]))))));
        var_20 = (((arr_0 [i_0] [i_0]) ? 783208161 : var_14));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (min(659677837, ((((arr_5 [i_1]) != 91)))));
        var_21 = (min(var_21, ((min(((min((arr_4 [i_1]), (arr_4 [i_1])))), ((-(arr_4 [i_1]))))))));
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        var_22 = ((((max(255, 165))) && 1));
        var_23 *= 1;
        var_24 = (((((max(3, (arr_7 [i_2]))))) < (arr_8 [i_2 + 1] [14])));
        var_25 = 16383;
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_26 = ((~(max(-1, (arr_11 [i_3] [i_3])))));
        arr_12 [i_3] [i_3] = (arr_9 [8]);
        arr_13 [i_3] = (arr_11 [i_3] [7]);
    }
    var_27 = (max(91, var_8));
    var_28 = (var_6 ? (((var_7 >= (var_11 << 3)))) : var_17);
    #pragma endscop
}
