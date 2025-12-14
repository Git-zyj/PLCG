/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_3;
    var_21 = var_10;

    for (int i_0 = 3; i_0 < 17;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_22 = (((max(((50548 ? 32758 : 2)), -var_18))) ? var_11 : (((var_10 ? (arr_1 [i_0]) : (var_9 != var_17)))));
                    arr_7 [i_0] [i_0] [i_2] = (max(((((arr_5 [i_2] [i_2 - 1] [i_0 + 3]) != 24324))), (arr_0 [i_0 + 3])));
                }
            }
        }
        var_23 = (max(var_23, ((max((min(1655942550242538655, 104)), var_11)))));
    }
    for (int i_3 = 3; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_24 = (max(var_24, ((((arr_6 [i_3 + 4] [i_3 + 1] [1] [i_3]) ? (!20987) : (((!18446744073709551607) ? var_14 : var_15)))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                {
                    var_25 = arr_8 [i_3 + 3] [i_4];
                    var_26 ^= 4294967275;
                    var_27 = var_19;
                    var_28 *= var_0;
                }
            }
        }
    }
    var_29 = (min(var_11, (!var_18)));
    #pragma endscop
}
