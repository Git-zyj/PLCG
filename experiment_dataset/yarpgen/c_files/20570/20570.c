/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((min((!3318474733), (!var_9))));
    var_12 *= (var_6 ? (var_7 && var_4) : ((((!-621032631) > var_2))));
    var_13 = ((((min(-var_0, 1))) ? (((209 > 62) ? 0 : (var_9 > 92))) : (~var_9)));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min(18446742974197923840, 3));
        var_14 += 0;
        var_15 &= (((arr_1 [i_0 + 2] [i_0 + 3]) && ((min((arr_1 [i_0 + 3] [i_0 - 1]), 16571)))));
        var_16 = (min(var_16, ((min(((((!(arr_1 [i_0] [i_0]))) ? (arr_1 [i_0 - 3] [i_0]) : 47)), (((((-119 ? 18446742974197923840 : -1390013385)) <= (!var_6)))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [11] = ((3896445858 * (0 / 9925)));
        var_17 = (min(var_17, (((((arr_1 [i_1] [i_1]) >> (71 - 63))) ^ var_1))));
    }
    #pragma endscop
}
