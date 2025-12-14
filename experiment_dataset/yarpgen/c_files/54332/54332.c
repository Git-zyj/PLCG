/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] = (((21 * 1) * 0));
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((((7 & 1) & (38314 & 1))) & ((((!((((-9223372036854775807 - 1) & 29))))))));
                }
            }
        }
    }
    var_18 = 1;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 11;i_5 += 1)
            {
                {
                    arr_19 [i_3] [1] [i_5 + 1] [7] &= 16881820745777596488;

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        arr_24 [2] [i_4] [i_5 - 2] [4] [i_4] [i_6] = (1 & -1122735948);
                        arr_25 [i_3] [i_3] [i_4] [i_5 + 1] [i_6] = 1;
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        arr_29 [i_3] [i_3] [i_3] [i_3] = (((((1 & 1) & 9223372036854775804)) & (31744 & 0)));
                        arr_30 [i_3] [i_4] [i_5] [0] = (-(!18446744073709551615));
                    }
                    arr_31 [i_3] [i_3] [0] [i_3] = -12;
                    arr_32 [i_3] [9] [i_5 - 1] = (((1 & 54377) & (1 & 9223372036854775807)));
                }
            }
        }
    }
    #pragma endscop
}
