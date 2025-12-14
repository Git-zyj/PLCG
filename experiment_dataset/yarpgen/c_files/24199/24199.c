/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((var_2 ? (~15) : (min(-var_6, var_9)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((((min((arr_3 [i_0]), (arr_3 [i_0])))) | (((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0])))));
                var_12 = (min(var_12, (arr_6 [i_0])));
            }
        }
    }
    var_13 = (max((((((var_3 ? var_2 : var_1))) ? ((var_8 ? var_10 : var_2)) : (1 == 4922885465277096751))), var_2));
    var_14 = (((((157 ? 8912222486386413408 : 1))) ? var_5 : ((var_3 ? var_3 : var_7))));
    var_15 -= (min(((((min(-4922885465277096763, var_8))) ? var_4 : (!var_3))), var_7));
    #pragma endscop
}
