/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((min(((min(var_18, var_4))), ((var_0 ? var_9 : var_14)))) * (var_14 % -var_14)));
    var_20 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_21 = ((arr_4 [i_1] [i_2 - 1] [i_1] [i_2 - 1]) - (((((-(arr_6 [i_0] [2] [11] [8])))) + (max((arr_0 [i_3]), (arr_5 [i_0] [i_0] [i_0] [i_0]))))));
                                var_22 = (arr_0 [i_2]);
                                var_23 ^= arr_7 [i_0] [22];
                            }
                        }
                    }
                    var_24 = (arr_2 [i_0] [19] [i_0]);
                    var_25 = (arr_3 [i_1]);
                }
                var_26 = (max(((((((arr_11 [16] [i_1] [16] [i_1] [i_0] [i_0] [i_0]) + 0))) ? 2968 : (arr_10 [i_0] [10] [i_1 + 1] [i_1] [i_1]))), (((((100 ? 37 : 18446744073709551615))) ? 184 : ((max(37, 62568)))))));
                var_27 = (min(var_27, (((max(-var_14, (((!(arr_4 [i_0] [i_0] [i_1 - 1] [i_1])))))) == (arr_6 [19] [i_0] [i_0] [19])))));
                var_28 = (~var_9);
            }
        }
    }
    #pragma endscop
}
