/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (min(((var_0 * (1 - 1))), ((max(-3741, var_7)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 *= (1 < 9812349773501969678);
        arr_3 [i_0] = ((18446744073709551615 ? 3447344308224727252 : 2845633206));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_7 [i_1] [17] = ((((max(50, 11))) ? ((0 + ((3377725822 - (arr_5 [21]))))) : 1));
        var_13 -= 238051011;
    }
    var_14 *= 2349;
    var_15 = 1;
    var_16 |= -240;
    #pragma endscop
}
