/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= 101945541;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] |= (min((((!((min(2325647963033837635, -2140793434)))))), var_9));
        var_20 = (((118 ? var_1 : 2140793434)));
        arr_3 [i_0] = (min((2140793445 - 2325647963033837635), (((4132275641030714271 && var_15) ? (!-19400) : (!-28454)))));
    }
    #pragma endscop
}
