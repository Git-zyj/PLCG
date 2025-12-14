/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((max(-27343, 798339559))) ? 798339546 : 798339546))) ? var_4 : (max(var_5, 4211651104102275038)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (((77 + 4081) & (~var_4)));
        arr_3 [i_0] = (((((798339559 ? var_6 : (max(4211651104102275041, (-32767 - 1)))))) ? 7320389157581162912 : (~var_9)));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {
        var_12 += 7320389157581162912;
        arr_6 [i_1] = var_9;

        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            var_13 = (var_5 <= var_4);
            arr_9 [2] [i_1] [i_1 - 1] = var_1;
            var_14 = (max(var_14, ((((arr_7 [i_1 - 2]) + (arr_7 [i_1 + 1]))))));
            var_15 = (4081 != -957235440676412470);

            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                var_16 *= 14235092969607276575;
                arr_12 [i_1 - 1] [i_2] [i_3 + 2] = 798339547;
                var_17 = (14235092969607276578 & 1);
                arr_13 [i_2] = 4048992401845463286;
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_18 = (max(var_18, (((var_9 != (arr_15 [i_2 - 1]))))));
                var_19 = 4294967288;
                var_20 = 4026531840;
                var_21 |= (4211651104102275027 ? 255 : -4044799806080020044);
            }
            for (int i_5 = 1; i_5 < 22;i_5 += 1)
            {
                arr_19 [i_5] [10] [i_5] = (!-4066);
                var_22 = (min(var_22, ((((~var_1) ? var_1 : 2249892070645052185)))));
            }
        }
    }
    for (int i_6 = 0; i_6 < 0;i_6 += 1)
    {
        var_23 -= (((min((arr_4 [3] [1]), (var_4 - 1))) ^ var_4));
        arr_22 [i_6] = 1;
        var_24 = 0;
    }
    var_25 = ((~((min(7896, 43)))));
    #pragma endscop
}
