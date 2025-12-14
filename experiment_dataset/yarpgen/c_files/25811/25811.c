/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (arr_4 [i_1]);
                var_15 += var_4;

                for (int i_2 = 2; i_2 < 19;i_2 += 1) /* same iter space */
                {
                    arr_10 [i_1] [i_1] [i_2] = var_13;
                    var_16 *= (((6983 >= 1) ? var_4 : ((((((max(127, var_1)))) >= ((1273372116 ? 1 : var_9)))))));
                    arr_11 [i_0] [16] [i_1] [i_0] = ((((878297267 ? 119 : (arr_9 [i_1 - 1] [i_2 - 2] [i_2 - 2])))) ? ((((((var_9 ? -10765 : (arr_8 [i_0] [i_1] [i_1]))) + 2147483647)) >> ((((1 ? 15137720216722242161 : 914798210)) - 15137720216722242133)))) : ((var_7 ? ((var_12 ? -1 : var_14)) : (0 && var_7))));

                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        var_17 = ((((((((arr_13 [20] [20] [i_2] [i_3 - 1] [i_3]) + -29))) ? (arr_8 [4] [0] [i_1]) : -var_0)) % (((((max(-7010, -110))) ? var_1 : (arr_5 [i_0] [i_1] [i_2 + 2]))))));
                        arr_14 [1] [i_1] [i_1] [1] = ((-7010 & (((((-7011 ? 1 : (-127 - 1)))) & (0 ^ -32766)))));
                        var_18 += (-6988 - -2147483641);
                        arr_15 [i_1] [15] [15] [i_2] [i_3 + 1] = ((-1777381004 ? (((940092233 ? (0 & 704537934) : 532676608))) : (((((12 ? -940092233 : 6975))) % 2372941231))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        arr_18 [i_0] [4] [17] [i_1] = (!-48);
                        var_19 -= ((-(123 && 9223372036854775807)));
                        arr_19 [i_0] [i_0] [i_0] [i_1] [i_0] = (((((35967 ? -33554432 : 2080768))) ? 26232 : -19100));
                    }
                }
                /* vectorizable */
                for (int i_5 = 2; i_5 < 19;i_5 += 1) /* same iter space */
                {
                    arr_22 [6] [i_1] [i_1] = ((var_1 ? -122 : -3191686038592048030));
                    var_20 += 1041661192;
                }
            }
        }
    }
    var_21 = (((-(min(21, -940092233)))));
    #pragma endscop
}
