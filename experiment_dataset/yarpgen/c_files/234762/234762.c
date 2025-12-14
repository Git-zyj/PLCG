/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            var_20 = (max(var_20, ((min(((((((arr_0 [i_0]) ? (arr_4 [i_0 - 1] [i_1 - 1]) : 1))) ? (((arr_5 [i_0] [i_0]) ? (arr_0 [i_0 + 1]) : 3520706516)) : (var_9 & -1461347103))), (((~(arr_0 [i_0 - 1])))))))));
            var_21 = (arr_5 [i_0 - 2] [i_0 - 1]);
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_9 [i_0] [i_0] = arr_6 [i_0] [i_2] [i_2];
            var_22 ^= ((-(min((arr_5 [i_0] [i_0]), ((((arr_3 [i_2]) ? 3670100216 : 37113)))))));
            arr_10 [i_2] [i_2] = 3670100216;
            arr_11 [i_2] [i_2] [i_2] = (max((min(624867098, ((max(85, 112))))), (((!(arr_3 [i_0 - 1]))))));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_23 = (min(var_23, ((max(215, 11631653899255402611)))));
                        var_24 = (!116);
                    }
                }
            }
            arr_20 [i_0] [i_3] = ((-(((((arr_8 [i_0 - 2]) | var_6)) << ((((((~(arr_17 [i_3] [i_3] [i_3] [i_0] [i_0] [i_0]))) + 115)) - 22))))));
            arr_21 [i_0] [i_0 + 1] [i_0 + 1] = (arr_8 [i_0 - 1]);
            var_25 = (max(var_25, ((((arr_14 [i_0] [i_0]) ? ((58057 ? 58046 : 61464)) : (--1))))));
        }
        var_26 -= ((~(max(((7497 ? 28581 : 3670100216)), (arr_18 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0])))));
    }
    for (int i_6 = 2; i_6 < 10;i_6 += 1)
    {
        var_27 *= ((((580131821776353561 ? 1 : (min(3010236974067480532, 1)))) - -1908991675));
        arr_24 [0] = (17516654969604329883 ? -32 : (28569 + 255));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    arr_30 [i_7] = ((!(((26 ? var_2 : var_14)))));
                    var_28 = ((!((min(((11 ? (arr_16 [i_7 - 1]) : (arr_13 [i_6] [i_6]))), 1908991672)))));
                    var_29 = (min(var_29, (arr_1 [i_6 - 2] [i_6 - 2])));
                    arr_31 [i_6] [i_7 + 1] [i_8] = ((max(((8584897485119871397 ? 17516654969604329865 : (arr_8 [i_6])), (((116 ^ (arr_16 [i_6 - 2]))))))));
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        arr_34 [i_9] = ((+((28595 ? (arr_16 [0]) : (arr_16 [22])))));
        arr_35 [i_9] = 44;
    }
    var_30 = max(-127, (max(-var_10, (min(2524062992580892386, var_0)))));
    #pragma endscop
}
