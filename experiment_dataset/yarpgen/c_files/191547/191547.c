/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_3] [i_2] = (-104 ? (((var_2 ? 74 : var_3))) : ((var_9 ? var_17 : (~255))));
                            arr_12 [i_1] = ((((((min(var_7, 50306))) ? var_17 : ((239 ? 15760999096253957076 : 4294967295)))) + (138 | 7182)));
                        }
                    }
                }
                arr_13 [i_1] [i_1] [i_1] = (min(63, 3713959607));
                arr_14 [0] = (var_18 ? ((58 ? 551040225 : ((var_14 ? 4294967295 : 4086096786)))) : -50306);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 17;i_5 += 1)
                    {
                        {
                            arr_20 [i_0] [i_1] [i_0] [i_4] [i_4] [i_4] = -65535;
                            arr_21 [i_4] [i_4] [i_4] [i_0] [i_0] = (((((-24922 ? 1636121981 : (((min(65, -26989))))))) ? 37569 : (127 - 32)));
                            arr_22 [i_4] [i_4] = ((-123 ? -4308980624754838432 : 145817155));
                        }
                    }
                }
            }
        }
    }
    var_20 = ((((!(~1))) ? ((((((1 ? 247 : 763809038985032646))) ? -1 : (max(50306, var_12))))) : 4445646623238821547));
    var_21 = ((1 ? ((max(var_17, 90))) : 67076096));
    #pragma endscop
}
