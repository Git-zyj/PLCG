/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_1;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_11 *= (min(var_4, ((min((var_3 || 1), var_9)))));
        arr_4 [i_0] [i_0] |= 32300;
        var_12 |= ((((((var_4 / (arr_2 [i_0]))))) ? ((max(9151, (arr_1 [i_0])))) : ((((((var_3 ? 37 : 1))) == (max(1, var_4)))))));
        var_13 *= ((~(((1 % (arr_1 [i_0]))))));
    }
    var_14 ^= var_1;
    var_15 |= (((max(1, (max(1, -11)))) >> ((((var_3 ? (max(37, 6346435556632613746)) : (!3623315179708506348))) - 6346435556632613733))));
    #pragma endscop
}
