/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 18315;
    var_20 = var_7;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_21 = (max(var_21, 0));
        arr_3 [i_0] = 1;
        arr_4 [i_0] = ((((~var_12) ? -var_9 : (18446744073709551611 / 1))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_22 = (max(((-23381 ? 0 : 239)), (14758440618053614276 > 950847407)));
        arr_9 [i_1] [i_1] = (!-598);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    arr_19 [i_3] [i_3] = 8;
                    var_23 = ((0 ? 65525 : 2147483647));
                    var_24 = (max(var_24, (((133 >> (1019845296 - 1019845271))))));
                }
            }
        }
        var_25 = (min(var_25, (-14489 / -2147483628)));
        var_26 = 79;
    }
    #pragma endscop
}
