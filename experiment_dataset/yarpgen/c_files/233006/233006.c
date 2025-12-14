/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((~(((((var_2 >> (274877905920 - 274877905915)))) ? (((min(var_10, var_4)))) : (min(var_5, var_6))))));
    var_14 = ((((((min(45, -45))) == var_12)) ? ((min(1, var_4))) : var_12));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_15 = (((var_8 - var_5) ? ((((var_8 ? var_11 : var_2)) | (~442820974))) : ((max(((var_5 ? 2111 : var_12)), ((max(1, 10946))))))));
        arr_2 [i_0] [17] = (max(((-48 & (253 << var_7))), (max((arr_1 [i_0] [i_0 + 1]), (min(18552, -442820953))))));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        var_16 = ((!(((((max(442820966, (arr_4 [i_1 + 1])))) ? (max(var_3, (arr_5 [i_1] [i_1]))) : (((max(12, (arr_0 [i_1]))))))))));
        arr_6 [10] &= ((!(!var_9)));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 14;i_3 += 1)
            {
                {
                    var_17 -= ((2899561173 ? ((-((var_8 ? 241758585351409606 : var_3)))) : 3853548516));
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_18 *= (max(((var_10 ? ((54590 ? (arr_10 [i_2]) : 2427556030)) : (((max(154, -29149)))))), ((-441418786 << (575798760 - 575798732)))));
                                var_19 = ((var_1 ? (arr_8 [i_3]) : ((((17336 - 2757872378) + var_9)))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 17;i_6 += 1)
    {
        var_20 = (min((((-88 ? (!255) : (max(var_12, (arr_1 [7] [9])))))), (arr_20 [i_6] [i_6])));
        var_21 = 0;
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 14;i_7 += 1)
    {
        var_22 -= (((((arr_17 [i_7] [14] [14] [i_7 - 1] [i_7] [8] [i_7]) ? (arr_0 [i_7]) : 9345946600607509996)) * (arr_8 [i_7 + 1])));
        var_23 = ((~(arr_21 [i_7 - 1] [i_7 + 1])));
    }
    #pragma endscop
}
