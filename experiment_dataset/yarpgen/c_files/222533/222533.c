/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (~(max(var_3, var_12)));
    var_14 = max((((!1) ? (!123) : var_11)), (((!14909198120663788346) ? var_12 : (~-1439896716))));
    var_15 = 8708;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_16 ^= ((--7) * (!-70));
                arr_7 [i_0] = (!1439896731);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_3] [i_2] = ((~(min(1, 8085227217999938603))));
                                var_17 = (517342914 ? (!94) : 0);
                                var_18 *= 200497536;
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_0] [i_0] = ((-(13866855594205280653 & 1)));
                arr_17 [i_1] = ((min((min(13822, 1622641615742051298), -2147483619))));
            }
        }
    }
    var_19 ^= var_0;
    #pragma endscop
}
