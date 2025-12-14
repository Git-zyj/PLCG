/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_11 |= (+(((arr_1 [i_0] [14]) ? ((var_1 ? var_9 : var_7)) : ((min(var_3, 1))))));
                arr_7 [i_1] [13] = (max(var_5, (arr_0 [i_1])));
                arr_8 [14] [i_1] = arr_0 [i_0];
                arr_9 [i_1] [i_1] = (arr_6 [i_0] [i_1]);
                arr_10 [i_1] = ((min(((arr_0 [i_0]), (arr_0 [i_0])))));
            }
        }
    }
    var_12 *= var_4;
    var_13 = -4189357728938094045;
    #pragma endscop
}
