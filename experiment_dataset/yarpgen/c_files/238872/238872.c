/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((var_7 ? var_13 : var_6)))) ? (max(1173145081013071568, 3290828438410199387)) : ((((!(((8388607 ? var_13 : var_10)))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = (var_6 / (((((15155915635299352204 ? 511 : -1752170551923632545))) ? ((8658654068736 * (arr_1 [i_1]))) : ((((arr_3 [i_0]) ? var_11 : 41344))))));
                    arr_11 [i_2] [i_2] &= ((~((((((arr_8 [i_2] [9] [i_0]) ? var_10 : (arr_3 [i_1]))) <= var_4)))));
                }
            }
        }
    }
    var_15 = (min((((((max(var_3, 1752170551923632545))) ? var_6 : var_11))), var_0));
    var_16 = (max(var_12, var_8));
    var_17 = -var_3;
    #pragma endscop
}
