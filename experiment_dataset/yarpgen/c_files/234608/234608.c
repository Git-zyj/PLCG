/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= 1;
    var_15 *= ((((2147483643 * 0) ? var_2 : -727878834541743097)) != (0 / 140));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((0 ? 86 : ((13 ? -1712977732 : 4322482989160949141))));
        var_16 -= ((49289 > 8181350950613585761) % 16265144118059182406);
    }
    #pragma endscop
}
