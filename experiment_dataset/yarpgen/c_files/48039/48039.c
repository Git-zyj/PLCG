/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    var_15 = max((((((max(-4643850546638723282, 163))) ? var_3 : var_7))), ((-7857859432277043654 / (((var_10 ? -42 : 46788))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 22;i_4 += 1)
                            {
                                var_16 = (min(92, 49152));
                                arr_15 [i_0] = ((((1707178073955847541 ? (min(3, 3375383179)) : 54)) >= (((18747 ? (arr_2 [i_0 - 1]) : ((1 ? 18747 : (arr_2 [i_0 + 1]))))))));
                            }
                            for (int i_5 = 3; i_5 < 21;i_5 += 1)
                            {
                                var_17 = (max(((201 ? (arr_4 [7] [i_5]) : -571923473)), (arr_18 [i_0] [i_5] [i_2] [i_5] [i_5])));
                                var_18 = ((((arr_10 [i_2 + 4] [11] [i_5 + 1] [i_5]) == 4293417230892451129)) ? (((-4293417230892451102 ? ((14411660702508389159 ? 102 : 214)) : ((-1 ? 21 : 716386031))))) : (arr_9 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_0 + 1]));
                                arr_19 [i_0] [i_0] [i_0] [i_5] [i_0 - 1] [i_0] = (arr_8 [i_0] [i_0] [i_1] [i_2 - 1] [i_3] [i_3]);
                                var_19 = ((((((arr_7 [i_1] [i_2 + 2] [19]) <= (arr_14 [i_5 + 1] [i_5] [i_3])))) > (!-1)));
                            }
                            for (int i_6 = 2; i_6 < 19;i_6 += 1)
                            {
                                var_20 = (!-1707178073955847541);
                                var_21 = (!7936);
                                var_22 = (min(-201, ((max(0, -32)))));
                                var_23 = (arr_14 [i_0] [i_1] [i_2]);
                                var_24 = max(214, 417058499);
                            }
                            arr_24 [i_0] = ((!((104 && (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_2 - 2])))));
                        }
                    }
                }
                arr_25 [i_0] [i_0] [i_0] = (~102);
            }
        }
    }
    #pragma endscop
}
