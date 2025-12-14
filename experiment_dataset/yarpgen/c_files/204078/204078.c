/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 4006404362371708054;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_14 = ((((4006404362371708072 ? 3887788433216271421 : 4006404362371708073))));
                                arr_13 [i_1] [i_1] [i_1] [i_3] [i_4] = (arr_6 [7] [18] [i_2] [i_2]);
                            }
                        }
                    }
                }
                var_15 = ((max(var_6, 21)));
                var_16 = 4006404362371708061;
                var_17 = (min(-1239272831, -4006404362371708048));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_18 = (min(((min(189, (((!(arr_17 [i_6]))))))), 1146823264));
                            var_19 *= ((((arr_11 [3] [8] [i_1] [i_5] [i_5] [i_6] [i_6]) ? 268435328 : 36273)));
                            arr_19 [i_1] [i_5] [i_1] [i_1] = (arr_18 [i_0 + 1] [8] [i_1] [8] [i_5] [i_6]);
                            var_20 = (min(var_20, ((min(-321396252, 28)))));

                            for (int i_7 = 1; i_7 < 17;i_7 += 1)
                            {
                                var_21 += -106;
                                arr_23 [i_1] = -33;
                                var_22 = (min(var_22, (min(((-4006404362371708067 ? 8460474601235829489 : -4006404362371708061)), ((max((max(var_10, 118)), 4006404362371708094)))))));
                                var_23 ^= 30;
                                var_24 = 268435304;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
