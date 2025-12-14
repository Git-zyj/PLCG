/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((((((var_12 * var_3) || var_12))) >> (~-1)))));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_19 = (((arr_1 [i_0]) & (((((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0])))) ? (((arr_0 [i_0]) ? var_10 : 1)) : (((1 ? var_2 : (arr_0 [i_0])))))))));
        var_20 = (((((arr_1 [i_0 - 2]) ? (((1 != (arr_0 [i_0 + 2])))) : -var_1)) != var_2));
    }
    var_21 = (min(((13 ? 1210892568191981479 : 17451448556060672)), 211));
    var_22 -= var_10;
    #pragma endscop
}
