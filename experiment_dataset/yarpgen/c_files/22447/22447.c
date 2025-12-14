/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_1] = (((44027 ? 3434944297 : -115)));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_1] [i_2] [i_1] [i_0] = (((max((min(3817420635, -21673)), 44056))) ? ((max((((arr_13 [i_1] [i_3] [i_1] [i_1] [i_1]) + (arr_5 [4] [i_3] [4]))), -1375922084))) : (((((var_12 - (arr_4 [i_1])))) ? (-115 + -21673) : (1039926978 % -114))));
                                var_14 = (~-1720704440);
                                var_15 += (((~(arr_13 [i_3] [i_3] [i_3] [i_3 - 1] [i_3]))));
                            }
                        }
                    }
                    var_16 = (+((var_4 ? (~845139697) : ((-1402058957 ? (arr_12 [i_0] [i_1] [i_1] [i_2] [i_1]) : 21674)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_1 - 2] [i_2] [i_1] [4] = (((((((-122 & (arr_12 [i_0] [i_0] [i_2] [i_5] [i_1]))) % (arr_4 [i_1])))) ? ((47 ? 21518 : 57981498)) : -1720704439));
                                var_17 = (arr_10 [i_0] [i_0] [6] [i_5] [i_1] [i_6]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (max(var_18, (~3574671208)));
    #pragma endscop
}
