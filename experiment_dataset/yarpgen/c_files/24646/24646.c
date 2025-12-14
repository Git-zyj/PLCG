/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((15333660399250817982 - 131) ? 3113083674458733640 : (max(1, 15333660399250817972)))) >> (var_5 - 9711875024713540125)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = (((~1) | (((arr_5 [i_1 - 2] [1] [i_1]) ? ((min(4, 1))) : 1))));
                var_17 = ((((-(1 && 1)))) ? ((var_1 ? 13820406290623389999 : -1)) : 16935658363887206279);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_18 &= (((((16431672233928784796 ? (arr_8 [21] [i_1] [i_2] [i_1 - 3]) : (arr_5 [15] [i_3 - 2] [i_1 - 1])))) ? (((((min(17141289616060219010, 1))) ? 48 : 5))) : (~14025931571771129486)));
                            var_19 = 1;
                            var_20 = max((~18000364623251706368), ((max(1, 213))));
                        }
                    }
                }
                arr_11 [i_0] = 2390560937793391668;
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_21 [12] [i_5] [i_5] [i_0] [i_1] [i_0] [i_0] = ((!((min((arr_1 [i_1 - 3]), (arr_1 [i_1 - 3]))))));
                                var_21 -= (--2497252792449564032);
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 *= (246 ? (min(((min(1, 68))), (1 * 17021688193223317392))) : (~1));
    #pragma endscop
}
