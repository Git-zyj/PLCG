/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (max((min((arr_5 [i_0 - 1]), (arr_1 [i_0 + 3] [i_1 - 1]))), (((3522782469 ? -14885 : (arr_1 [i_1 + 1] [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_16 = (((((var_2 ? -1 : (arr_9 [i_0] [i_0 + 2] [i_0 + 3] [i_1 + 1] [i_3 - 1] [i_1])))) ? (((((max(530219497, 24))) ? ((min((arr_7 [i_0] [i_1]), (arr_10 [i_1])))) : var_1))) : (max((~var_11), ((min((arr_1 [i_2] [i_3]), var_10)))))));
                            var_17 = ((~(max(2789298340518565993, 603386076))));
                            var_18 ^= (((((-6592102739178146154 ? (max(60781, -530219494)) : (95 & var_15)))) ? 1056964608 : (max((~3504910004113240117), ((var_15 ? var_8 : var_4))))));
                            arr_11 [i_0] [i_1] [i_2] [i_3] = (max((((!((max(3673988053, (arr_7 [i_1] [i_1]))))))), 100));
                            var_19 = (((((((((arr_0 [i_1]) ? var_4 : var_6))) ? ((max((arr_5 [i_0]), 4064819698))) : var_13))) ? 0 : var_2));
                        }
                    }
                }
            }
        }
    }
    var_20 = 244;
    var_21 = ((-456652576 ? -2689235218335378823 : 175));
    #pragma endscop
}
