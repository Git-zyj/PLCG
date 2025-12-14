/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_15 && 23);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = (~((max((max(-11331, (arr_4 [i_0] [i_1]))), (arr_4 [i_1] [i_0])))));
                var_20 = ((!(arr_4 [i_0] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] = (max(143552238122434560, (arr_7 [i_3] [1] [i_2] [i_3])));
                            arr_11 [i_0] [i_1 - 2] [i_2] [i_0] = ((((max(-0, (arr_6 [i_1] [i_0] [i_1 + 1] [i_1 - 4])))) ? (((((-1232661717 ? (arr_9 [i_0] [i_1] [i_2] [i_3]) : var_8)) ^ var_11))) : -883789634757635383));
                        }
                    }
                }
            }
        }
    }
    var_21 = (min(var_21, (((((var_13 > var_5) && ((max(0, var_6))))) ? var_8 : (min(var_9, (1232661716 & 21388)))))));
    #pragma endscop
}
