/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((11570544428678459617 ? 2055859059287580869 : -558750041));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = (((((-558750041 ? -558750040 : -27135))) ? ((558750040 ? (arr_5 [i_2 - 2] [i_2 + 1] [i_2 - 1]) : (arr_5 [i_2 + 1] [i_2 - 2] [i_2 - 2]))) : (((arr_5 [i_2 + 1] [i_2 + 1] [i_2 - 1]) ? 558750051 : var_2))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_21, ((((((558750041 ? 5256478211695364367 : var_9))) ? ((8 ? var_11 : var_2)) : (((arr_5 [i_2 - 1] [3] [7]) ? -558750015 : (arr_5 [i_2 - 1] [i_2 - 1] [i_2]))))))));
                                var_22 = (((((558750014 ? (arr_10 [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2 - 1]) : (arr_10 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 + 1])))) ? ((((arr_10 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 1]) ? -558750045 : var_11))) : ((var_17 ? (arr_10 [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2 - 1]) : (-127 - 1)))));
                                var_23 += ((558750014 ? (((1 ? 558750041 : (-127 - 1)))) : 899722975));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 *= ((var_14 ? ((var_14 ? (((-1 ? 4294967295 : 558750006))) : var_2)) : (((var_9 ? var_8 : 558750041)))));
    #pragma endscop
}
