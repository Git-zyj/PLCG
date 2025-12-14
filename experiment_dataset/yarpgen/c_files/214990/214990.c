/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((max(var_9, var_3)), (((!(~35865))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_1] = -1;
                    arr_9 [i_1] = ((+(((arr_3 [i_0] [i_1]) ? 64 : (arr_3 [i_0] [i_1])))));
                }
            }
        }
        var_11 = (min(var_11, ((32767 ? (--2147483643) : 1))));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = (((((-(arr_3 [i_3] [i_3])))) + var_4));
        var_12 = (max(var_12, (((+((+(((-2147483647 - 1) + 2147483584)))))))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                {
                    var_13 = var_1;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 13;i_7 += 1)
                        {
                            {
                                arr_26 [i_5] = (0 || 32768);
                                var_14 = (max(var_14, (((~((1 ? (arr_16 [i_3] [i_5 - 1]) : var_5)))))));
                                var_15 |= -2531104647154450716;
                            }
                        }
                    }
                    arr_27 [i_5] [i_5] = ((((max(1, 192))) >> (((min((~var_2), (~var_4))) + 1411621474309980837))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
    {
        var_16 *= ((var_6 ? 120 : 2147483584));
        arr_31 [i_8] [i_8] = ((1 ? (~0) : ((~(arr_7 [i_8])))));
        var_17 |= (0 & 1);
        var_18 -= 201326592;

        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            var_19 -= 1;
            var_20 = 1;
            var_21 = ((!(((~(-2147483647 - 1))))));
            arr_34 [11] [i_9] [i_9] = var_5;
        }
    }
    #pragma endscop
}
