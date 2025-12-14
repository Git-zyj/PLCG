/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (arr_1 [i_0] [15]);

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            arr_7 [i_0 + 2] |= (arr_1 [i_0] [0]);
            arr_8 [5] [5] = ((((max(116, ((-5173467173034069942 ? var_14 : 8))))) ? (((var_2 / (arr_6 [10] [i_1 - 1])))) : 7014612919081715281));
            var_20 = var_18;
        }
    }
    for (int i_2 = 2; i_2 < 15;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2 + 2] |= (arr_1 [i_2] [i_2]);
        arr_12 [i_2] [i_2] = 110;
    }
    for (int i_3 = 2; i_3 < 15;i_3 += 1) /* same iter space */
    {
        var_21 = (max(var_21, (((-13010 ? var_14 : ((-(arr_5 [i_3 + 2] [i_3 + 1] [i_3 + 1]))))))));
        var_22 = (+(((arr_9 [i_3 - 1]) ? var_2 : 9223372036854775807)));
    }
    var_23 = 16132797824006690540;
    #pragma endscop
}
