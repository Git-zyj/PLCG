/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= ((-1377733754 ? var_8 : (-1252446384 - var_6)));
    var_20 -= var_3;

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_21 ^= (min(1252446375, ((((min(1252446401, 1252446375))) ? 629743333 : 1252446383))));
        var_22 = 82;
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_23 = ((var_0 << (var_12 - 1781)));
        var_24 = (10630265435744633444 < 1);
        var_25 = ((6471 * (arr_0 [i_1 + 2])));
    }
    for (int i_2 = 4; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_26 = (max(var_26, var_14));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 12;i_4 += 1)
            {
                {
                    var_27 = (((((-(arr_9 [i_2] [i_2])))) ? ((min(-1252446383, 17017853051703645779))) : (((min(var_13, var_8))))));

                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        var_28 = (min(((max(-116, 1252446383))), (min(((((arr_5 [i_2]) != (arr_4 [i_4])))), (((arr_0 [i_4 + 1]) & var_15))))));
                        var_29 ^= (((((1556294307 ? 7340565230718027687 : 1805613844))) ? (max(7, 5175294490833130607)) : (!4472)));
                    }
                }
            }
        }
    }
    for (int i_6 = 3; i_6 < 18;i_6 += 1)
    {
        var_30 &= (((((((16259 ? var_11 : (arr_16 [i_6] [i_6]))) % 16))) ? -2489353446 : var_2));
        var_31 ^= (((~(0 != 249))));
    }
    #pragma endscop
}
