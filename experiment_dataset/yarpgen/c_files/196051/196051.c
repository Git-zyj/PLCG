/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= 7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0] [2] |= 9223372036854775807;
                var_12 = 4294967295;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_13 |= ((((max(0, 0))) ? ((((min(16, 4))) ? 5350608343507971269 : 1)) : 15));
                            arr_11 [i_0] [i_0] [i_1] [8] [i_1] [i_3] = (max(((1440650920 ? 8 : 4294967295), -8323072)));
                            var_14 = (~28);
                            arr_12 [i_0] [i_0] [i_0] [i_1] = (((((max(3675355837, 1440650920)) ? ((4294967295 ? 25536 : 108)) : (~1)))));
                            arr_13 [i_0] [i_1] [i_1] [i_0] = (max((min(((max(64, 1))), (min(15, 37531)))), (!105)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_20 [i_4] [i_5] [i_1] = ((26 ? (((((4294967295 ? 20812 : 6))) ? (15 + 3973745667) : 6)) : ((max(((min(-32754, 1))), -1110688543)))));
                                var_15 = (~(min((((8323072 ? 127 : -32746))), ((61931 ? -92 : 4294967290)))));
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 4; i_7 < 16;i_7 += 1)
    {
        arr_23 [i_7] [1] = 65534;
        var_16 = (0 == -1);
        arr_24 [i_7] [i_7] = -1440650920;
        var_17 = ((~((-99 ? -88 : 3605))));
    }
    var_18 |= min(2854316375, 0);
    var_19 = (((((1 ? (253055805 && 127) : (max(163851333, 1))))) || (~523776)));
    #pragma endscop
}
