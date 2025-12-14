/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    var_13 = (~44);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 -= ((var_0 ? (((~var_11) ? var_5 : (((arr_0 [i_2] [i_1]) ? 192 : (arr_6 [i_0] [0] [i_2]))))) : (~var_7)));
                    arr_7 [i_1 + 1] [i_1] = var_2;
                    arr_8 [i_0] [i_1] [i_2 - 1] = var_0;
                    arr_9 [i_1] = min(((((arr_2 [i_1 - 1] [i_1 + 1]) < (arr_0 [i_1 - 1] [i_1 + 1])))), (max(((max(var_9, var_4))), (max(5548093385880640154, var_6)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_15 = ((((min(var_9, ((var_11 ? -5548093385880640161 : var_10))))) ? (min(var_10, (((var_8 == (arr_3 [i_1] [11] [i_1])))))) : (var_7 <= var_0)));
                                arr_16 [i_1] [i_1] [i_2] [i_3] [i_1] [i_1] = var_11;
                                arr_17 [i_0] [i_1] [i_1] [10] [i_4] [i_0] = (((((~((1 | (arr_10 [i_0] [i_1] [i_3] [i_4 + 1])))))) ? ((var_2 ? -906060874089504848 : 5548093385880640155)) : (max(((var_3 ? (arr_2 [i_1 + 1] [i_1 + 1]) : var_10)), (-11 && var_8)))));
                                var_16 = (min(var_16, (~var_1)));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_17 = ((-8951285449138550290 ? (((~(arr_19 [i_5] [i_5])))) : (min(5548093385880640158, (arr_19 [i_5] [i_5])))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_18 = var_3;
                                var_19 = -5548093385880640152;
                            }
                        }
                    }
                    var_20 = ((~((2147483647 ? (arr_29 [i_6] [i_6] [i_6] [i_6]) : (arr_29 [i_6] [i_5] [i_7] [i_7])))));
                    var_21 = (max(var_21, (((~(((((-40 ? var_2 : (arr_29 [i_7] [i_6] [i_7] [i_5])))) ? ((65521 ? (arr_25 [i_7]) : -1256497062)) : ((max(877983933, 1))))))))));
                    arr_31 [i_5] [i_6] [i_5] [i_7] = ((((max(607435570, (min(4978794213191048331, -103))))) ? (((((arr_21 [i_5]) <= (37 && 379105027))))) : (((((var_11 ? (arr_18 [i_5]) : var_4))) ? (~var_10) : (arr_22 [i_5] [0] [i_7] [0])))));
                    arr_32 [i_5] [i_6] [i_5] = ((((((123 | var_11) ? (~-5548093385880640163) : (~var_4)))) ? ((((arr_25 [i_6]) / (~var_2)))) : (min(((144115188075331584 ? var_2 : (arr_28 [i_5] [i_6] [i_7] [i_6] [i_6] [i_7]))), ((((arr_24 [i_7] [i_6] [i_6] [i_5]) ? 1 : 21616)))))));
                }
            }
        }
        var_22 ^= (arr_24 [i_5] [i_5] [i_5] [i_5]);
    }
    #pragma endscop
}
