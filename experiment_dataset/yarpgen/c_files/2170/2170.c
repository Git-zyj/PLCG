/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 133;
    var_20 = -22290;
    var_21 = (min((min(((min(2147418112, 125))), (min(10677106183435758261, 268435328)))), ((min(125, 10819238963242545568)))));
    var_22 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (max(1, 52));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_12 [6] [i_1] [i_1] [i_1] [6] [6] = (min((min((17695795370640189400 << 9), ((min(-544953006, 1250372478))))), ((min(-1603160379, -17038)))));
                        arr_13 [i_0] [i_1] [i_1] |= (min((min(((122 ? 45786 : 73648445)), ((min(129, 1))))), ((544953005 ? 28 : 111))));
                        arr_14 [17] [i_1] [i_1] = ((((min(162, 254))) || (~1)));
                        var_23 = (-544953006 & -25350);
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_24 = max(1, 136);
                                arr_22 [i_0] [i_0] [i_0] [i_4] [i_0] = (min(0, (min(15, (!2)))));
                                var_25 -= ((((min(((min(1, 1))), -80))) ? (max(16673200456879199458, ((min(0, -219068404))))) : (min(3, 6449168764681050346))));
                                var_26 = -570549932;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
