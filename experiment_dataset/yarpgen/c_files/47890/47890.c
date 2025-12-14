/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((!var_5) ? var_10 : var_3));
    var_16 = max(var_14, ((var_13 ? 664571254 : (max(var_1, 69191430)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [3] = ((((((((arr_0 [i_0]) + (arr_1 [1])))) ? (var_12 <= var_7) : var_0))) ? (max((max(130, var_14)), (arr_0 [i_0]))) : 4225775883);
        arr_3 [6] [6] = (((((~((((arr_0 [i_0]) == 454880561)))))) ? (max((arr_1 [i_0]), (arr_1 [i_0]))) : (arr_1 [i_0])));
        arr_4 [i_0] = ((3599013417 ? 17793002606442456109 : -1500342773));
        var_17 &= ((arr_0 [10]) ? (arr_0 [i_0]) : var_14);
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        var_18 *= (((arr_1 [10]) ? (((!(arr_5 [i_1])))) : (arr_0 [i_1])));
        arr_8 [i_1 + 1] = 41;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_19 &= ((-(((-1849716275948475894 && ((max(255, -778632037))))))));
                    var_20 = ((((max(((((arr_6 [i_1] [i_2 - 1]) ? 2147483584 : 454880561))), (max(454880561, var_4))))) ? ((((var_14 < (arr_14 [i_1 - 1] [i_1 + 1]))))) : var_12));
                }
            }
        }
        var_21 -= ((!(!853725928)));
        var_22 = (~-1500342773);
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_23 = ((+((0 ^ (max((arr_0 [i_4]), 3867309438))))));
        arr_18 [i_4] = ((~((0 ? var_13 : (arr_7 [i_4])))));
        var_24 *= (((max((max((arr_5 [i_4]), 653741467267095507)), (arr_11 [i_4] [i_4] [i_4]))) + ((var_3 ? (max(-125, 6725363015548320977)) : (((arr_11 [i_4] [i_4] [i_4]) ? 218 : var_13))))));
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_22 [i_5] = ((((((-1 ? (arr_20 [i_5]) : (arr_20 [5])))) <= (arr_21 [i_5]))) ? ((((max(2165635749607369903, -49))) ? 4225775865 : (max(2473147793, 524284)))) : ((((arr_20 [i_5]) ? 1 : (arr_20 [i_5])))));
        var_25 = 1694240543;
    }
    var_26 = (max(var_26, (((-(((max(6725363015548320977, 3)) & ((var_8 ? var_10 : var_13)))))))));
    #pragma endscop
}
