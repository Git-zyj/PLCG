/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_7);
    var_12 = (min(var_12, -1165765289));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [12] [5] [i_2] = (((((!(arr_6 [i_2 + 1])))) < (14780698841883093568 || 3666045231826458050)));
                    arr_8 [9] [i_2] [8] [1] = (min((min((((var_0 ? var_5 : var_6))), 3666045231826458036)), ((3666045231826458048 ? (min(18446726481523507200, -32764)) : ((min(-8155391958846128111, 471801439)))))));
                    var_13 = (((((-var_0 / (arr_0 [10])))) ? ((-14780698841883093566 ? var_10 : 3666045231826458035)) : (((max((arr_2 [i_2 + 1] [i_2 - 1] [1]), (arr_2 [i_2 + 1] [i_2 + 1] [4])))))));
                    var_14 *= ((~(((!((((arr_4 [2] [10]) ? (arr_5 [4] [i_0]) : var_2))))))));
                    var_15 = (((((~(arr_2 [9] [i_2 + 1] [9])))) ? ((~(arr_2 [1] [i_2 - 1] [10]))) : (((arr_2 [15] [i_2 - 1] [1]) ? (arr_2 [9] [i_2 + 1] [1]) : (arr_2 [13] [i_2 + 1] [1])))));
                }
            }
        }
    }
    #pragma endscop
}
