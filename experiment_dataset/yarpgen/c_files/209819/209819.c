/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += 5639;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = ((((((((-5639 ? 1 : (arr_4 [i_0] [i_1])))) ? (arr_4 [i_0] [i_1 - 1]) : ((max(-5621, (-32767 - 1))))))) ? ((32753 ? (arr_1 [i_0] [i_0]) : 24206)) : (arr_1 [i_0] [i_1 - 1])));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_0] [i_0] [i_0] = (5639 || 1);
                                arr_16 [i_3] [i_1] [i_1] [i_3] [i_4] = (arr_0 [i_0]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        {
                            arr_21 [i_0] [i_1] = (((-5639 ? 444176479 : -5644)));
                            arr_22 [i_0] [i_0] [i_1] = ((!((((var_1 >> (26696 - 26673)))))));
                            var_15 = (((((-(((var_7 && (arr_11 [i_6] [i_6] [i_6]))))))) ? ((-((max(var_2, (arr_6 [i_1 - 1] [i_0])))))) : ((((max((arr_10 [i_1] [i_5] [i_1 - 1] [i_1 - 1] [i_1]), (arr_11 [i_0] [i_0] [i_0])))) ? ((max((arr_9 [i_6] [i_5 - 2] [i_1 - 1] [i_1] [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_0] [i_1])))) : (((arr_7 [i_0] [i_0] [i_0] [i_1]) ? var_7 : 5609))))));
                        }
                    }
                }
            }
        }
    }
    var_16 = (var_10 << var_10);
    #pragma endscop
}
