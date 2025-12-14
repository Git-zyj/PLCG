/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (1393089449 >= var_13);

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = ((arr_0 [i_0 - 2]) + var_17);
        var_19 = (min(((var_10 / ((-1393089457 ? 13741895072690832282 : 4704849001018719333)))), (!var_14)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_20 = 4704849001018719333;
        var_21 ^= ((((var_15 ? -1294102718 : 781833442)) + var_3));
        var_22 = (max(var_22, (((!((var_13 < (arr_5 [i_1 - 1]))))))));
        var_23 = ((arr_4 [i_1 + 3]) ? (arr_4 [i_1 + 2]) : (arr_4 [i_1 + 3]));
    }
    #pragma endscop
}
