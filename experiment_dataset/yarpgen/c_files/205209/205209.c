/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_13, (var_9 > var_1)));
    var_20 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_1] = (arr_5 [i_0] [20]);
                    arr_10 [i_0] [i_1] = (max(4294967295, -1));
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
                {
                    arr_15 [i_0] [i_0] [i_1] [i_3] = (arr_2 [i_0]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_21 [i_5] [i_4] [i_3] [i_1] [i_0] = (min((max(0, 17592186044415)), 8));
                                arr_22 [13] [15] [i_5] = (!1);
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        arr_27 [i_3] = 7446074204950134356;
                        arr_28 [6] [17] [i_3] [i_1] &= (arr_0 [14]);
                        arr_29 [i_0] [i_1] [i_1] [i_3] [i_6] = ((arr_0 [i_3]) ^ (arr_6 [i_6] [i_3] [i_1] [i_0]));
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                    {
                        arr_32 [i_7] = -106;
                        arr_33 [i_0] [i_1] [i_7] [i_1] [i_3] [7] = -8;
                    }
                    for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                    {
                        arr_37 [i_0] = (arr_24 [i_8] [19] [19] [19]);
                        arr_38 [i_0] [1] [i_3] [1] [15] [i_8] = (((arr_6 [i_8] [i_3] [0] [i_0]) < (min((arr_3 [i_8] [i_8]), (arr_25 [i_8])))));
                    }
                    arr_39 [i_0] [i_1] [9] [9] = 127;
                }
                arr_40 [i_1] = -8;
            }
        }
    }
    #pragma endscop
}
