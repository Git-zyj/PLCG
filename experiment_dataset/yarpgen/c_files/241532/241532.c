/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = ((((arr_1 [i_0]) && (!var_10))));
        var_18 = 12182;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_19 = var_12;

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                var_20 = min(193954094962825945, -22307);
                var_21 = min((max(-22307, 2188627421)), (-22307 % 205));
                var_22 = (max(((max(var_16, -4574598699012945935))), var_9));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_17 [i_1] [i_2] [i_1] [i_4] [i_5] = (min(((((7215 ? -22307 : -708349673)))), (((arr_12 [i_1] [i_2] [i_3] [i_3]) ? (arr_12 [i_3] [i_2] [i_3] [20]) : (arr_15 [i_1] [i_1] [i_3] [i_3])))));
                            var_23 = ((~(arr_5 [i_1] [i_3])));
                            var_24 = (arr_6 [8]);
                        }
                    }
                }
                var_25 = (min(53355, 1654464086));
            }
            arr_18 [i_1] = (arr_11 [i_1] [i_1] [i_1] [i_2]);
            var_26 = (min(-1096940840, 9433));
            var_27 = (max((min(33562, -1693007319142377315)), -1));
        }
        arr_19 [i_1] = (-22307 ? var_17 : ((((max(-22332, 112))) ? 22299 : -8)));
        var_28 = min(((53352 <= (arr_9 [i_1]))), (((arr_9 [i_1]) || (arr_10 [i_1]))));
        arr_20 [i_1] [i_1] = (((((~(max(1990090597, 22307))))) ? (((((2154009187 ? 4192256 : -1654464097))) ? (((max(1, 12182)))) : (arr_9 [11]))) : ((max((arr_8 [i_1] [i_1]), (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {
                        var_29 = ((((max((max((arr_25 [i_1]), var_6)), ((min(176, var_15)))))) ? var_6 : (((((arr_6 [i_1]) || 1641835679))))));
                        var_30 = ((-(max((arr_13 [11] [i_7] [i_1] [i_1]), var_8))));
                        var_31 = (63 || 28472);
                        arr_31 [i_8] [i_1] [i_6] [i_1] = (max((max((arr_30 [i_1]), ((min((arr_16 [i_1] [20] [i_1] [i_1] [i_1] [i_1]), var_8))))), ((min(var_13, (var_5 * var_10))))));
                    }
                }
            }
        }
    }
    var_32 = ((~(var_0 * -var_12)));
    #pragma endscop
}
