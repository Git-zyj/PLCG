/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_11));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = (arr_1 [i_0]);
        arr_2 [i_0] = (((arr_1 [i_0]) / (min(37023, (arr_1 [i_0])))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_17 = 28501;

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                arr_8 [18] [i_0] [i_2] [6] |= (arr_6 [i_0] [i_1] [i_0]);
                var_18 = ((~(((((~(arr_0 [i_2] [i_2]))) == 1099289683)))));
            }
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                var_19 = ((min(37042, 1016)));
                var_20 = ((min(var_1, ((min(var_4, 1))))));
                arr_11 [i_0] [i_1] = (min((((~((-916049792 ? (arr_7 [i_3] [i_1] [i_0]) : 80))))), ((((min((arr_0 [i_3] [i_1]), var_2))) ? (min(var_14, (arr_5 [0] [i_0] [i_3] [7]))) : (((((arr_6 [i_1] [i_1] [i_1]) == -98))))))));
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {
                    {
                        arr_18 [i_1] [i_5] [12] [i_4] [12] [i_1] = ((((~(min((arr_5 [4] [i_1] [i_4] [4]), 20)))) + (((((((var_8 ? var_11 : 21325))) == ((173 ? (arr_13 [i_1] [12] [i_1]) : 2874006802))))))));
                        var_21 &= (min(((min(((~(arr_5 [i_0] [i_0] [i_4] [i_5 + 2]))), 1836047919))), (min(((min(184, var_0))), (var_1 + -1265730794)))));
                        var_22 = (((~(arr_1 [i_5 + 2]))) % ((((arr_3 [i_4] [i_1]) == (arr_3 [i_1] [i_1])))));
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            arr_21 [i_6] [14] = (((18 == 24261) ? (var_2 && 1) : (((~54336) - (15 + var_6)))));
            arr_22 [i_0] [i_6] = (4294967295 + 8388607);
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            var_23 = (1168577867 < -74);
            arr_26 [i_7] = (arr_24 [i_0] [17] [i_0]);
        }
        arr_27 [i_0] = ((((((26465 ? var_8 : var_12)) | 8313676912151593168))));
        var_24 = ((((max(1016, (arr_0 [i_0] [i_0])))) == (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    var_25 = (((0 == 173) == -2244366518984162978));
    var_26 += ((((((var_4 < var_5) | var_12))) ? var_13 : 12511611991318295644));
    #pragma endscop
}
