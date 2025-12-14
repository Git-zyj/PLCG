/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (((((((var_11 ? var_8 : var_11)) << ((min(var_6, var_11)))))) ? ((((((max(0, var_1))) > (5424 * -11888))))) : (min((var_5 + var_3), ((1 ? -17 : 1040166079))))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_13 = (((3254801228 & 16115) | ((((((var_10 ? var_8 : var_11))) ? ((11889 & (arr_2 [i_0 + 1]))) : ((var_2 ^ (arr_1 [i_0]))))))));
        var_14 = (((((arr_1 [i_0 + 1]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1]))) > (min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1])))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_15 = (((((-(arr_5 [i_0 + 1] [i_0 + 1])))) ? (((((arr_5 [i_0 + 1] [i_0 - 1]) >= (arr_5 [i_0 + 1] [i_0 + 1]))))) : (arr_5 [i_0 + 1] [i_0 + 1])));
            arr_7 [i_1] = ((1 ? ((((((arr_5 [i_0] [i_0]) ? (arr_2 [i_0]) : (arr_3 [i_0])))) ? 0 : (((-11906 ? var_0 : 10505))))) : ((max(((15574504813259352650 ? 1 : 78)), (!var_7))))));
            arr_8 [i_1] &= (min((!-10), (((min(3254801209, 0)) | -112))));
        }
    }
    for (int i_2 = 3; i_2 < 19;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                var_16 = (((((-(arr_17 [i_2] [i_2 + 3])))) ? (arr_10 [i_2]) : (arr_17 [i_3] [i_2 - 2])));
                var_17 = (((var_4 ? ((min((arr_15 [i_4] [i_3] [i_2]), 1))) : (arr_11 [i_2]))));
                var_18 = (min(3868246539, 1));

                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_19 ^= -99;
                    var_20 = (((arr_14 [i_2] [21]) ? 0 : ((((-104 / (arr_16 [i_2 + 2] [i_2] [1] [i_2 + 2]))) / ((-4609156488950835784 ? 1 : (arr_9 [i_4])))))));
                    var_21 = (min(var_21, (((-148 ? (((((arr_16 [i_2] [i_2 + 2] [1] [i_5]) / (arr_14 [i_2 - 3] [i_4]))))) : 1381422806)))));

                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        arr_23 [i_2] = ((((((!(arr_9 [i_6]))) ? 0 : ((32757 ? var_10 : 7)))) > ((max((var_6 | -1833208452), -31462)))));
                        var_22 = (arr_9 [i_6]);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    {
                        var_23 = (max(1, 32749));
                        var_24 = (max(var_24, 254));
                        var_25 = arr_11 [i_2];
                        var_26 = (max(var_26, (((~(((((((arr_16 [i_3] [i_3] [i_7] [i_8]) ? 1556151364 : var_1))) && (((var_6 >> (((arr_26 [i_8]) - 44586)))))))))))));
                        arr_29 [i_2] [i_3] [i_2] [1] [i_8] &= (min(1730452713, var_11));
                    }
                }
            }
        }

        for (int i_9 = 1; i_9 < 21;i_9 += 1)
        {
            var_27 = ((min(var_11, (arr_21 [i_2] [i_2] [i_9 - 1] [i_9 - 1] [i_9 - 1]))));
            arr_33 [i_2] = ((((max(-2116, 0))) ? 1040166096 : 248));
        }
    }
    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        arr_38 [i_10] = 9583994945414555796;
        var_28 = (((((min((arr_36 [i_10]), (8 > 1))))) & (min(32767, ((var_10 ? 3473418307 : (arr_37 [i_10])))))));
    }
    var_29 |= var_2;
    #pragma endscop
}
