/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_4] [i_2] [i_3] [10] [i_3] [i_1] = ((((((arr_7 [i_0] [i_2]) ? 16368 : (arr_12 [i_0] [i_0] [i_1 + 2] [i_2] [i_3] [i_0] [i_4])))) ? ((((arr_12 [5] [i_0] [14] [i_3] [i_0] [8] [i_2]) > (arr_12 [i_0] [15] [i_0] [i_3] [15] [i_1 - 1] [i_1 + 2])))) : ((min((arr_12 [i_0] [i_1 + 3] [i_2] [7] [i_4] [i_4] [i_2]), (arr_6 [i_1] [i_1 + 3] [i_2]))))));
                                var_12 = (min(var_12, ((max((min((arr_9 [i_1 - 1] [i_1 + 2] [i_1 + 3]), (arr_9 [i_1 + 1] [i_1 + 1] [i_1 - 1]))), ((-21040 ? (arr_9 [i_1 + 2] [i_1 - 1] [i_1 + 2]) : 2047)))))));
                                arr_15 [i_0] [i_2] = ((((((arr_7 [i_0] [i_4]) * 0)))) ? (min(((((arr_3 [i_4]) + (arr_7 [i_0] [i_4])))), (max((arr_5 [i_0] [i_1] [i_2]), -913192294210153238)))) : (((421578969463160830 ? (arr_3 [i_1 + 1]) : (arr_9 [i_2] [i_3] [i_4])))));
                            }
                        }
                    }
                    var_13 += ((((((arr_5 [i_1] [i_1] [i_1]) > (arr_12 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1] [i_1 + 3])))) << (((((arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [12] [i_1] [i_1] [i_1 + 3]) ? (arr_12 [i_1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1] [i_1 + 2]) : (arr_12 [6] [6] [i_0] [8] [i_0] [i_0] [i_1 - 1]))) - 5289))));
                    var_14 = (max(var_14, (((((max(((max(-894093623, -21035))), (4294967295 / 7943)))) ? (!913192294210153238) : ((~(arr_8 [i_0] [i_0]))))))));
                    arr_16 [i_0] [11] [i_2] = ((((((arr_3 [i_2]) ? -21040 : (((!(arr_13 [i_0] [i_0] [8] [i_1] [8]))))))) <= (arr_2 [i_1 + 3] [i_1 + 1])));
                }
            }
        }
    }
    var_15 = -var_10;
    #pragma endscop
}
