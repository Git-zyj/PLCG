/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (198 ^ 58411);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((min(-var_9, var_4)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] = (~64000);
                                arr_16 [i_0] = ((var_9 > (((57 == (arr_14 [i_2] [i_0] [i_0]))))));
                                arr_17 [i_4] [i_0] [i_2] [i_0] [i_0] = (--871780967);
                            }
                        }
                    }
                    var_14 = ((((max((~var_6), var_0))) ? (max(-8759221982689468570, 198)) : var_2));
                }
            }
        }
    }
    var_15 = (((max((!var_5), (((var_8 + 2147483647) << (var_5 - 6917696024315468410))))) / (~77)));
    #pragma endscop
}
