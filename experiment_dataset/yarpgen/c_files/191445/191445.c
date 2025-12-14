/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 15;
    var_14 = (((var_8 == 56348) ? var_11 : ((min((3 == 4227858432), ((-72 ? var_5 : 72)))))));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
        {
            arr_6 [1] = var_12;
            arr_7 [i_0] [i_0 - 2] [i_0] = 130;
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                var_15 &= (arr_2 [i_0 + 1] [i_0 - 1]);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_16 = var_5;
                            arr_18 [i_2] = (max(((~(arr_1 [i_0 - 3] [i_0]))), 136));
                            arr_19 [i_0] [13] [i_0] [i_0 + 1] [i_0] [i_0 - 3] [1] = ((((min(8851801463284668439, 4147760378372869825))) && (arr_5 [i_3] [i_0 - 1])));
                            var_17 = var_6;
                        }
                    }
                }
                arr_20 [i_0] [i_0] = (arr_14 [i_0] [i_3]);
            }
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                arr_23 [i_0] [i_2] [i_2] = ((((-((min(1, 1))))) - -1));
                arr_24 [i_0] [i_2] [i_6] [i_6] = (min((arr_10 [i_0 + 1]), (max(((588887028 ? 255 : 1306199675)), (max(1, 3731))))));
                var_18 = (max(var_18, (min(-2941720706488205546, 1353200216))));
                arr_25 [i_6] [i_0] = ((var_10 ? (arr_16 [i_0 - 2]) : (min((min((arr_14 [i_2] [i_2]), 15)), ((1 << (var_7 + 7256680901121882176)))))));
                var_19 += (max((((44225 ? (arr_22 [i_0 - 3] [i_0] [i_0 - 1]) : ((((-9223372036854775807 - 1) <= -1)))))), (((arr_1 [i_2] [i_0 + 1]) ^ (((var_12 ? var_1 : (arr_17 [i_0] [10]))))))));
            }
            arr_26 [i_0] [i_2] = ((((((~6) ? 1348118459301897999 : 9188))) ? 144 : 4294967295));
        }
        arr_27 [i_0] [i_0] = (arr_15 [12] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 - 3]);
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        arr_30 [i_7] = ((min((((arr_28 [i_7]) ? var_8 : 1348118459301898011)), (199 & 16878))) <= ((max(3695743420, 18280))));
        var_20 = (max(var_20, (((-127 ? 141212924850949455 : 34)))));
    }
    #pragma endscop
}
