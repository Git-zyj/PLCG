/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_17 = (min(var_17, (((+((((((arr_1 [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0 - 1])))) ? ((-1958144153 ? (arr_0 [i_0]) : (arr_1 [i_0]))) : -1614)))))));
        var_18 = (((min(-1615, (arr_1 [i_0]))) % (max((arr_0 [i_0]), (arr_1 [5])))));
        var_19 |= -1621;

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_20 = (max((((~(((arr_4 [i_0] [i_0]) ? 1616 : 1614))))), (~7758308366973554712)));

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                var_21 = var_2;
                var_22 = ((((((arr_3 [i_0] [i_2] [i_0 + 2]) - (arr_4 [i_0] [i_0 - 1])))) ? ((((arr_4 [i_0] [i_0 + 3]) ? (arr_3 [i_2] [i_1] [i_0 + 3]) : -1616))) : (((arr_4 [i_0] [i_0 - 1]) ? -2899757913256916376 : 12))));
                var_23 = (!(((((16013075797362320193 | (arr_6 [i_2] [i_1] [i_1] [i_1]))) & (((max((arr_3 [i_0 + 2] [i_0 + 2] [i_2]), (arr_3 [i_0] [i_1] [i_2])))))))));
            }
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_24 = (!((((arr_1 [i_1]) ? (arr_7 [i_0 + 3] [i_0 + 3] [i_0]) : (min(var_13, (arr_9 [i_0] [i_1] [i_3])))))));
                            var_25 = ((((max(var_1, ((~(arr_7 [i_0 - 1] [i_4] [i_5])))))) ? (((~var_9) ? 63 : (arr_3 [i_0 + 1] [16] [i_5 + 3]))) : ((~(max(var_6, 62))))));
                        }
                    }
                }
                var_26 = ((((-(((arr_14 [i_0] [i_1] [14]) / (arr_12 [i_3] [i_1] [i_3] [i_3] [i_3] [i_3]))))) < (-37 * 54812)));
                var_27 = var_5;
            }
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                var_28 = ((((min(-1615, 0))) ? ((10 ? -63 : (-32764 / 2))) : -2147483628));
                var_29 = (!-0);
            }
            var_30 = ((((65535 - (arr_15 [i_0 + 2] [i_0 + 2]))) <= (arr_15 [i_0 + 3] [i_0 + 1])));
            var_31 = (min((!-1603), ((~(((!(arr_1 [0]))))))));
            var_32 = ((~(arr_14 [i_0 - 1] [i_1] [i_1])));
        }
    }
    var_33 = (max(var_6, var_13));
    #pragma endscop
}
