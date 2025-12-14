/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_15 = (((((arr_7 [i_2] [i_2] [i_2] [i_3 + 1] [i_3]) ? (arr_5 [i_1] [i_1] [i_3 + 2] [i_3 + 1]) : (arr_7 [i_2] [i_3 + 1] [1] [i_3 + 1] [i_3]))) - ((-(min(195, -1341999695))))));
                            var_16 = (((arr_0 [i_2]) % (((((max(43876, (arr_3 [i_0] [i_1] [i_3])))) <= (max(16576143071865873513, var_10)))))));
                            var_17 = 17613368444254803114;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            arr_14 [i_5] = (((221 & 216172782113783808) != ((((536608768 >= (arr_7 [i_0 - 3] [i_0 - 1] [i_1] [i_4 - 1] [i_5])))))));
                            var_18 += (~45252);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 19;i_7 += 1)
                    {
                        {
                            var_19 = (((((max((arr_7 [i_1] [17] [i_7] [i_7 + 3] [i_7 + 1]), var_2)))) != (arr_17 [i_7] [i_0])));
                            arr_21 [i_0] [i_0] [i_0] [i_0] = (arr_10 [i_1] [i_1] [i_6] [7]);
                            var_20 = (max((arr_19 [i_0] [i_0 + 2] [i_0 + 2]), (((30811 ? 16128 : 228)))));
                            arr_22 [i_7] [i_6] [i_1] [i_1] [i_0 + 2] = (((!var_12) * (((!(arr_12 [i_0 + 2]))))));
                        }
                    }
                }
                var_21 = ((12603 ^ (arr_0 [i_1])));
            }
        }
    }
    var_22 -= (!var_2);
    var_23 = (-1341999714 - var_8);
    var_24 = ((((min((30720 + 18446744073172942857), (min(226, var_7))))) ? 1641745111 : 24936));
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 6;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            {
                                var_25 = ((min((((arr_8 [i_8] [i_9] [i_11] [i_12]) - 18446744073709520905)), (arr_9 [12] [i_9] [i_10] [i_12]))) + ((((var_6 - (arr_33 [i_9] [i_9]))))));
                                arr_35 [i_11] [i_12] [i_9] [i_11] [i_10] [i_9] [i_11] = ((arr_26 [i_8] [i_8] [i_8]) ? -1341999725 : 28);
                            }
                        }
                    }
                    var_26 = 32768;
                }
            }
        }
    }
    #pragma endscop
}
