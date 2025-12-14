/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((max((((var_9 >= var_9) ? (max(-1, 1)) : ((max(var_3, var_7))))), ((var_9 ? ((1 ? var_0 : var_7)) : var_9)))))));
    var_11 = (((!3970435480) || var_6));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [5] = (min(var_5, (max(82, var_5))));
        arr_3 [i_0] = var_3;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    {
                        var_12 &= ((!var_5) ? var_0 : (((max((max(var_1, 1)), var_5)))));
                        arr_10 [i_3] = -var_9;

                        for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
                        {
                            arr_13 [i_4] [i_0] [i_2] [i_3] [i_4] [i_4] = var_6;
                            var_13 += (max(((((arr_11 [i_1 + 4] [i_3 + 3] [i_3 + 3] [i_4 - 1]) == var_4))), -var_0));
                            var_14 = (min(var_14, (((((((arr_9 [i_0] [i_1] [i_2]) ? var_6 : (~324531815)))) ? ((min(1, var_1))) : (max(var_8, ((max(var_2, var_1))))))))));
                            arr_14 [i_4] [i_1] [1] [i_1] [i_4] [i_4] = (((((max(1, 1)))) || (arr_6 [i_3] [7])));
                            arr_15 [i_0] [i_4] [i_4] [i_4] = 1;
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_15 = ((var_2 ? (((var_7 ? var_3 : var_5))) : -3970435484));
                            var_16 = (min(var_16, (((var_7 * (((840877839 >= (arr_18 [0])))))))));
                            arr_20 [i_0] [1] [1] [i_0] = 1;
                            arr_21 [i_0] [i_1 - 1] [i_2] [i_1 - 1] [0] [i_3 + 3] = var_1;
                        }
                        for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_17 = (arr_11 [i_2] [i_2] [10] [1]);
                            arr_24 [i_0] [i_1] [2] [i_2] [i_2] [i_3] [i_6] = (max((((-(arr_12 [i_0])))), var_2));
                        }
                        for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            var_18 += ((var_6 ? var_9 : ((((1073741823 ? 189 : -391))))));
                            var_19 = (max(var_19, ((min(324531819, (arr_12 [i_0]))))));
                            var_20 = (--448273262);
                            var_21 = (!var_1);
                        }
                        var_22 = (((((((arr_22 [i_3] [7] [i_0] [i_0] [i_0]) ? var_9 : var_2))) <= ((2122901544 ? (arr_18 [i_3]) : 2172065759)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
