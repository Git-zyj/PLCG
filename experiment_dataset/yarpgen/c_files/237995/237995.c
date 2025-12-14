/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(-var_0, ((max(var_11, 52538)))));
    var_15 = var_8;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_16 |= -1058268179999737101;
        var_17 -= var_11;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_18 = (((~var_7) + var_1));
        arr_4 [i_1] = (arr_0 [i_1]);
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1) /* same iter space */
    {
        var_19 = ((((((((arr_1 [i_2] [i_2]) / 55550)) * (37 / 58529)))) ? var_6 : (arr_8 [6])));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 6;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_20 = ((!((min(var_12, (arr_6 [i_2 + 1]))))));
                    var_21 += ((max((min(7006, (arr_1 [i_2] [4]))), (min((arr_7 [7]), var_11)))));
                    var_22 = var_8;
                }
            }
        }
        var_23 = ((((((max(55459, var_5))) <= (var_13 + var_6))) ? (36642 + 32751) : var_2));
    }
    var_24 *= var_8;
    #pragma endscop
}
