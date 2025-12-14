/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max((max(var_7, 3588)), (max(var_0, var_9)))));
    var_18 ^= var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = (((((max(0, var_16)) - ((max(-11, 56))))) * (((!(((26 ? var_8 : var_10))))))));
                var_19 = var_1;
                arr_7 [i_0] [i_1] = (max((arr_3 [i_1] [i_1] [i_1]), ((max((arr_1 [i_1]), (arr_3 [i_0] [i_0] [6]))))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_20 = ((max((((1998148406 << (3739410585 - 3739410585))), (max(257698037760, 1562664230))))));
                            arr_12 [i_0] [i_2] [i_2] [i_2] [i_2] [i_3] = ((!(((3 ? 27178 : 0)))));

                            for (int i_4 = 0; i_4 < 15;i_4 += 1)
                            {
                                arr_16 [i_0] [i_1] [2] [i_2] [i_4] [i_4] = (min((((!(!var_7)))), ((min(var_12, 183)))));
                                arr_17 [i_0] [i_0] [i_2] [i_4] [i_4] [i_2] [i_0] = (max((!var_5), (max((((arr_3 [i_0] [i_3] [i_4]) ? var_11 : 555556708)), (2154593292 || var_7)))));
                            }
                            var_21 = (max(var_21, (((!(((var_4 ? 35384 : (((arr_8 [i_2]) - 0))))))))));
                        }
                    }
                }
            }
        }
    }
    var_22 = 1;
    #pragma endscop
}
