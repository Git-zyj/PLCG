/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = 1536;
        arr_5 [i_0] = (min((((36294 <= (arr_3 [i_0])))), ((28542 ? 1536 : -7505142010949787342))));
        arr_6 [i_0] = var_3;
        arr_7 [i_0] = -1537;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        arr_10 [i_1] = (~1065707939601874428);
        arr_11 [i_1] = (~63487);
    }
    var_20 = (((var_0 * var_2) & (203 ^ var_14)));
    #pragma endscop
}
