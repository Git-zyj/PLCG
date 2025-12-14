/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((((!(~51)))), ((-1074702296 ? ((6 ? 218151362 : -1138535325)) : (1073740800 - 49509)))));
    var_16 = (max(var_16, (((-(((65535 / 140737488355327) * (((12683169260637713217 ? 268435455 : 249))))))))));
    var_17 = ((((-(5763574813071838399 & 11620))) > ((-2515531147096407323 ? (((-16013 ? 0 : 16004))) : ((-4142334058489570463 ? 7805301978790059596 : 16724504952984620193))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_18 -= 4076815923;

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_1] = (39617 * 11620);
                        var_19 = (((((31844 ? ((16016 ? 1 : 8643397301632108272)) : -14578))) ? ((((min(255, -378878726))) ? (!6821) : (334111179 - -121))) : -14656));
                        var_20 = ((!((min(((max(-10367, -87))), 3363315234891630040)))));
                        arr_13 [9] [i_1] [i_2] [i_2] = (min(((11 ? (364653497 * 44) : (-56 || 66))), 16012));
                        arr_14 [i_0] [i_1] = (105 == 49510);
                    }
                }
            }
        }
    }
    #pragma endscop
}
