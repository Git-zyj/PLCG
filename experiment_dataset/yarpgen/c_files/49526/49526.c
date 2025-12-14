/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] = var_3;
                var_15 = (max(var_15, var_11));

                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    var_16 = (var_2 ? var_3 : (((((1333242329 ? (arr_0 [i_0 - 1]) : var_7))) ? 0 : var_8)));
                    arr_9 [i_2] [i_0] [i_0 - 3] [i_0] = ((169877144155837022 == ((((((var_7 ? var_9 : var_12)) <= (max(var_4, 17462122972939329953))))))));
                    arr_10 [i_2] = ((-5256473305680013289 ? (((251 - var_3) / (var_3 >= var_3))) : var_4));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_18 [3] [i_2] [i_2 + 1] [i_2] [i_2] [4] = ((137 >> (7505301128542732401 - 7505301128542732396)));
                                arr_19 [i_2] [i_1] = (arr_17 [i_4] [i_3] [i_2 + 1] [i_1] [i_0 - 3]);
                                var_17 |= (238 < -2097152);
                                arr_20 [i_2] [18] [i_2 - 1] [i_2 - 1] [i_2] [i_2 + 1] [i_2] = ((11 ? 4294967287 : 20));
                            }
                        }
                    }
                    arr_21 [i_2] [i_2] = (~var_4);
                }
                arr_22 [i_0] [i_0] = (max(((-(arr_3 [i_0 - 2] [i_0 - 1] [i_0 - 1]))), (arr_3 [i_0 - 1] [i_0 - 3] [i_0 + 1])));
                arr_23 [i_1] = ((max(563808172396827364, (var_1 - 4294967290))));
            }
        }
    }
    #pragma endscop
}
