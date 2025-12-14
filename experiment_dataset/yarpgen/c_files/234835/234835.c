/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_10 = var_7;
                arr_5 [i_1] [i_0] = ((1722445893 || ((min(var_4, var_0)))));
                var_11 = (min(var_11, ((min(((((var_6 ? -4144513919061567151 : 4144513919061567163)) + (var_4 != var_3))), (var_6 != 22784))))));
                var_12 ^= (max(4144513919061567155, (((((38565 ? 8708901593120487296 : var_2))) ? var_2 : (~var_0)))));
            }
        }
    }
    var_13 = var_4;

    /* vectorizable */
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        var_14 = (min(var_14, (((((var_1 ? -3765127053138099789 : var_7))) ? var_4 : -26793))));
        var_15 = (max(var_15, (((var_1 ? var_0 : 1)))));
    }
    var_16 = (max(var_1, -65));
    #pragma endscop
}
