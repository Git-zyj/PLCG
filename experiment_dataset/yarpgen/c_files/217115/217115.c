/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((((min(112, var_4))) ? var_5 : var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_1] [1] [i_1 + 4] = ((105 * ((-((-(arr_5 [i_0])))))));
                var_18 = (max(var_18, var_16));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_10 [i_1] [i_0] [i_0] = (((((arr_6 [i_0]) ? (arr_0 [i_0] [i_1]) : 143)) | var_3));
                    arr_11 [1] [21] [i_2] [i_1] = (((max(9223372036854775807, -106)) <= (((var_13 ? ((~(arr_0 [i_2] [i_1 + 3]))) : (((!(arr_5 [i_0])))))))));
                    arr_12 [i_1] [i_1] = (max((((arr_9 [i_0] [i_0] [i_2]) ? ((min(112, (arr_8 [i_0] [i_0] [i_1] [i_0])))) : ((((arr_1 [i_0]) > (arr_5 [i_1 + 1])))))), 127));
                    arr_13 [i_0] [i_1] [i_0] = (max((max(((max(var_15, 0))), ((var_12 ? -106 : var_8)))), (min((((arr_5 [i_0]) | (arr_1 [i_1]))), -106))));
                }
                arr_14 [i_1] [i_1 + 1] = (max(((max(((-10528632 ? 105 : 105)), (var_11 >= -11744)))), (((arr_2 [i_1 + 3] [i_1 + 3]) ^ 1708819846))));
            }
        }
    }
    var_19 = (max((min(2586147449, 0)), (~var_8)));
    #pragma endscop
}
