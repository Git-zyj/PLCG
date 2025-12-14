/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = -23;
                arr_7 [i_0] [i_0] [i_0] = 28;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] [i_3] [13] [i_1] [13] [i_2] = (~((var_10 ? (arr_13 [i_2] [16] [i_2]) : (((0 ? 0 : (arr_8 [i_2] [i_2] [i_0] [i_2])))))));
                                arr_16 [2] [i_2] [i_2] [i_2] [i_0] = (--12);
                            }
                        }
                    }
                }
                var_20 = ((!((max((arr_13 [i_0] [i_0] [i_0]), (((~(arr_6 [i_0] [i_1] [i_0])))))))));
                var_21 = 11;
            }
        }
    }
    var_22 = min((((((max(469762048, var_13))) ? (!-12) : (min(6089618169886410289, -1))))), ((((min(var_17, 17053))) | -1519311149)));
    #pragma endscop
}
