/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!((((var_9 && var_8) ? var_2 : var_4)))));
    var_13 = 6884463162833736993;
    var_14 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [i_0] [i_0] = (~-6884463162833736985);
                        arr_11 [i_0] [i_1] [i_0] = 268435328;
                        arr_12 [i_3] [i_3] [i_0] = (((3806607094 <= 1107081376206253116) >= -45));
                        var_15 = var_1;
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_16 = (arr_4 [i_1]);
                        arr_15 [i_0] [i_1] [i_2] [i_4] [i_4] [i_0] = 17339662697503298497;
                        arr_16 [i_0] [i_1] [i_0] = (min(var_5, var_7));
                        arr_17 [i_0] [i_1] [i_2] [i_4] = arr_14 [i_0] [i_1] [i_2] [i_4];
                        arr_18 [i_0] [i_0] [i_2] [i_2] = ((min((arr_5 [i_2]), (arr_5 [i_0]))));
                    }
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_17 = (((arr_3 [i_0] [i_5]) >= 1107081376206253116));
                        var_18 &= (((!(((~(arr_7 [i_1] [i_5] [i_5] [i_5] [i_1] [i_0])))))));
                    }
                    var_19 ^= (arr_8 [i_0] [i_1] [14] [12] [8]);
                    var_20 = ((+((((min((arr_21 [i_0]), var_4))) ? (!-6884463162833736999) : var_7))));
                    var_21 += (min((((!((((arr_3 [i_1] [i_1]) ? 65516 : (arr_7 [i_0] [6] [10] [i_1] [i_0] [i_2]))))))), (max((min((arr_21 [i_0]), var_2)), (arr_19 [12])))));
                    var_22 ^= -828348139;
                }
            }
        }
    }
    #pragma endscop
}
