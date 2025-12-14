/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_12 = ((((!(37541 + 124)))));
                            var_13 = ((~(-1 % -1)));
                            arr_8 [i_2] [i_1] [i_2] = (!-1);
                            var_14 = (min(var_14, ((((((((26753045 ? 0 : 0)) << (125 - 112)))) ? (~26753061) : (57142 % 125))))));
                        }
                    }
                }
                var_15 |= ((~(0 | 1367241534)));
                arr_9 [10] = ((~(196696680 | -8)));
                var_16 = (125 | -50);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_15 [i_5] [i_5] [i_5] [i_5] [i_0] [i_0] = ((+(((~65535) | 26753024))));
                            var_17 = -26753025;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            {
                arr_21 [i_6] [i_6] = (((((-26753046 ? 26753028 : 65528))) ? ((~(~-1))) : -107));
                arr_22 [i_6] [i_6] [i_7] = (((47640 ? -111 : 26753024)));
            }
        }
    }
    #pragma endscop
}
