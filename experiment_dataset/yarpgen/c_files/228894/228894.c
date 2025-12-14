/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((-((63460 ? 15766384327382967655 : 2680359746326583961)))), ((((var_9 - var_5) / 46)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = (!var_3);
        var_14 = (max(var_14, (~var_0)));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        arr_9 [i_1] [i_1 - 2] = ((min((min(var_2, var_3)), (arr_8 [i_1] [i_1]))));
        arr_10 [i_1] = ((((max(((var_11 ? -91 : (arr_7 [i_1] [i_1]))), ((((arr_5 [i_1] [4]) | var_2)))))) / (min(2680359746326583930, ((((arr_6 [i_1] [i_1 - 1]) * var_6)))))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_15 = ((((-((~(arr_12 [i_2]))))) + ((((15766384327382967655 % var_7) && ((((arr_11 [i_2] [i_2]) | 16382))))))));
        var_16 = (min(var_16, (7049 % -18)));
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {

                for (int i_5 = 2; i_5 < 19;i_5 += 1)
                {
                    arr_21 [i_3] [i_3] [i_3] = ((-((max(var_10, (arr_20 [i_3 - 1] [i_5 + 2]))))));
                    arr_22 [9] = (((((~(arr_14 [i_5 + 2])))) ? ((var_10 * (!var_7))) : (((arr_14 [i_3 + 1]) * (arr_14 [i_3 - 2])))));
                    var_17 = ((((-(!var_11))) + (!var_12)));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_18 = ((+(((3530540246 && -18) % (min(2680359746326583945, (arr_27 [17] [i_6] [i_5 + 1] [i_4] [i_6] [i_3])))))));
                                arr_30 [i_3] [i_4] [i_6] [i_6] [i_4] [i_4] [i_5 + 1] = (min((max((arr_27 [i_7] [i_6] [i_6] [i_5 - 1] [i_6] [i_3 - 1]), (2 || 65535))), (255 % 17)));
                            }
                        }
                    }
                }
                arr_31 [i_3] = var_10;
                arr_32 [i_4] = ((var_2 - (min(var_9, (var_4 / var_9)))));
                arr_33 [i_3 + 1] [2] [i_4] = var_1;
            }
        }
    }
    #pragma endscop
}
