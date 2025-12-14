/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        var_17 = ((-(10521078171696057240 && 228)));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_18 = var_2;

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                var_19 = ((!(((143 ? -125 : 93)))));
                arr_7 [i_0] [i_0] = (max((((14834472469599391295 ? (15257 * 143) : 113))), (var_12 / -6416)));
            }
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_20 = arr_6 [i_0] [i_0] [i_0];
            arr_10 [i_0 - 4] = (var_10 > 173);
        }
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    var_21 = (min(var_21, ((1 ? 249087874 : -248172682))));
                    var_22 = (max(-6416, var_4));
                }
            }
        }
        arr_17 [i_0] = (max(5681090021582185136, (((0 ? 1 : 32764)))));
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        arr_20 [i_6] &= var_7;
        var_23 = (max(1, (!var_3)));
        var_24 = (min(var_24, (((!((max((arr_19 [i_6] [i_6]), (min(var_2, 113))))))))));
    }
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        var_25 = 177;
        arr_23 [i_7] = (min(-3527338043041868670, -900134239069184485));
        var_26 ^= (((((arr_15 [i_7] [i_7] [i_7]) % -7927587681322512405))) ? var_7 : (arr_1 [i_7]));
    }
    var_27 |= var_6;
    var_28 = ((var_9 ? (((var_13 && -9223372036854775804) ^ var_7)) : -20446));
    var_29 = var_3;
    #pragma endscop
}
