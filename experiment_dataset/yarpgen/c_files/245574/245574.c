/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= ((-(max((min(12552, 0)), 12541))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_19 = ((((max(((-(arr_0 [i_0] [i_0]))), (arr_0 [i_0] [i_0])))) && ((((arr_3 [i_0 - 2]) ? (arr_3 [i_0 - 1]) : (arr_6 [i_0 - 2] [i_0 - 2] [i_0 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = ((-((32767 ? (arr_10 [4] [1] [22] [i_3] [i_3]) : (1018013660673579011 | 52984)))));
                                var_21 += (((((((0 ? 15147652777803113450 : 52984))) ? (((16 >> (var_11 + 7481230870381429337)))) : (arr_1 [i_0] [i_0 + 1]))) > ((min((max((arr_4 [i_1] [i_3] [i_1]), (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1]))), -48)))));
                                var_22 |= (((((-(arr_1 [i_0] [i_1])))) ? (((18446744073709551606 ? 100 : -28950))) : -106));
                                arr_12 [i_0 - 2] [i_0 - 2] [i_1] [i_0] [i_3] [i_4] [i_4] = (arr_1 [i_0 - 1] [9]);
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [6] = 618201873;
                            }
                        }
                    }
                    arr_14 [i_0 + 1] [i_0 + 1] [i_0] [i_2] = (arr_0 [i_0] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
