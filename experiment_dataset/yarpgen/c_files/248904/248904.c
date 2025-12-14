/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            {
                var_11 = (min((max((arr_5 [i_1]), var_2)), (((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_5 [i_1])))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 6;i_2 += 1)
                {
                    arr_8 [i_1] [i_1] [i_1] = 22108;
                    arr_9 [i_1] [i_1] [i_2] = (~(arr_7 [i_1 - 1] [i_2 - 1] [i_2 + 3]));
                }
                var_12 -= ((~((43428 ? (arr_6 [i_0] [i_1 + 2] [i_0] [i_1]) : -1))));

                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 7;i_5 += 1)
                        {
                            {
                                var_13 = (max(var_13, ((((arr_2 [i_4] [i_1 - 2]) / (((18446744073709551611 || (arr_12 [i_1 - 1] [i_5 + 2] [i_5 - 2] [i_5 + 2] [i_1 - 1])))))))));
                                var_14 = (max((((arr_13 [i_0] [i_1] [i_3] [i_1]) ? 22096 : 3032391637880773987)), ((((max((arr_15 [i_1]), var_6))) ? var_9 : ((max(-4781938893970637546, var_8)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 8;i_7 += 1)
                        {
                            {
                                var_15 = (max(var_15, ((((min(15414352435828777632, 3747228325)) | (((max(1, (arr_20 [i_6] [8] [i_6] [i_3] [8] [i_1 + 3] [i_6]))))))))));
                                var_16 += (min((max((-127 - 1), 122)), (!3032391637880773988)));
                                var_17 = (((!-1727701491) >= var_4));
                            }
                        }
                    }
                    arr_22 [i_1] [i_1] = ((!((min(var_0, (arr_4 [0] [i_1 + 1]))))));
                    var_18 ^= (min(((((max(2147483635, (arr_10 [i_0])))) & (arr_4 [i_1 + 2] [i_1 - 2]))), (!43439)));
                }
            }
        }
    }
    var_19 = var_8;
    var_20 = (var_4 | var_2);
    #pragma endscop
}
