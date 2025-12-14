/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (((((+(((arr_5 [i_0] [i_0] [i_0]) ? (arr_3 [i_0]) : (arr_0 [13])))))) ? ((max(((17873 ? (arr_1 [i_1]) : (arr_0 [i_1]))), ((0 ? 12965 : 10))))) : (min((arr_2 [6]), ((((arr_4 [i_0] [i_1]) ? (arr_0 [i_1]) : (arr_1 [i_0]))))))));
                var_13 += (min((min(507904, ((min((arr_3 [i_1]), -36))))), (((arr_5 [i_0] [i_1] [i_0]) ? (arr_1 [i_0]) : (((arr_3 [i_0]) ? (arr_1 [i_1]) : (arr_3 [i_1])))))));
                arr_6 [i_0] = ((+(max(((min((arr_3 [i_1]), (arr_0 [i_0])))), (((arr_5 [i_1] [11] [i_1]) ? (arr_2 [i_0]) : (arr_1 [i_1])))))));
                var_14 = ((-((~((-(arr_0 [i_1])))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                {
                    var_15 = (arr_8 [i_2]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_19 [i_2] [i_2] [i_4] [i_5] [i_5] [i_6] &= (arr_3 [i_2]);
                                arr_20 [i_2] [i_3] [i_3] [i_4] [i_5] [i_6] [i_6] = ((!(((108 ? 59 : -29)))));
                                var_16 -= (((min(1, 26))));
                            }
                        }
                    }
                    var_17 = (max((!0), (arr_5 [i_2] [i_3] [15])));
                }
            }
        }
    }
    var_18 = min((((((min(var_2, var_9))) ? ((max(37, 246))) : ((var_10 ? var_1 : var_4))))), ((-var_1 ? (~var_8) : ((var_7 ? var_6 : var_6)))));
    #pragma endscop
}
