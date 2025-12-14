/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_14 = -15;
        arr_4 [7] [i_0] = (((3574647170829767745 * var_8) - -52));
        arr_5 [i_0 + 1] [i_0] = -57344;
    }
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    arr_13 [i_3] [i_2] [i_1] = ((((14872096902879783843 ? (-1591069943 | 24682) : (max(18446744073709551615, 1)))) | (max((14872096902879783870 | 11015229196331237839), (-1 || 13121802671516132520)))));

                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_15 = (13121802671516132520 || 22835);
                        var_16 = (max(var_16, ((max(((((((3574647170829767745 ? 1 : 57206))) || 154724194166867745))), (((((1690381309 ? 7473807769252688363 : 206))) | ((-23653 ? 5324941402193419112 : (arr_9 [i_1] [11]))))))))));
                        var_17 ^= (arr_7 [i_1 - 2]);
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_18 = (max(1591069942, (arr_15 [i_1] [i_1 - 2] [i_1] [i_1 - 1] [i_1 + 1])));
                        var_19 &= ((1737991318 ? 7 : -3172));
                        arr_18 [i_3] = 255;
                        var_20 = (max(var_20, (arr_16 [i_1] [i_2] [7] [6] [i_2] [i_5])));
                        var_21 -= ((2004582295 ? (min((!118), 13121802671516132520)) : (((((-77 ? 52025 : -2263))) ? ((-60 ? 14 : -1591069944)) : 8698379707019687170))));
                    }
                    arr_19 [i_1] [i_1 + 1] [i_1 - 2] [i_1] = (arr_7 [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
