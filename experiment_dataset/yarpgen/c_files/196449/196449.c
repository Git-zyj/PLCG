/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_21 = ((255 || (arr_1 [5])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] [i_3] [i_2] [i_1] [i_2] &= 12;
                                var_22 ^= ((((((~var_0) || var_11))) / ((244 >> ((min(0, 5)))))));
                                var_23 = (min(var_23, (((5066371313112592090 ? (((!var_4) ? 5 : ((2362166278 ? 0 : 1932800991)))) : 1932801026)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_24 ^= (1079835436708518638 << 0);
                                arr_18 [i_0] [i_1] [i_2] [2] [9] = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
