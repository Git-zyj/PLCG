/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (min(var_10, (min((~var_9), var_18))));
    var_21 = var_19;
    var_22 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    arr_8 [6] [6] [i_2 - 2] [i_0] = (max(var_8, var_0));
                    arr_9 [i_0 - 1] [i_1] [i_2 - 2] [i_0] = var_7;
                    var_23 = (min(var_23, ((max((1 - -68), (min(var_6, (arr_2 [i_2]))))))));
                    var_24 = ((var_5 - ((~((min(1, 1)))))));
                }
                for (int i_3 = 2; i_3 < 11;i_3 += 1) /* same iter space */
                {
                    var_25 = (max(var_25, ((max((((var_12 ? var_9 : 1))), -1)))));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_18 [i_0] [i_0] [i_3 + 1] [i_4] [i_3] = (max(((+((25616 ? (arr_5 [i_0] [i_0] [i_0] [i_4]) : (arr_1 [i_0] [i_0]))))), (arr_16 [i_0] [i_0] [i_0] [i_0])));
                        arr_19 [i_0] [i_0] [i_0 - 1] [i_0 - 1] = ((var_8 / (~68)));
                        arr_20 [i_0] [1] [i_3] [10] [i_4] [i_0] = ((~(arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                        var_26 = (max(var_26, (((!((((arr_12 [1] [i_3] [i_3] [i_0]) ^ var_5))))))));
                    }
                    var_27 = ((!(arr_0 [i_0])));
                }
                /* vectorizable */
                for (int i_5 = 2; i_5 < 11;i_5 += 1) /* same iter space */
                {
                    var_28 = 0;
                    var_29 = ((arr_17 [i_0 - 1] [i_0] [i_0 + 1]) ^ ((~(arr_0 [i_0]))));
                }
                var_30 = (min((arr_21 [i_0] [i_1] [i_0] [i_0]), (((255 - ((-(arr_6 [i_0] [i_0] [11]))))))));
            }
        }
    }
    #pragma endscop
}
