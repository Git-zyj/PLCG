/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (max(0, ((var_16 < (var_4 >> var_10)))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0 + 2] [i_0] = ((((!(arr_1 [i_0]))) ? ((~(((arr_2 [i_0 - 1]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0 + 1]))))) : (((max(var_12, (arr_1 [i_0 - 1])))))));
        var_21 = (min(var_21, ((((arr_0 [i_0] [i_0 + 2]) ? -2095007476007212766 : 63892)))));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_22 *= ((((((arr_1 [i_1]) ? (~var_10) : (((arr_2 [i_1]) & 16383))))) ? 38701 : ((~(~var_0)))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_23 = 23510;

            for (int i_3 = 4; i_3 < 17;i_3 += 1)
            {
                arr_12 [i_1 + 2] [i_1] [i_1 + 2] [6] &= -23511;
                var_24 += (!-var_13);
                arr_13 [i_1] [i_2] = (!(arr_9 [i_3 - 3] [i_3] [i_3 - 3]));
                arr_14 [i_1 + 1] [i_2] [i_3] = ((-(arr_7 [i_1 + 1])));
            }
            var_25 = ((!(((0 ? 1 : (arr_2 [i_1]))))));
            arr_15 [i_2] = (arr_0 [i_1] [i_1]);
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
        {
            var_26 = (arr_6 [i_1 + 2] [13] [i_4]);
            var_27 = ((var_18 ? ((31521 ? 152 : 45635)) : 45635));
            var_28 = ((-((var_11 ? (arr_17 [i_1] [i_1]) : (arr_5 [i_1] [i_1])))));
        }
        var_29 = ((((max((arr_9 [i_1] [i_1 + 1] [i_1]), (arr_10 [i_1 + 2])))) ? ((min((arr_0 [1] [i_1]), var_6))) : ((max((arr_7 [i_1]), (!1959825338))))));
    }
    var_30 = (max(var_30, (((var_18 ? -var_17 : ((max(-1, -23507))))))));
    #pragma endscop
}
