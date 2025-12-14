/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_11 [5] [5] [i_2] [5] [i_2] [i_2] = ((((max((max(var_12, var_10)), ((var_10 + (arr_8 [i_0] [10] [10] [i_3])))))) ? (arr_7 [3] [3] [3] [3]) : -111));
                        var_16 += ((((max(var_6, (arr_9 [i_0] [i_0] [i_3])))) & 9223372036854775807));
                    }
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        var_17 = (min(var_17, ((((((arr_10 [i_0 - 4] [i_4 + 1]) ? (arr_1 [i_0]) : (arr_14 [6] [i_1] [i_1] [i_4] [i_1] [i_2]))) + (arr_3 [i_0]))))));
                        var_18 = (arr_12 [i_0] [i_0 + 1] [1] [i_0] [2]);
                        arr_16 [i_4] [i_1] [i_1] [i_1] [i_4] = (((arr_3 [i_0 - 3]) ? (arr_3 [i_0 + 1]) : (((arr_3 [i_0]) / (arr_3 [i_4 - 1])))));
                    }
                    arr_17 [i_0 - 3] [i_1] [i_2] = (max(((((var_7 ^ -63) <= var_10))), var_11));
                    var_19 = ((((max((max(var_10, var_4)), ((6725923599314873028 ? var_7 : 56509))))) ? ((((min(var_11, -63))) / (arr_14 [i_2] [i_2] [i_0 - 3] [i_0] [7] [2]))) : (-111 != 54420)));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    arr_25 [i_7] = ((((((arr_22 [i_6 + 1] [i_6 - 1] [i_6]) >> (-32759 + 32768)))) & (arr_20 [i_6 + 1] [i_6 + 1])));
                    var_20 = (((30891 ? (arr_24 [13] [3] [i_7] [3]) : ((var_4 ? 0 : (arr_23 [i_5] [i_5] [i_5]))))));
                    arr_26 [16] [i_5] = (((((arr_22 [i_6 - 2] [i_6 + 1] [i_5]) & 2162888916)) == (arr_22 [i_6 + 1] [i_6 - 3] [i_5])));
                }
            }
        }
    }
    var_21 = (max(var_21, (3522621951 <= 9223372036854775807)));
    #pragma endscop
}
