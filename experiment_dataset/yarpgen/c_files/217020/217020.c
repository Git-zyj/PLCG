/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [24] [i_3] [i_0] [i_0] = (max(((((636134593 != var_11) & var_9))), var_0));
                            arr_13 [i_1] = (max((((((max(32767, 32767))) ? (var_12 < var_7) : 58173))), ((-(max(var_4, var_10))))));
                        }
                    }
                }
                arr_14 [9] = ((((((-32766 % -32765) / -32761))) ? (max(-32756, 130560)) : ((min(0, 770997916)))));
                var_13 += (-32767 ^ 32766);
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_14 = (!32766);
                                var_15 = (((max(var_7, -770997917)) / ((max(-32766, 32766)))));
                                var_16 = (min(var_16, ((((((((max(var_6, -31826)))) < (max(var_9, var_11)))) && var_2)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                var_17 = (max(var_17, (((!32767) ^ (max((249 != 22624), var_0))))));
                arr_31 [i_7] [i_8] &= (var_7 / var_3);
                arr_32 [i_7] [i_7] = (max(var_2, (min((max(-32758, var_5)), ((max(43, 32756)))))));
            }
        }
    }
    var_18 = -32767;
    #pragma endscop
}
