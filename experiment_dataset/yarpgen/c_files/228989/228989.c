/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = 48;
        arr_4 [i_0] = ((0 ? 1 : (arr_0 [i_0 + 1])));
        arr_5 [i_0] = ((63 ? (arr_2 [i_0]) : ((-109 ? 236 : (arr_1 [i_0])))));
        arr_6 [i_0] = 1;
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = ((8790074312717095 & (arr_7 [i_1 - 2] [i_1 - 2])));
        arr_10 [i_1] = (((arr_0 [i_1 - 3]) ? (arr_2 [i_1 - 1]) : (arr_0 [i_1])));
        arr_11 [i_1] [i_1] = (arr_0 [i_1 + 2]);
    }
    var_11 |= (var_0 < var_6);
    #pragma endscop
}
