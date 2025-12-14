/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = ((((var_2 / (min(-47, (-9223372036854775807 - 1)))))) ? (max((239 | var_7), (var_11 != var_1))) : -1549);
                    arr_8 [i_2] [i_0] [i_0] [i_0] |= 47;
                    arr_9 [i_2] [i_1] = (min((((-var_10 <= (min(var_0, var_9))))), ((((2147483647 != (arr_3 [i_0] [i_0 - 3] [i_0]))) ? var_12 : (((var_5 ? var_4 : -30702)))))));
                }
            }
        }
    }
    var_14 = -6286115974767393105;
    var_15 = var_5;
    var_16 = max((((47 ? -47 : 61441))), (((((min(-1549, 38))) * 16))));

    for (int i_3 = 2; i_3 < 24;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] = (arr_10 [i_3 + 1] [i_3]);
        arr_13 [i_3] = (((((arr_11 [i_3] [i_3]) ? 314604443 : 1780584600)) << (min((min(250, (arr_10 [i_3] [i_3]))), (35 < 1406046356)))));
        var_17 = ((var_11 ? (((var_9 ^ var_11) * (((min(var_8, (-127 - 1))))))) : ((((((arr_10 [i_3 + 1] [i_3 - 2]) ? var_1 : var_12)))))));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 24;i_4 += 1) /* same iter space */
    {
        var_18 = 6;
        arr_18 [i_4] = var_7;
    }
    #pragma endscop
}
