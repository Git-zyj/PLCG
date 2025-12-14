/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, 1));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_2 [4] = 7240453507054838675;
        arr_3 [i_0] = ((((max((0 < var_4), -var_9))) >= 7240453507054838675));
        var_16 = ((~(~36)));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] = var_0;
        arr_7 [7] [i_1] = (((arr_1 [i_1] [i_1]) << (((((((~0) ? var_14 : 0)) + 77)) - 18))));
        var_17 = ((!((((~var_7) ? (arr_0 [i_1]) : (arr_1 [i_1] [i_1]))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_18 = ((((-32743 <= ((0 ? 11206290566654712940 : 11206290566654712929)))) ? var_1 : ((var_5 ? (arr_5 [i_3 + 1]) : -1818758735))));
                        arr_15 [i_1] [i_2] [i_2] = (min(-7240453507054838675, var_11));
                    }
                }
            }
        }
    }
    var_19 = (-((~(min(var_14, 127)))));
    #pragma endscop
}
