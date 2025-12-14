/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((((~7) ? var_14 : var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_10 [i_0 - 3] [i_0] [i_2] [i_3] [i_4] = ((((arr_1 [i_0]) ? 524287 : (max(-1729029705, (arr_1 [i_0]))))));
                                var_20 = (min(var_20, ((min(((((arr_6 [i_2] [i_2] [i_2] [i_3]) ? var_18 : (arr_6 [i_1] [i_3] [i_1] [i_0])))), ((((arr_4 [i_4] [i_2] [i_2] [i_0]) ? -1666469164 : 4294967295))))))));
                                var_21 = ((max((arr_5 [i_0 - 3] [i_0 - 2] [i_0 - 1]), (arr_5 [i_0 + 1] [i_0 + 1] [i_0]))));
                            }
                        }
                    }
                }
                var_22 = (max(var_22, var_9));
            }
        }
    }
    var_23 = ((((min(var_14, var_14))) ? ((((min(var_2, var_11))))) : ((var_8 ? var_13 : (var_0 ^ 2147483638)))));
    #pragma endscop
}
