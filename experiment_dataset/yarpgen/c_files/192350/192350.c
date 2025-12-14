/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1 - 4] [i_2] = -19;
                    var_11 = ((var_7 | (+-1709867343)));
                    var_12 = (arr_3 [i_0] [i_1]);
                }
            }
        }
        var_13 = (((var_8 ? ((max(4294967295, (arr_2 [i_0] [i_0])))) : ((-(arr_3 [i_0] [i_0]))))));
        arr_10 [14] [i_0] &= (18446744073709551615 < 20443);
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_14 += 9192831703978696921;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    arr_21 [i_4] = (arr_11 [i_4]);
                    arr_22 [i_3] [i_3] &= (max(((-(arr_13 [i_5]))), (((arr_16 [i_3]) ? (arr_16 [i_3]) : (arr_13 [i_4])))));
                    arr_23 [i_4] [i_4] = ((-(arr_16 [i_3])));
                    arr_24 [i_3] [i_4] [i_4] = var_9;
                }
            }
        }
        arr_25 [i_3] |= -1709867343;
    }
    var_15 += (!782000824);
    #pragma endscop
}
