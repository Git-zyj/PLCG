/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = ((max((!var_2), ((var_9 / (arr_1 [i_0]))))));
                arr_6 [i_1] = var_1;
                arr_7 [i_0] [18] [i_0] = ((((min((1 <= 378750674), var_11))) ? -649051154 : (min(4861134143337219518, -9223372036854775807))));
                var_21 = 0;
            }
        }
    }
    var_22 = (max(var_22, var_13));

    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        var_23 |= ((((52899 || (arr_9 [i_2] [i_2]))) && (((arr_9 [i_2] [i_3]) && (arr_9 [1] [i_3])))));
                        arr_17 [i_2] [i_3] [i_4] [i_5] = (~var_0);
                    }
                }
            }
        }
        arr_18 [i_2] = (((min(var_12, (arr_14 [i_2] [i_2]))) / ((((arr_14 [i_2] [i_2]) + var_3)))));
        arr_19 [i_2] = ((((max(-0, (((-118 < (arr_9 [i_2] [i_2]))))))) <= ((-(arr_15 [i_2] [19] [i_2])))));
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] = ((-(((((var_16 ? var_11 : -126))) ? (arr_15 [i_6] [i_6] [i_6]) : (arr_14 [i_6] [i_6])))));
        /* LoopNest 3 */
        for (int i_7 = 3; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            var_24 = (max(var_24, ((((((((~(arr_28 [i_6])))) ? 1 : ((max(-125, 65535))))) <= ((max(118, 1))))))));
                            var_25 |= (((-(((arr_12 [i_6] [i_9]) ^ 108)))));
                        }
                        arr_36 [i_7] = -7359648276285917014;
                    }
                }
            }
        }
    }
    #pragma endscop
}
