/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 = 191;
                    var_18 -= ((65 ? 64 : 27424));
                    arr_8 [i_0] [i_0] [4] = (arr_0 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_19 = 4222308726;
                                var_20 += 848463879;
                                arr_14 [i_0] [i_0] = arr_1 [i_0];
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_5] [0] [i_1] [i_0] = -5936427835618475600;
                                var_21 = ((-(arr_6 [i_6] [9] [i_2] [1])));
                                var_22 -= 191;
                                var_23 = (((((!((65525 || (arr_13 [i_0 + 1] [i_5] [i_2] [i_5] [i_6] [i_0 + 1])))))) + (!72658544)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
