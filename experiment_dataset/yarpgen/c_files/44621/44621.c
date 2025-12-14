/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_10 -= (arr_0 [8]);
                arr_4 [i_0] = ((-920613024617792157 <= 9223372036854775807) ? var_0 : ((9223372036854775807 ? ((~(arr_1 [i_0 - 2]))) : ((((arr_3 [i_1 + 3]) <= (arr_2 [1] [i_1 + 2] [i_1 + 2])))))));
            }
        }
    }
    var_11 = ((31 ? (~var_1) : var_6));
    var_12 = (min(var_12, (((~(~var_1))))));
    var_13 = (min(var_13, (((var_2 ? var_9 : -248)))));
    #pragma endscop
}
