/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 15;i_4 += 1)
                            {
                                arr_11 [i_0] = ((((!(arr_4 [i_4 - 2] [i_0 + 1] [i_1 - 1]))) || (arr_10 [i_0 + 1] [i_0] [i_0 + 1] [i_1 + 1] [i_4 + 1] [i_4])));
                                arr_12 [8] [i_2] [i_2] [i_2] [i_0] = ((0 ? 22 : 4294967273));
                                var_19 = ((((4294967295 >= (arr_7 [i_4 + 1] [i_4 + 1] [i_4 - 2] [i_4 + 1] [i_4 - 2]))) ? ((((!(arr_5 [i_1 - 1]))))) : ((0 ? 22 : 4294967266))));
                                var_20 = ((~((var_15 ? (arr_5 [i_1 - 1]) : var_17))));
                            }
                            var_21 = (max(4294967294, 25));
                        }
                    }
                }
                var_22 = ((((max((arr_2 [i_0 + 1] [i_0 - 1]), ((~(arr_2 [i_0] [i_1])))))) ? ((max((!70), (arr_7 [i_0 - 1] [13] [13] [i_1 - 1] [i_0])))) : (arr_6 [i_1 - 1] [4] [i_0] [4])));
            }
        }
    }
    var_23 = (max(var_23, ((max(4294967286, 4294967289)))));
    var_24 = var_9;
    var_25 = (max(var_25, (((-(((((16 ? 92 : 0))) ? 428335469453755736 : var_16)))))));
    #pragma endscop
}
