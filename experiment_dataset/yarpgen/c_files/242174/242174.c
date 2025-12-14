/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = 21;
                var_15 -= 0;
                var_16 = (max(1, 5215));
                var_17 = (323263078 % 1);

                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    var_18 = (min(var_18, (((323263078 ? 193 : 897695389)))));
                    var_19 &= ((193 ? ((27 ? -2310355944831671751 : -1187079520)) : (((((3971704218 ? 0 : -1479745343)) * 1)))));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((76 ? -1479745337 : 897695397)))));
                                arr_18 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] = ((1479745362 ? 1479745342 : -3528946439192071994));
                            }
                        }
                    }
                    var_21 = -9058;
                }
            }
        }
    }
    var_22 = (max(var_22, 389387071));
    #pragma endscop
}
