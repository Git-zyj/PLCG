/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, ((((min((arr_5 [i_3] [i_3 + 1] [i_4 - 1] [i_4 - 1]), (arr_5 [i_1] [i_3 - 1] [i_4 + 1] [i_1]))) ? (arr_5 [i_1] [i_3 - 2] [i_4 - 1] [i_3 - 2]) : ((-(arr_5 [i_2] [i_3 - 2] [i_4 + 1] [i_4]))))))));
                                var_16 += (((min((arr_0 [i_4 + 1]), (arr_0 [i_4 + 1]))) < (min((((arr_10 [10]) % (arr_0 [i_3 - 2]))), (((arr_2 [i_1] [i_1] [i_3]) ? (arr_6 [i_1] [i_2] [i_3]) : (arr_3 [i_3])))))));
                                var_17 = (min(var_17, (max(((-(max((arr_4 [i_3] [i_1] [i_4 - 1]), (arr_2 [i_1] [i_2] [i_3]))))), ((((arr_9 [i_3 - 1] [10] [i_3] [i_3 - 2] [i_3]) | ((max((arr_6 [i_1] [i_2] [i_4 - 1]), (arr_9 [i_0] [i_0] [i_0] [i_3 - 2] [i_3])))))))))));
                            }
                        }
                    }
                    var_18 = (min(var_18, ((((arr_8 [6] [2] [6]) | ((~(arr_0 [i_0]))))))));
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_19 = ((((-(arr_7 [1] [i_1] [i_0] [i_5] [i_5] [i_5]))) % (((-2147483630 + (((arr_5 [2] [i_1] [i_1] [i_0]) ? (arr_5 [i_0] [i_1] [i_5] [i_5]) : (arr_6 [i_5] [i_0] [i_0]))))))));
                    var_20 = ((-((((arr_2 [i_0] [1] [i_0]) < (arr_5 [i_0] [i_1] [i_1] [i_1]))))));
                }
                var_21 = arr_4 [i_0] [i_0] [i_0];
            }
        }
    }
    var_22 = (!var_4);
    #pragma endscop
}
