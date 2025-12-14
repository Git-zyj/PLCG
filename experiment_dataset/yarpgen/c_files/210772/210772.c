/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 0;

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_20 *= ((~((~((min((arr_1 [i_0] [i_0]), (arr_2 [10] [i_0 - 1]))))))));
        var_21 = (min(var_21, ((((((min(-64, var_18))) ? (((2 && (arr_1 [i_0] [i_0])))) : ((((arr_2 [i_0] [i_0]) != (-127 - 1))))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_22 = (min(var_22, (~2801105613)));
                            var_23 *= (((min((!-8), ((-23 ? (arr_0 [i_1]) : (arr_13 [i_0] [i_0] [i_2] [i_0 + 2] [i_0 + 2] [i_0] [14])))))) ? (((arr_0 [i_0]) ? ((var_16 ? 23 : 2912975414)) : -0)) : (arr_11 [i_4] [i_1] [i_2] [i_2]));
                        }
                        for (int i_5 = 1; i_5 < 24;i_5 += 1)
                        {
                            var_24 = (max(var_24, ((-(arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_1] [i_0 - 1])))));
                            var_25 = (((arr_15 [i_0 - 2] [i_1] [i_2 - 2] [i_3] [17] [i_3]) || (arr_14 [i_2 - 2] [i_3] [i_5] [16] [i_5] [i_5 + 1])));
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            arr_18 [i_0] [i_1] [i_3] [i_3] = (((((((-(arr_3 [i_0] [i_0])))) == (min(1381991882, 0)))) ? (((((!(arr_3 [i_6] [i_2 - 3])))))) : (min((((var_7 % (arr_3 [i_3] [i_1])))), (arr_13 [i_0 - 2] [i_2] [i_3] [i_3] [i_6] [i_2] [i_6])))));
                            arr_19 [i_0] [i_1] [i_1] [i_2 - 3] [i_1] [i_3] [14] = ((-((var_4 ? (arr_17 [17] [17] [i_2 - 4] [i_2] [i_2 - 4] [i_6] [i_6]) : var_0))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_26 = 1878088896;
                            arr_22 [i_3] [23] [i_3] = ((-(arr_2 [i_0] [i_0])));
                            var_27 += (--112);
                            var_28 = (min(var_28, var_9));
                        }
                        var_29 = -9;
                        var_30 ^= ((((((((arr_20 [i_1] [i_2]) - var_16))) ? ((23 & (arr_5 [i_0 - 1] [i_0 - 3] [i_0 - 1] [i_0]))) : (((var_12 != (arr_13 [i_3] [i_3] [i_2] [i_2] [i_2] [i_0 + 2] [i_0]))))))) ? (arr_1 [0] [0]) : (min((max(1381991867, -16)), (~58))));
                        arr_23 [i_3] = -125;
                    }
                }
            }
        }
    }
    var_31 = 0;
    #pragma endscop
}
