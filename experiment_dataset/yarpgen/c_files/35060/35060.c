/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_21 = (max(3489863812, 5195998191912774103));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_1] [i_0] [i_3] = (min(((1 ? -25688 : 0)), ((((arr_4 [i_0] [i_3 + 1] [i_3 + 1]) ? var_4 : ((-(arr_7 [i_0] [i_0] [i_2] [i_0]))))))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] = ((((arr_10 [i_0] [i_0] [i_2] [i_3 + 1]) ? var_11 : (((min((arr_7 [i_0] [i_0] [i_0] [i_0]), var_8)))))));
                        }
                    }
                }
                var_22 = (((min(25551, (var_8 + var_1)))) ? ((((((arr_1 [i_0] [i_0]) ? 251 : 13250745881796777496)) == var_5))) : ((~(arr_10 [0] [10] [i_1] [i_1]))));
                var_23 = (min(var_23, ((((((arr_0 [12] [12]) ? (arr_3 [i_1] [i_0] [i_0]) : (var_18 <= var_10))) < var_10)))));
            }
        }
    }
    var_24 = (max(var_24, ((((var_6 > (~-32767))) ? (min((max(62, 4294967271)), (var_1 / 22204))) : var_16))));
    var_25 = var_12;
    #pragma endscop
}
