/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [15] [i_1] [i_4] [i_3] [i_4] = (((max((arr_8 [i_0] [i_1] [i_1] [i_3] [i_4] [i_4]), (((-(arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) << ((((min(var_13, ((((arr_0 [i_0]) >= 120)))))) + 157))));
                                arr_15 [i_4] [i_4] [i_1] [i_4] [i_4] = 19200;
                                var_18 = (((586987386 + var_1) & 19200));
                            }
                        }
                    }
                    var_19 = ((var_9 ? (((!(arr_5 [i_2 - 1] [i_1])))) : (arr_12 [i_0] [i_1] [i_2] [i_0] [4])));
                    var_20 = (min(var_20, ((((((((((arr_12 [i_0] [i_0] [i_1] [0] [i_0]) ? (arr_7 [i_0] [1] [i_0]) : 1))) ? -72 : ((138506475 ? var_12 : -3074))))) ? (-var_12 / var_8) : (min((min(123, 72057594037927935)), ((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2]) ? -19200 : (arr_12 [i_0] [i_1] [1] [i_2 - 2] [i_1])))))))))));
                    var_21 = ((!(((((3325892854295636390 ? var_10 : 1))) && (((var_8 * (arr_6 [i_1] [i_1]))))))));
                    var_22 = (arr_2 [i_2]);
                }
            }
        }
    }
    var_23 = (((min((var_8 % var_8), (var_16 + var_0)))) ? ((((1 - 1) ^ (var_8 & var_10)))) : var_12);
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            {
                var_24 &= (max((min(((((arr_0 [i_5]) ? (arr_11 [i_5] [16] [i_5] [16] [i_6] [12]) : (arr_10 [i_6] [i_6] [i_5 - 4] [i_6 + 2] [i_5 - 4] [i_5])))), (arr_3 [i_5] [i_6 - 1]))), (arr_16 [i_5] [i_6 + 3])));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_25 = (((arr_2 [11]) && (((-((min(var_1, (arr_24 [i_5])))))))));
                                arr_28 [i_9 + 2] [i_8] [i_5] [i_8] [i_5] [i_6 + 4] [i_5] = (arr_27 [i_5 + 4] [i_6 + 1] [i_5] [i_9 - 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (var_14 != var_0);

    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        arr_32 [1] [i_10] = (min(((var_0 / ((((arr_30 [1]) ? (arr_29 [i_10]) : 19200))))), var_10));
        arr_33 [i_10] = (arr_29 [i_10]);
    }
    #pragma endscop
}
