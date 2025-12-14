/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    var_18 = min((max(((var_3 >> (26905 - 26900))), (((var_16 + 2147483647) << (8113337417813976360 - 8113337417813976360))))), var_4);

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_19 = 2047;
        var_20 = (max(var_20, (arr_1 [10])));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                {
                    var_21 = (max(var_21, ((max((arr_5 [i_1]), ((((arr_9 [i_3 + 1] [i_1]) || (arr_9 [i_3 - 2] [i_1])))))))));
                    var_22 += ((((-1405 * (arr_10 [i_1] [i_2] [i_3] [i_3 + 2]))) & ((~(arr_10 [i_3] [6] [i_1] [i_1])))));
                    var_23 *= (((((((arr_10 [i_2] [i_2] [i_3] [i_2]) <= var_15)))) << 1));
                }
            }
        }
        arr_14 [i_1] = (((((~(arr_11 [i_1] [i_1] [i_1] [i_1])))) | (((((arr_1 [i_1]) ^ 15)) & 249))));
        var_24 *= ((((min((arr_3 [i_1] [i_1]), (arr_8 [i_1])))) && ((43557 && (arr_7 [i_1] [i_1] [i_1])))));
        var_25 = (min(var_25, (((-(min(((((arr_5 [i_1]) - 58))), (arr_0 [i_1] [i_1]))))))));
        var_26 = (--7);
    }
    var_27 = -var_14;
    #pragma endscop
}
