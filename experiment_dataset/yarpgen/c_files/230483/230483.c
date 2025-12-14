/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_16 = (~var_4);
        var_17 = ((var_11 != (arr_3 [i_0])));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_18 = (((!29) + ((((((arr_3 [i_1]) && (arr_1 [i_1])))) & -8898))));
        var_19 ^= ((var_3 || (((((max(-29, (arr_3 [i_1])))) % (arr_3 [i_1 + 1]))))));
        arr_6 [2] = (arr_5 [i_1] [i_1]);
    }
    for (int i_2 = 3; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_20 = (max(var_20, -1));
        arr_10 [7] = ((-((min((arr_2 [i_2]), (!-10))))));
        var_21 = 6440;
    }
    var_22 = ((-((-(-32767 - 1)))));
    #pragma endscop
}
