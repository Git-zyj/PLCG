/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = (min(var_12, ((((~16) ? ((min((arr_3 [i_0 - 1]), 2906632484))) : (max((~9223372036854775807), 9223372036854775807)))))));
                arr_5 [18] [i_0] [i_1 + 2] = 9223372036854775807;
            }
        }
    }

    for (int i_2 = 2; i_2 < 8;i_2 += 1)
    {
        var_13 = (-9223372036854775807 - 1);
        arr_9 [i_2] [i_2] = ((96 ? 1 : 8384512));
        arr_10 [i_2 + 1] = (arr_4 [i_2]);
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 18;i_5 += 1)
            {
                {
                    arr_18 [i_3] [i_3] [i_5] = ((((min((((7633 && (arr_16 [i_3] [i_3] [9])))), (max(118, -5049844192109075404))))) ? (((var_3 && (((-9223372036854775779 ? 3092377780456419718 : (arr_13 [i_3] [i_4] [i_4]))))))) : (!1)));
                    var_14 *= (((((~(!32767)))) ? (((-51475911 == (((arr_17 [i_3] [i_4] [i_4] [i_3]) ? 31028 : var_8))))) : 1));
                }
            }
        }
        var_15 = ((1 ? (arr_16 [i_3] [i_3] [i_3]) : var_10));
        var_16 = 7633;
        arr_19 [4] [i_3] = ((((arr_14 [i_3] [i_3]) ? 1460819754641685164 : (arr_14 [i_3] [i_3]))));
    }
    #pragma endscop
}
