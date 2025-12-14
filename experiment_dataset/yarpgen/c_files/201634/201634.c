/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = -847390982;
                    arr_7 [8] [i_1] &= (min((min((min(3495484559, 3524459758)), 3524459758)), (min(((min(0, 0))), (min(-95, 799482737))))));
                }
            }
        }
    }
    var_17 = (max(1699901134, 3495484559));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                arr_14 [i_3] = (max(96, 799482736));
                var_18 += 9626485915565942961;
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            arr_20 [i_3] [i_3] = (max(1699901134, ((min(166, 19)))));
                            var_19 = (min(166, 1699901134));
                            arr_21 [i_3] [i_4] [i_5] [i_3] = 185137639;
                            arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] = 318916;
                        }
                    }
                }
                arr_23 [i_3] [i_4] [i_3] = (max(-1242435425, 160));
            }
        }
    }
    #pragma endscop
}
