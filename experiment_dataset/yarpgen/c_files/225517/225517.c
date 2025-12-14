/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((--8) ^ var_12));
    var_19 = (var_0 ? 8 : (var_13 & var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_20 += 16955;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        {

                            for (int i_4 = 3; i_4 < 16;i_4 += 1)
                            {
                                arr_14 [i_2] [i_2] = var_1;
                                arr_15 [i_0] [i_1] [i_2] [i_3 - 3] [i_4] = (var_15 ? -var_17 : (((13153440068204527422 ? 59 : var_0))));
                                arr_16 [i_2] = ((((!(arr_7 [i_2]))) ? -13153440068204527422 : (arr_13 [i_1] [i_1] [i_1 - 1] [i_2] [i_1] [i_2 - 1])));
                                arr_17 [i_2] [i_1] [i_2 - 1] [i_4 - 1] = (arr_13 [i_0] [i_1] [i_2 + 1] [i_2] [i_3] [i_4 + 1]);
                                arr_18 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] [0] &= ((((((arr_11 [i_0] [i_1] [i_2] [i_3 - 1] [i_4]) - (0 - -9148541651363725751)))) ? ((((-28645 * 4132811845) == (((max(0, (arr_7 [i_3])))))))) : 1289269090));
                            }
                            for (int i_5 = 2; i_5 < 18;i_5 += 1)
                            {
                                var_21 = (max(var_21, ((((~var_6) ? 4132811847 : (~162155452))))));
                                arr_23 [i_0] [i_0] [i_1 + 1] [i_2 + 1] [i_0] [i_0] [i_2] = ((((min(19926, 162155449))) ? (((!var_5) << (131 - 118))) : ((var_1 ? (arr_20 [i_0] [i_2] [i_2 + 1] [i_3 - 2] [i_2]) : var_1))));
                            }
                            /* vectorizable */
                            for (int i_6 = 1; i_6 < 19;i_6 += 1)
                            {
                                arr_27 [i_0] [i_2] [i_0] = 1;
                                var_22 = (((arr_10 [i_3 - 2]) ? ((~(arr_2 [i_0]))) : (6322 < -1289269090)));
                            }
                            arr_28 [i_0] [i_1] [i_1] [i_2] = ((((((arr_9 [i_0] [i_1 + 1] [i_2] [i_2 - 1] [i_3 - 4] [i_3]) / (arr_21 [i_1 - 2] [i_1 + 3] [i_1 + 3] [i_2 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 4])))) ? var_11 : var_17));
                        }
                    }
                }
                arr_29 [i_0] = (((((-(min((arr_24 [i_0] [i_0]), 686181854))))) > (((arr_19 [i_0] [i_1 - 2] [i_0] [i_1 - 2] [i_1] [i_0] [i_1]) ? var_10 : (arr_19 [i_1] [i_1 + 3] [i_1] [1] [i_0] [i_0] [i_0])))));
            }
        }
    }
    #pragma endscop
}
