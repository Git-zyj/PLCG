/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 = (~2);
        var_13 = ((6568286503484469460 ? 49985 : 17835653250767473669));
        arr_3 [1] = (22303 ? -1893409742 : 4294967294);
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            {
                var_14 = (((-127 - 1) ? 253 : 611090822942077950));
                arr_8 [i_2] [i_2] [i_2] = -var_2;
                arr_9 [i_1] [i_2] = ((((arr_5 [i_1]) ? ((-(arr_7 [i_1] [1] [i_2]))) : 246)));
                arr_10 [4] [i_2] [i_2] = max(((((arr_4 [i_2] [i_1]) ? var_7 : (arr_7 [i_1] [i_2] [i_1])))), (arr_4 [i_1] [i_1]));
            }
        }
    }
    var_15 |= ((((((((var_7 ? var_2 : var_7))) ? (!var_5) : var_6))) ? ((((max(190, 0))) ? (1 / 21328) : var_9)) : (max(var_10, (min(var_2, var_10))))));
    #pragma endscop
}
