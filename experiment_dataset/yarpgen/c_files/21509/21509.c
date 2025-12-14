/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((!83) - (max((-2083581371 ^ 1), ((var_3 ? var_1 : var_1))))));
    var_12 = (min(var_12, var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (arr_1 [i_0]);

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, ((((((var_5 ? (((!(arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))) : 9658))) ? 1 : -1)))));
                                var_14 = (max(var_14, (!34268)));
                                var_15 = (min(var_15, ((((((-(arr_11 [i_0])))) ? (arr_4 [i_2] [4] [i_2]) : (((max(var_1, 1)))))))));
                                var_16 = (max(var_16, (((-((((arr_12 [i_0] [i_0] [1] [i_0] [i_0]) < var_2))))))));
                                var_17 = (((max((arr_1 [i_1]), (arr_1 [i_3])))) ? (max((arr_1 [i_0]), (arr_1 [i_0]))) : 1056964608);
                            }
                        }
                    }
                    var_18 = (max(var_18, ((((arr_12 [1] [i_1] [i_1] [1] [i_2]) * (((arr_7 [i_0] [i_1] [i_2] [i_1]) - (arr_7 [i_0] [i_0] [i_1] [i_2]))))))));
                    arr_15 [i_0] [i_1] [8] [i_1] &= (min(0, 16348182018563541416));
                    arr_16 [i_2] [i_1] [i_0] = var_7;
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_19 = (max((min(179, 18446744073709551607)), (((var_8 != (arr_2 [i_0] [i_1] [i_5]))))));
                            var_20 = (max(var_20, (((+(((max((arr_2 [i_6] [1] [i_5]), (arr_0 [i_0] [i_0]))))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
