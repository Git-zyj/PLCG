/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= ((((((!61440) ^ (59911 | 1)))) ? 1 : (((!(((var_6 ? var_17 : 18446744073709551615))))))));
    var_19 = 17211051099342227174;
    var_20 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    var_21 = (arr_5 [15] [i_1]);

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_3] [4] = ((-54 ? 1 : -1996722425));
                        var_22 = (((arr_2 [14] [0] [1]) ? (arr_9 [i_2 - 1] [i_3] [i_2 - 4]) : 1));
                        arr_13 [i_3] [16] [11] [i_3] = (~7);
                    }
                    var_23 = ((~(((!var_2) ? (arr_8 [15] [i_0] [10] [1] [14] [i_2]) : (min(var_3, var_5))))));

                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_24 = var_8;
                        var_25 = (~var_5);
                    }
                }
            }
        }
    }
    var_26 |= 2908602451;
    #pragma endscop
}
