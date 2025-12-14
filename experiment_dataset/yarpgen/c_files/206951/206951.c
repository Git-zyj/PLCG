/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_11 = ((-1738437644 ? 112 : (((149 && ((min(1845457004, (-32767 - 1)))))))));
                                var_12 = (max(157, (((0 ? 48 : 97)))));
                                var_13 = (((min(1, 1)) ? (((1 << (176 - 166)))) : (max(4602678819172646912, 30565))));
                                arr_15 [i_0] [1] [i_0] = (min((0 != 48661462), 13705989860535403037));
                            }
                        }
                    }
                    var_14 = ((((((1610612736 ? 115 : 43482))) ? (min(-4, -1610612736)) : (-9223372036854775807 - 1))));
                }
            }
        }
    }
    var_15 = (max(((min(((min(1, 32764))), 4249192447))), (max(((159854919 + (-9223372036854775807 - 1))), 1275399532))));
    var_16 = var_6;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            {
                var_17 = ((-(min(14680064, -159854907))));
                arr_22 [i_6] = (max(-6612881402388722932, ((1632441326 ? 30999 : 4280287246))));
            }
        }
    }
    #pragma endscop
}
