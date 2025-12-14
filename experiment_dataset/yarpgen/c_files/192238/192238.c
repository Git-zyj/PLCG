/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 -= (min((((((min(113, var_14)))) | (max(var_8, 551161151204260214)))), ((((((var_13 ? (arr_1 [i_0] [i_1]) : (-127 - 1)))) ? ((113 ? 124 : 120)) : var_4)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_20 = (~((max((arr_4 [i_0] [i_2 + 1] [i_2]), (arr_4 [i_1] [i_2 + 1] [i_3])))));
                            var_21 = ((!(((120 << ((((var_13 ? 3117204336247383607 : (arr_2 [i_0] [i_3]))) - 3117204336247383588)))))));
                        }
                    }
                }
                var_22 = (!var_16);
                var_23 = -187434315;
                arr_10 [i_0] = (min(((((~-112) >= (~var_18)))), -4096));
            }
        }
    }
    var_24 = (((max((-113 % var_14), (83 >= var_13))) + var_4));
    #pragma endscop
}
