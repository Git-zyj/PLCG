/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_10 = (min(var_10, 45859));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_0] [i_3] = (max((124 != var_1), ((-119 >> ((((4384010933425693186 ? (arr_1 [17] [i_0]) : (arr_2 [2] [i_0] [i_3]))) - 1718564044))))));
                            arr_11 [15] [i_0] [i_3] [15] [i_0] [i_0 - 1] = var_7;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 20;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [i_1] [14] [i_5] [i_1] [i_0] = (min(var_9, var_3));
                            arr_19 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 + 1] [i_0] = (((min(((-112 ? var_4 : -1678052023566488119)), ((min(2244029459, 8571))))) < 1064999409));
                            arr_20 [i_0] [i_0] [i_4] [6] = ((2580419510616930528 ? 90 : 8593));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_29 [i_0] [i_1] [i_6 - 1] [i_6] [i_7] [i_8] = (((!var_9) ? ((((min((arr_1 [i_1] [14]), (arr_23 [i_0])))) ? ((min((arr_3 [i_8]), (arr_6 [i_8] [i_7] [i_1])))) : (arr_23 [i_0]))) : ((((arr_25 [i_0 - 2] [i_0 - 2] [i_0 + 1] [1] [i_0] [i_0 - 2]) / var_2)))));
                                arr_30 [i_0] [i_0] [i_6] [i_7 + 1] [i_8] = -112;
                                var_11 = (((arr_27 [i_0] [i_1] [i_6 - 1] [i_6 - 1] [i_1] [i_0] [i_7]) ? (((2163491312 >= var_1) ? ((max(var_4, 1))) : var_9)) : var_5));
                                var_12 *= -48;
                                arr_31 [i_0] [i_8] [i_0] = (max(((((min((arr_24 [1] [i_0] [i_6 - 1] [i_7] [i_6 - 1] [i_1]), var_1)) != ((max((arr_6 [i_0] [i_0] [i_0]), 1)))))), 9169759420797075484));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        arr_35 [i_9] = var_9;
        var_13 = (min(var_13, ((min((~4577333082918976737), ((((arr_15 [i_9] [i_9] [i_9] [i_9]) ? (arr_15 [i_9] [i_9] [16] [i_9]) : 6626))))))));
    }
    var_14 = (var_1 | var_1);
    var_15 &= (min(((~(11362897690565636352 & 20))), 1371325637024993408));
    #pragma endscop
}
