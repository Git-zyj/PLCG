/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = (min(var_13, 2113727726));
                var_14 = (((((2181239582 / (arr_0 [i_0] [i_1])))) / (((max(var_4, var_11)) * 6300695145651175138))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_15 = ((((min(41092, 2181239577))) >= (arr_2 [i_3])));
                        var_16 = (((((((2181239568 > (arr_6 [i_0]))) ? (arr_6 [i_2]) : ((max((arr_2 [i_3]), (arr_7 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3]))))))) ? (arr_2 [i_0]) : (((arr_7 [i_1] [i_2] [i_2] [5] [i_0] [i_1]) ? ((((arr_4 [i_1] [2] [i_3]) ? (arr_4 [i_0] [i_1] [i_2]) : (arr_6 [i_0])))) : -2472827832))));
                    }
                    arr_9 [i_2] [i_1] [i_0] [i_0] = (arr_4 [i_0] [1] [i_0]);
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_17 = var_9;
                    var_18 = ((((((((1822139444 < (arr_10 [i_0] [i_1] [i_1] [i_4])))) >> ((((13835058055282163712 ? var_6 : var_10)) - 11359))))) | 9869889083912118557));
                }
                var_19 = (arr_12 [i_0] [i_1]);
            }
        }
    }
    var_20 = ((((((var_10 ? var_4 : -82)) | var_6)) >= (((var_2 > ((var_2 ? var_6 : 0)))))));
    var_21 = ((-((((var_11 ? var_5 : 2113727726)) - (((var_9 >> (var_7 - 23503))))))));
    #pragma endscop
}
