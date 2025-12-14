/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_11 = (max(var_11, (((((-(((!(arr_1 [i_0]))))))) ? (((-1469645143773803051 & (arr_1 [i_0])))) : (arr_1 [i_0])))));
        var_12 += (((arr_1 [20]) ? 20778 : (((~((((arr_1 [i_0]) && -1469645143773803051))))))));
        var_13 = (min(var_13, ((((arr_1 [i_0]) + 59556)))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_14 = (((((arr_0 [i_1]) ? (arr_0 [i_1]) : (arr_0 [i_1]))) == (arr_0 [21])));
        var_15 = (min(var_15, 244));
        arr_4 [i_1] = (~((-27323 ? (arr_1 [i_1]) : (arr_2 [i_1]))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_16 = 20778;
        var_17 = (min(var_17, (((((var_10 && (((~(arr_1 [i_2])))))) ? -237 : (min(((((arr_1 [i_2]) ? 8848 : (arr_1 [i_2])))), -1469645143773803041)))))));
        var_18 ^= (3437919427 / 2557483894);
    }
    var_19 |= (((~-48405) * var_2));
    var_20 -= var_9;
    #pragma endscop
}
