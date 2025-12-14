/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0 - 3] [i_0 - 3] = (((((((((arr_4 [i_1 - 2] [11]) ? var_4 : var_5))) ? var_6 : (arr_0 [i_0 + 1])))) ? (max(-1770146169, (arr_5 [8] [8]))) : ((min((-1770146169 | 24), (((arr_3 [i_1] [i_0]) ^ -118)))))));
                arr_7 [i_0 + 2] [i_1] [i_1] = ((!(((arr_2 [i_0 + 2] [i_1 + 1]) == (arr_1 [i_0 - 2])))));
                arr_8 [i_0] [7] = (arr_3 [i_1 - 1] [i_0 + 1]);
                arr_9 [i_0] [i_1 - 1] [6] = ((((((37054 ? (-2147483647 - 1) : 118))) ? 131 : -113)));
            }
        }
    }
    var_12 = var_6;
    #pragma endscop
}
