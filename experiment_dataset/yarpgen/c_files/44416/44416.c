/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = ((!(((-(arr_3 [i_0]))))));
        var_13 |= ((((((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) < (arr_2 [i_0] [i_0]))) ? (((~(arr_2 [i_0] [i_0])))) : (min((arr_0 [i_0]), (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))))));
        arr_5 [i_0] = ((!((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_8 [i_1] [i_0] = ((!((!(((-(arr_6 [8] [8] [8]))))))));
            var_14 += ((((((arr_2 [i_1] [i_0]) / (arr_2 [i_1] [i_0])))) ? (((arr_2 [i_0] [i_1]) ^ (arr_2 [i_0] [i_1]))) : (((arr_2 [i_0] [i_1]) ? (arr_2 [i_1] [i_0]) : (arr_2 [i_0] [i_1])))));
        }
        var_15 = (min(var_15, (((!((((((arr_6 [18] [1] [4]) == (arr_0 [i_0])))) != ((((arr_6 [14] [i_0] [i_0]) && (arr_7 [10])))))))))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_11 [i_2] = (~(arr_6 [i_2] [i_2] [i_2]));
        arr_12 [i_2] = ((((-((max(22811, -22818))))) % (((((arr_2 [i_2] [i_2]) + 2147483647)) >> (((arr_6 [i_2] [i_2] [i_2]) - 2105651529))))));
    }
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        var_16 = ((((!((((arr_2 [i_3] [i_3]) ? (arr_3 [i_3]) : (arr_16 [i_3])))))) ? ((min(-22789, 101))) : (((((((arr_3 [i_3 - 1]) ? (arr_2 [i_3] [i_3]) : (arr_2 [i_3] [i_3])))) && ((((arr_15 [i_3] [i_3]) + (arr_0 [i_3])))))))));
        arr_17 [i_3] = ((+(((!((((arr_13 [i_3] [i_3 + 1]) ? (arr_16 [i_3]) : (arr_0 [16])))))))));
    }
    var_17 ^= var_1;
    var_18 = (var_0 || var_11);
    var_19 = (max(((var_10 - (var_10 > var_8))), ((((((var_2 ? var_6 : var_8))) ? var_3 : -22789)))));
    var_20 = (min(var_20, var_6));
    #pragma endscop
}
