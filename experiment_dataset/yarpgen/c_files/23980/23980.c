/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_13 & (~6646484286622022446)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (((max(((342582184 ? var_14 : (arr_0 [i_2]))), ((max(6646484286622022461, -70))))) >= (max(234, 3475417595591426824))));
                                var_18 = ((!((max(((((arr_10 [i_4] [i_3] [i_2] [i_1] [i_0]) > (arr_5 [i_1] [i_1] [i_1])))), (~var_15))))));
                                var_19 = (((-(arr_3 [i_4]))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] = ((-237 ? ((~(arr_4 [i_0] [i_1] [i_2]))) : (((arr_4 [i_0] [i_1] [i_2]) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_1] [i_2])))));
                    var_20 = (min(var_20, ((min((((49057998 > (((min(var_15, (arr_2 [i_2] [i_1])))))))), (((((arr_7 [i_0] [i_0] [i_1] [i_2]) & var_10)) & ((((!(arr_12 [i_2] [i_2] [i_1] [i_1] [i_0] [i_0]))))))))))));
                    var_21 = ((!((((arr_10 [i_0] [i_1] [i_2] [i_0] [i_1]) ? (((342582188 ? var_16 : 31))) : (min((arr_9 [i_0]), (arr_5 [i_0] [i_1] [i_2]))))))));
                }
            }
        }
    }
    #pragma endscop
}
