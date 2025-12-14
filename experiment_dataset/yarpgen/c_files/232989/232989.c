/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;
    var_20 = max((((var_7 / 4113881145) * (181086152 / var_8))), var_8);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 = min(((-(arr_0 [i_0 + 2]))), ((var_14 + (arr_0 [i_0 + 3]))));
                    arr_9 [i_0] = ((-(var_18 > var_18)));
                }
            }
        }
    }
    var_22 = min((min(((var_4 ? 3739704490 : 3739704487)), ((3221225472 ? var_9 : var_7)))), (min((~3739704480), var_4)));
    var_23 = 16777184;
    #pragma endscop
}
