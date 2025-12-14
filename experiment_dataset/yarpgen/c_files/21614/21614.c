/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = (((25 % ((var_4 ? (arr_0 [i_1]) : (arr_0 [i_1]))))));
                arr_5 [i_1] [i_1] [i_1] = ((((1 % (arr_0 [i_0])))) || (((((((arr_2 [i_1] [i_1]) + var_2))) ? var_10 : (arr_2 [i_1] [i_1])))));
            }
        }
    }
    var_11 = (max(((min((!47), 127))), var_3));

    for (int i_2 = 2; i_2 < 21;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = ((var_1 ? (70368207306752 | 45) : 25));
        arr_9 [i_2] [i_2] &= (arr_6 [i_2]);
    }
    for (int i_3 = 2; i_3 < 21;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] [i_3] = var_8;
        arr_15 [i_3] [i_3] |= (arr_6 [i_3 - 1]);
        arr_16 [i_3] = 65535;
        arr_17 [i_3] [i_3] = (arr_13 [i_3 - 2]);
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 20;i_6 += 1)
                {
                    {
                        arr_27 [i_6] [i_3] [i_4] [i_3] [i_3] = ((((((((arr_22 [i_3] [i_3] [i_5] [i_3]) ? var_1 : var_4)) % (arr_11 [i_4])))) && ((((arr_25 [i_3 + 1]) % 203)))));
                        arr_28 [i_5 - 1] [i_4] [i_6 + 2] [i_6 + 2] [i_5 - 1] [i_4] = var_6;
                        arr_29 [i_3] [i_3] [i_3] [i_3] &= (((((~(arr_22 [i_6 - 2] [i_6] [i_6] [i_6 - 2])))) ? 2047 : ((2643184603 ? -39 : 14755079777361486157))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
