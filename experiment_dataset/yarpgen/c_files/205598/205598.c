/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += var_3;
    var_20 = var_3;
    var_21 = (!var_14);

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0 - 1] [10]));
        var_22 = (((((var_4 ? (arr_0 [i_0 + 1] [1]) : var_4))) ? -4294967295 : (+-0)));
        arr_3 [i_0] = ((((0 ? -113 : 15699233380695347615)) + var_2));
        var_23 = (min(var_23, var_3));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_24 = ((max(-var_2, (arr_5 [2]))));
            var_25 = ((((arr_4 [5] [i_1] [i_1]) ? (var_3 || var_15) : (!1))));
            arr_6 [i_1] = ((((~(max(100, 0))))) ? (((arr_5 [i_0 + 1]) ? var_10 : -1)) : 103);
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_26 = ((~((1 ? 1 : 3213585871274487856))));
                        var_27 = (var_13 ? (14124992609892524768 || 1918927363) : (((arr_5 [i_0 - 1]) - (arr_1 [i_0 - 1]))));
                    }
                }
            }
        }
        for (int i_4 = 3; i_4 < 18;i_4 += 1)
        {
            arr_14 [4] [4] = 1;
            var_28 += (~4294967295);
        }
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        arr_18 [i_5] [7] |= (((((1153775558 ? 1 : 4321751463817026834))) ? var_5 : (!-1)));
        var_29 -= (min((arr_10 [i_5] [i_5] [10] [8] [0]), (arr_8 [i_5] [i_5] [i_5] [16])));
        var_30 = 9223372036854775787;
    }
    #pragma endscop
}
