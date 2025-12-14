/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = (((((2597992608 || (2597992608 | 387774642))))) ^ 0);
        arr_2 [i_0] = (min(682360542, (1256420620 / 18446744073709551605)));
    }
    var_20 = var_7;
    #pragma endscop
}
