/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (min((min(var_1, (arr_1 [i_0] [i_0]))), 7910410990984595491));
                var_19 = ((((((0 ? 18446744073709551615 : 145175523)) ? ((-47 ? 0 : 244)) : 2147418112))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_20 = 2898408431;
                            var_21 = (((~var_9) * (((((max(var_16, var_0))) || (var_0 >= 2009933632667185705))))));
                            var_22 = (min((min(((max(-26398, -1))), (arr_1 [i_0] [i_0]))), (min(((((arr_8 [i_0 + 1] [i_0] [i_0] [i_0 - 1]) & var_3))), (max((arr_6 [i_0] [i_0]), var_11))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
