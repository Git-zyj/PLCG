/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_6;

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_12 = ((((4025405793 ? 4025405789 : ((269561494 ? 2396175171787033529 : 563226982957308254)))) < ((max(13032, 5395936955436247553)))));
        var_13 += (max(((~(arr_1 [i_0 + 1]))), (arr_1 [i_0])));
        var_14 = (((arr_0 [9] [9]) ? ((((-269561511 == (arr_1 [i_0]))))) : (max(((93 ? 1 : -5395936955436247553)), (arr_0 [i_0 - 3] [i_0 - 1])))));
        arr_3 [i_0] [i_0 + 2] = (arr_0 [i_0 + 1] [i_0 - 2]);
        var_15 = (max((max(((var_7 ? (arr_2 [i_0] [9]) : -7666082113494801764)), (arr_2 [i_0 - 3] [i_0]))), ((-(((arr_2 [7] [i_0]) / (arr_0 [i_0] [i_0])))))));
    }
    #pragma endscop
}
