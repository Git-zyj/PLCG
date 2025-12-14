/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [8] = ((((((((-847 ? 127 : -127))) ? (arr_3 [i_0]) : (arr_0 [9] [i_1])))) ? 32765 : (((((6 >> (255 - 236))) <= (((var_9 ? (-32767 - 1) : var_0))))))));
                arr_6 [i_1] = min(((((max(var_13, 4294967289))) ? (arr_4 [i_1]) : (((1 <= (arr_4 [i_0])))))), 1274355580);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 16;i_4 += 1)
                            {
                                arr_16 [i_4] [i_1] [i_4] [i_1] [i_1] [i_1] = ((((max((((!(arr_12 [i_0] [i_0] [10] [i_0] [10])))), (min(1, var_4))))) ? (min(((-(arr_1 [i_3 - 2] [i_1]))), 209)) : (((((var_10 ? -5769 : var_12))) ? -115 : 4))));
                                var_16 = ((var_6 ? (arr_9 [i_0]) : 2147483632));
                                arr_17 [i_4] [i_4] [i_2] [11] [i_4] [i_3] [i_0] = (arr_9 [i_4 + 2]);
                            }

                            for (int i_5 = 0; i_5 < 18;i_5 += 1)
                            {
                                var_17 = ((+((min((arr_19 [i_0] [i_1] [i_3 + 2] [i_1] [i_5]), var_7)))));
                                var_18 |= ((23265 ? (((arr_14 [i_0] [i_1] [i_2] [i_3] [i_5]) << ((((1 ? (arr_12 [i_0] [i_0] [i_0] [i_3] [i_5]) : (arr_9 [i_0]))) - 126)))) : (((var_12 ? -1 : ((990361249 ? -84 : (arr_2 [i_2]))))))));
                                var_19 = (((min(((-84 ? 10534550130840195423 : (arr_0 [i_0] [i_0]))), var_0))) ? (min(-5769, 2)) : ((-44 ? (((arr_12 [i_5] [i_0] [i_2] [i_1] [i_0]) | 2147483647)) : var_3)));
                                var_20 = ((1 ? ((min((((arr_4 [i_0]) <= (arr_0 [i_0] [14]))), (((arr_0 [i_0] [i_2]) == (arr_11 [i_0] [i_1])))))) : 0));
                            }
                            for (int i_6 = 3; i_6 < 17;i_6 += 1)
                            {
                                var_21 = (min(((((min(var_7, (arr_3 [i_3])))) ? 25135 : -92)), (((!(((233 ? 42157 : (arr_12 [i_0] [i_0] [i_2] [i_3] [i_6 - 2])))))))));
                                var_22 &= (((~73) ? ((((!(((var_10 ? 8493861761362216095 : (arr_8 [i_1])))))))) : ((((min(-4991, var_7))) ? (max(var_8, -570371035)) : (((-662912513 ? 6 : 4753)))))));
                            }
                            arr_24 [i_0] [i_0] [i_0] [i_3] &= (((arr_12 [i_3 + 2] [i_3 - 3] [i_3 + 2] [i_3] [i_3]) ? ((732176976 ? 1 : 32738)) : ((((max((arr_12 [i_0] [i_3] [i_3] [i_3 - 3] [i_1]), (-9223372036854775807 - 1))) < (arr_1 [i_0] [i_0]))))));
                        }
                    }
                }
                var_23 = ((116 ? 32762 : 20591));
            }
        }
    }
    var_24 = (min(var_24, (((var_0 ? var_4 : (112 * 0))))));
    #pragma endscop
}
