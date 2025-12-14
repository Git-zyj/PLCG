/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max(1, ((62796 << (((-11 + 35) - 11))))))) % (min((((var_8 ? 0 : var_13))), ((19 ? -6398484461233618484 : 247277682))))));
    var_17 = var_14;
    var_18 = (max(((((min(var_12, var_4)) < (745411331 < 18995)))), (max((((1 ? 19015 : var_3))), ((-8 ? 486871733190656304 : 0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_16 [i_2] = (min(((1048455029400258527 << (4294967295 - 4294967294))), -2052583957));
                                var_19 = (arr_13 [i_0] [i_1] [i_2] [3] [10]);
                            }
                        }
                    }
                }
                var_20 = (min(var_20, (arr_5 [i_1])));
                var_21 = var_2;
            }
        }
    }
    #pragma endscop
}
