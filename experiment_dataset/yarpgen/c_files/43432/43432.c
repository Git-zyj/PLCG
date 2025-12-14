/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_16 = (~-23120);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [4] [i_0] [i_1] = -3086518189268645066;
                            var_17 = ((+((19771 >> (((~-3631405795748984868) - 3631405795748984861))))));
                            var_18 = (max(var_18, ((((arr_9 [i_0 + 1] [i_1]) - (max((min(-6112131102736208102, (arr_9 [i_0] [i_1]))), (arr_0 [i_0 + 1]))))))));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        arr_14 [i_4] [i_4] = (max((0 - 2147483647), (+-109)));
        var_19 = ((!((max((arr_13 [i_4]), (arr_13 [i_4]))))));
        arr_15 [2] [i_4] = 246;
    }
    var_20 = (max(var_7, var_11));
    #pragma endscop
}
