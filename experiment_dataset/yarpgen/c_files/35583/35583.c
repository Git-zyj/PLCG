/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_0 ? (min((((-2147483647 - 1) ? 1 : 1)), ((28898 ? 1 : var_6)))) : 1));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_20 = (min(var_20, 18052868279246370758));
                            var_21 &= ((((((arr_6 [i_0 - 1] [i_2 + 1] [i_3 - 1]) >= (arr_6 [i_0 + 3] [i_2 + 1] [i_3 - 1])))) | ((58247 & (arr_2 [i_2 - 1])))));
                        }
                    }
                }
                var_22 = (((18 ? 393875794463180859 : 58242)));
                var_23 = (arr_7 [6] [i_0] [i_0] [i_0] [9] [i_0 + 1]);
            }
        }
    }
    #pragma endscop
}
