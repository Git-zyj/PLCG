/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = (arr_3 [i_1] [i_0]);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_21 -= (arr_3 [17] [6]);
                    arr_9 [i_1] [i_1] [i_1] = ((-(arr_3 [i_1 + 1] [i_0 + 3])));
                }
            }
        }
    }
    var_22 = -1431513680;
    var_23 = (4294967292 ^ var_17);
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            {
                arr_15 [i_3] [i_4] [i_4] = 1051520406;
                arr_16 [i_4] [i_4] = (max(727323395, (4294967295 != 11)));

                for (int i_5 = 1; i_5 < 22;i_5 += 1)
                {
                    var_24 = (max(var_24, (((16915 ? 1 : 0)))));
                    var_25 *= (arr_17 [i_3] [i_4] [i_5]);
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_26 -= (7308788475554112977 == -308919322);
                            var_27 = ((((-1431513675 + 2147483647) >> (2511200326 - 2511200301))));
                        }
                    }
                }
                arr_24 [i_3] [i_4] = ((min((!1), -12744)));
            }
        }
    }
    var_28 = (21476 == 0);
    #pragma endscop
}
