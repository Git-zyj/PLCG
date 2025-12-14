/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((-((9106558484277964935 - (arr_2 [i_0] [i_0])))));
                var_11 = ((784558455780150956 ? ((232850626329784797 ? 10323079155934690212 : -123)) : 1));
                var_12 *= (max(((!((max(34659, 9106558484277964935))))), (!1900972674697437859)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_4] [17] [17] [i_4] [i_0] = (11 < var_6);
                                var_13 = (((!2147483647) ? var_8 : var_10));
                            }
                        }
                    }
                }
                arr_15 [i_1] [i_1] [i_0] = var_7;
            }
        }
    }
    var_14 = ((-((min(65535, -11432)))));
    var_15 = (!var_1);
    #pragma endscop
}
