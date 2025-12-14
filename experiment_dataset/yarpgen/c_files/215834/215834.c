/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [12] = ((~((((1259340822 && 8191) > (~2147483647))))));
                arr_8 [i_1] [i_1] = 2147483620;
            }
        }
    }

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        var_12 = var_5;
                        arr_19 [i_5] [i_4] [i_3 - 1] [i_3 - 1] [i_2] = (max(((65535 ? -2147483620 : ((12991 >> (-8 + 33))))), ((max((arr_16 [i_3 + 1] [i_3 + 1]), (arr_16 [i_3 - 1] [i_3 - 1]))))));
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        var_13 ^= ((~((2147483619 ? (min((-2147483647 - 1), 2147483620)) : 3))));
                        var_14 = (max(-2020933801, 1032326343));
                        arr_22 [i_2] [i_2] = ((max(var_9, (max(-24711, var_9)))));
                    }
                    arr_23 [i_3] [i_3] [i_3] [i_3] = (((min(210270264, (arr_14 [i_2] [i_3 + 1] [i_3 - 1]))) > (arr_2 [i_2] [i_3 - 1])));
                    arr_24 [i_2] [4] [i_4] = (29 ? ((min((-32767 - 1), (arr_9 [14] [i_3 - 1])))) : -109);
                }
            }
        }
        arr_25 [14] [i_2] = var_7;
    }
    #pragma endscop
}
