/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (((((4294967280 / 4294967280) ^ (-22657 >= -22657))) ^ (((((-68 ? -114748718691018642 : 2234058604763015411)))))));

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        var_21 = (0 == -38);
        arr_2 [i_0] [i_0] = ((0 ? (((((-1821 ? 18446744073709551615 : 9173401858628450683))) ? 32736 : (-32736 / 1))) : -1));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_22 = (((((24 ? 0 : -8012))) ? (((6 ? 8015 : 65))) : 7961524503714919939));
        var_23 = (32 && 34);
        var_24 = ((213 || (((167 ? 143 : 8021)))));
    }
    #pragma endscop
}
