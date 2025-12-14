/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_12));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((((min((arr_2 [i_0 + 3]), (arr_2 [i_0 - 1])))) ? (((!(arr_2 [i_0 + 1])))) : ((1 ? 1 : 1)))))));
                arr_6 [i_1] = ((~(max((arr_4 [i_1 + 1] [i_0 + 1] [i_0 + 1]), 9152754335533977256))));
                var_15 = ((!((var_1 < (arr_5 [i_0 - 1])))));
            }
        }
    }
    var_16 -= ((((((max(var_9, var_11))) ? (var_10 / var_2) : (((1 ? 1827375468 : 35446))))) < var_11));
    var_17 = (max((~2455320996), ((min(var_2, var_7)))));
    var_18 = var_9;
    #pragma endscop
}
