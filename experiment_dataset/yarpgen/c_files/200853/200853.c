/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((min(((((var_1 && 11089572605218515843) ? var_0 : (!var_6)))), (((27483 % var_6) - 11089572605218515843)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((~7357171468491035772) ? (((var_1 % 265805902238354241) % 7221463604131578037)) : (((((min(var_12, (arr_3 [i_0])))) ? (!var_13) : ((min(var_9, 1))))))));
                var_16 = (min(((-7357171468491035772 - (arr_4 [i_1 - 1] [1] [i_0]))), (((!(arr_4 [i_1 - 1] [i_1 - 1] [9]))))));

                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    var_17 ^= (((var_1 >= 6963) / ((1 ? 58573 : ((min(var_7, 27483)))))));
                    var_18 = (max(var_18, (((((((arr_0 [i_0] [i_0]) - var_13))) ? var_12 : ((-(arr_0 [i_2] [i_0]))))))));
                }
            }
        }
    }
    var_19 = var_13;
    #pragma endscop
}
