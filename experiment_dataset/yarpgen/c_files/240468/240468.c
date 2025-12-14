/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((min(18446744073709551615, 6857007638927682721)) <= (((min(var_9, var_3)) - var_0))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 = 0;
                    var_15 = (min((11197119055891201165 * var_1), (((var_1 ? (arr_6 [13] [i_1 + 2] [i_1 + 3] [i_2 - 2]) : (arr_6 [i_0] [i_1 + 2] [i_1 + 3] [i_2 - 2]))))));
                    var_16 += ((min((min(561850441793536, (arr_7 [4])), (arr_0 [4])))));
                    arr_8 [i_0] [i_0] = (arr_5 [i_0] [i_0]);
                    var_17 &= (((((((arr_2 [13] [0]) >> (((arr_4 [i_0] [6] [6]) + 1535302072)))) > var_0)) ? (arr_2 [14] [14]) : -2037234295));
                }
            }
        }
    }
    var_18 = var_11;
    var_19 = ((((max(((18446744073709551615 ? var_2 : var_4)), (!var_10)))) ? -4449 : var_10));
    var_20 = var_10;
    #pragma endscop
}
