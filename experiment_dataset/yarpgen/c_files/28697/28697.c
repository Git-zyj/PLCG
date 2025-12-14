/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = ((((min(((1 ? -6 : 3285858380)), 3203410733))) ? (!var_1) : -4269069184));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_12 ^= ((((arr_13 [i_0] [i_1] [i_0] [i_1] [i_0] [i_1] [i_4]) <= (min(3203410718, 38897)))));
                                var_13 = (!var_6);
                                arr_16 [i_0] [i_1] [i_1] [i_2] [i_1] [i_0] [i_1] = ((((((((1091556585 ? 3203410733 : 65535))) ? var_7 : (!var_9)))) ? -var_4 : (var_4 <= -1751926082)));
                                var_14 = (max(var_14, (((+(((var_4 || var_3) ? -265291676 : 5789)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
