/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= -8194089368188807997;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        var_20 = (var_13 | 4080462677844821235);
        var_21 = (max(var_21, (2992022334227551851 / 7021)));
        arr_2 [i_0 + 3] [i_0] |= ((26649 & (38903 <= 26653)));
        arr_3 [i_0] = -8194089368188807997;
    }
    #pragma endscop
}
