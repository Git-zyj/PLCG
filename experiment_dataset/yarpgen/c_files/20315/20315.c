/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (((((3883691312148091766 ? (arr_1 [i_0 - 1]) : (arr_2 [i_0 + 1] [i_0 + 1])))) ? (arr_2 [i_0 + 2] [i_0]) : (!var_11)));
        arr_4 [i_0 + 1] [i_0] = ((var_9 ? ((53 ? (44 & var_4) : -93)) : 2));
        var_13 = var_1;
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_14 = (max(2, ((-((((-2147483647 - 1) > var_6)))))));

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                arr_11 [i_2] [i_2] = (max(((((min(var_11, var_4)) != (arr_9 [i_1] [i_1] [i_1 + 4])))), ((1 ? (((arr_1 [i_3]) & -14)) : 127))));
                var_15 = (max((max(5056406058101583072, ((var_10 ? -27183 : 4908535748775693886)))), -1));
                var_16 = ((((((arr_0 [i_1]) ? var_11 : var_6))) && ((min(((var_0 ? 112 : var_10)), ((((arr_1 [i_1]) >= var_10))))))));
            }
            var_17 = ((((var_11 ? (arr_9 [i_1 + 1] [i_1 + 1] [i_1 - 1]) : (arr_9 [i_1 - 1] [i_1 + 3] [i_1 + 1])))) ? (arr_6 [i_1 + 2] [6]) : (arr_6 [i_1 + 4] [i_1]));
        }
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        arr_14 [i_4] [i_4] = ((-(min((arr_12 [i_4]), (arr_12 [i_4])))));
        var_18 = ((((((arr_13 [i_4] [i_4]) ? (arr_13 [i_4] [i_4]) : 1))) ? var_7 : (min(-var_11, (arr_13 [i_4] [i_4])))));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 15;i_6 += 1)
            {
                {
                    var_19 = ((30068 ? ((1 + (min(-2, (arr_15 [i_4] [i_4]))))) : 32));
                    arr_20 [i_4] [i_6 + 2] = 2;
                    var_20 = ((((min((((var_8 + 9223372036854775807) >> (1292760998 - 1292760983))), (arr_17 [i_6 + 1] [i_5 + 3] [i_4])))) ? ((3 % (arr_19 [i_4] [i_4] [i_6 + 3] [i_6]))) : ((((((var_0 ? 85 : (arr_17 [i_4] [i_5] [i_4]))) == ((var_9 ? 1 : (arr_15 [16] [i_4])))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_21 = 7271814020900995621;
                                arr_25 [i_7] [i_5 + 3] [i_4] [i_7 - 1] = (44 > var_1);
                                var_22 = ((42 ? 4294967295 : (((123 ? (-2147483647 - 1) : 42)))));
                                var_23 = ((((((((-(arr_22 [7] [i_5] [i_5 + 2] [i_4])))) ? (!var_9) : ((29404 ? (arr_15 [i_4] [i_4]) : (arr_24 [i_4] [i_6])))))) ? (arr_19 [i_4] [i_5 + 3] [i_4] [i_7 - 1]) : ((((arr_23 [i_8 - 2] [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8] [i_8 + 2] [i_8]) && ((max(var_1, 1))))))));
                            }
                        }
                    }
                    var_24 = -7203;
                }
            }
        }
        var_25 = arr_21 [0] [i_4] [0] [i_4];
    }
    var_26 = var_5;
    var_27 = (var_11 ? var_8 : (((var_2 - ((1 ? var_0 : 123))))));
    #pragma endscop
}
