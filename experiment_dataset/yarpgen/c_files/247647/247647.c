/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [12] [1] = (((((arr_3 [i_0]) > var_0)) ? ((((((1 ? 18014394214514688 : -1725862570))) ? 2147483628 : (var_7 || var_0)))) : (((arr_0 [1]) ? -27 : (1 < 5743873807576697575)))));
        arr_5 [i_0] = (min((arr_3 [i_0]), (arr_3 [i_0])));
        arr_6 [i_0] = (max((((1 ? (arr_2 [9] [i_0]) : (arr_3 [i_0])))), 18428729679495036920));
        var_10 = ((((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))) ? (((70 ? (max((arr_0 [i_0]), 44)) : (arr_3 [i_0])))) : ((0 ? 16377126767890868390 : 4261412864))));
    }
    var_11 = var_5;
    #pragma endscop
}
