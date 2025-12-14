/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_15 = (((3752061936267407987 / 1) ? (arr_7 [i_3 - 1] [i_1 + 1]) : (((~(((arr_9 [i_0]) * (arr_7 [i_0] [i_0]))))))));
                            arr_14 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] [i_4] = ((+((((((arr_12 [1] [1] [1] [10] [1] [i_0] [i_2]) ? (arr_1 [i_3]) : (arr_9 [i_0])))) ? (arr_8 [i_1] [i_3]) : (((-(arr_7 [i_1] [1]))))))));
                            var_16 = (arr_10 [i_0] [i_0] [i_0] [7]);
                        }
                    }
                }
                var_17 = (max(54043195528445952, (~1)));
                arr_15 [i_0] [i_1 + 1] [i_1 + 1] = (max((((arr_9 [i_0]) || ((((arr_0 [i_0]) ? (arr_8 [i_0] [i_1]) : (arr_10 [3] [3] [i_2] [i_2])))))), (-1394069559654220901 <= 1)));
            }
            var_18 = (((min((~1), (-9223372036854775807 - 1))) > ((((((arr_10 [i_0] [i_0] [i_0] [i_0]) ? (arr_13 [1] [i_1] [i_1] [i_1]) : (arr_0 [i_0]))) ^ (((arr_7 [i_1] [i_1]) - (arr_6 [i_0]))))))));
            arr_16 [i_0] [4] [i_0] = (((((arr_6 [i_0]) ? (((-(arr_3 [i_0])))) : (((arr_13 [3] [i_0] [1] [3]) | (arr_12 [i_0] [i_0] [i_1 + 1] [i_0] [i_1 - 1] [i_1 - 1] [i_1 + 1]))))) - ((((((~(arr_8 [i_0] [i_1])))) ? ((4294967276 ? 3752061936267407987 : 126)) : (arr_6 [i_0]))))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        {
                            arr_24 [i_0] [i_7] [i_7] = ((~((((((arr_19 [i_1]) ? (arr_20 [4] [i_1] [4] [i_7 - 1]) : (arr_1 [i_1])))) ? (arr_13 [i_0] [i_0] [i_5] [i_6]) : (((arr_13 [2] [2] [i_6] [i_7 - 1]) + (arr_22 [i_7] [i_1 + 1] [i_7])))))));
                            arr_25 [i_1] [i_7] = (max((max((arr_7 [i_0] [0]), (((arr_19 [i_6]) & (arr_17 [i_0] [i_0] [i_0]))))), (arr_13 [i_0] [i_0] [i_0] [i_0])));
                        }
                    }
                }
            }
            arr_26 [i_0] = ((((~(~511804888))) == (((!(arr_6 [i_0]))))));
        }
        var_19 = (~((1694174079 ? 1 : 4294967271)));
        var_20 = ((-(((((~(arr_5 [i_0])))) ? (((arr_22 [i_0] [i_0] [i_0]) ? (arr_13 [10] [i_0] [1] [i_0]) : (arr_7 [i_0] [i_0]))) : (arr_21 [i_0] [i_0])))));
    }
    var_21 = ((((!(~var_9))) ? ((min(5, var_9))) : (((var_8 | var_11) / ((var_5 ? var_4 : var_1))))));
    var_22 = ((((min((!var_7), var_0))) && (((var_0 && var_14) && (!var_6)))));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            {
                arr_32 [i_8] [i_9] |= (((((!(arr_29 [i_8]))) ? (((arr_28 [i_8]) % (arr_31 [i_9]))) : ((((arr_27 [i_8]) || (arr_30 [9] [i_9] [i_9])))))));
                var_23 *= (((min(((max(1, 4294967266))), 4294967293)) < -1));
            }
        }
    }
    var_24 = (min(((min(var_2, var_0))), var_0));
    #pragma endscop
}
