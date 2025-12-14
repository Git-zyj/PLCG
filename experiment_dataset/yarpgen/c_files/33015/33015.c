/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_12 = (!248);
                var_13 += (~(2364956286 & -9201535061711108362));
                var_14 = ((~(arr_4 [i_0 + 1] [i_0 + 4])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_15 = (!248);
                            arr_11 [i_1] [i_1] [i_1] [i_1] = ((!(~7936)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_16 = (9201535061711108370 + -9201535061711108362);
                                var_17 &= -7923;
                                var_18 = (arr_13 [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 *= (12288 != 7936);
    #pragma endscop
}
