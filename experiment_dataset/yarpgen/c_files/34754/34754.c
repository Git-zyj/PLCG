/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((((~var_8) ? -2 : (max((((var_10 ? -21090 : (-127 - 1)))), ((var_8 ? var_15 : var_10)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 *= (((((-9783 ? var_15 : -9798))) ? ((((9798 < (arr_0 [i_0] [i_0]))))) : (arr_1 [i_0])));
        arr_2 [i_0] = (((((-9798 + 2147483647) << (((arr_0 [i_0] [i_0]) - 4961012017052469450))))) ^ 658823399);
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = var_9;
        var_18 = (min(var_18, (((((((28368 / -9783) ? 3811054284367418556 : (((2004689934 ? var_11 : (arr_3 [i_1 - 2]))))))) ? 4595 : (max(((max(var_6, (arr_3 [i_1])))), ((0 ? var_6 : 1073741816)))))))));
        arr_6 [i_1] = ((((max(16384, 15490810607874754496))) ? (((arr_0 [i_1] [i_1]) ? (arr_3 [i_1 + 1]) : (arr_1 [i_1]))) : (min((arr_0 [i_1] [i_1]), ((((arr_1 [i_1 + 2]) == (arr_0 [i_1] [i_1]))))))));
    }
    #pragma endscop
}
