/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 ^= (max((arr_5 [i_0] [i_1]), -37));
                arr_6 [i_1] = (min((arr_3 [i_1]), (max((arr_3 [i_0]), (arr_5 [i_0] [i_1])))));
            }
        }
    }
    var_17 = var_4;

    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_18 ^= (arr_3 [i_2]);
        var_19 = (arr_10 [i_2]);
        var_20 |= arr_8 [i_2];
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = (min((arr_3 [i_3]), (arr_12 [i_3])));
        var_21 = (max((arr_5 [i_3] [i_3]), ((min((arr_10 [i_3]), (arr_5 [i_3] [i_3]))))));
        arr_14 [i_3] [i_3] = (arr_11 [i_3]);
    }
    var_22 = (min(var_14, (min(var_3, var_1))));
    #pragma endscop
}
