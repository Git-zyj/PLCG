/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (min(((min((!7), (min((arr_1 [16] [i_1]), (arr_1 [i_0] [i_0])))))), (min(((((arr_5 [17]) >= 1))), var_14))));
                var_17 -= (!(((((min(2147483647, 7381))) % (((arr_3 [i_1] [i_1]) + var_14))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_18 += (!-2147483636);
                                var_19 = (min(var_19, ((min(((min((~var_1), ((((arr_19 [i_2] [i_5] [i_4] [i_5]) >= 2044)))))), (min((((var_5 << (7381 - 7365)))), (((arr_4 [i_4] [i_5] [i_4]) % (arr_18 [i_3] [i_3]))))))))));
                            }
                        }
                    }
                    var_20 = (min(1, 512));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 9;i_8 += 1)
                        {
                            {
                                var_21 = (max(var_21, ((min(((-(min(2401474064, 0)))), ((((!0) > ((min(13373, 1)))))))))));
                                arr_24 [i_3] [i_7] [10] = ((!((min(18446744073709551594, 0)))));
                                var_22 = (((min(2196386821556475893, 18446744073709549572)) > (((-(min((arr_17 [i_2] [i_2]), (arr_23 [i_3] [i_4]))))))));
                                var_23 = ((((-(-2147483638 == 30942))) - -7382));
                                arr_25 [i_2] [i_3] [10] [0] [i_8] [i_4] [i_8] = ((+(min((min((arr_9 [i_2] [i_2]), 262136)), (!65535)))));
                            }
                        }
                    }
                }
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    var_24 = (min(((min(var_4, 334))), (((((min((arr_14 [i_2]), (arr_3 [i_2] [i_3])))) > (576458553280167936 << 62))))));
                    var_25 *= ((((min(2121294095, ((min(22887, (arr_22 [6] [i_3] [i_3] [i_3] [i_3]))))))) & -1277652991));
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_26 = (min((min((arr_11 [i_3]), (min(2471650830, (arr_4 [i_10] [i_2] [i_2]))))), (!56504)));
                    arr_30 [i_2] [i_2] [i_2] = (min((((77 > 593968821) < (!185))), ((!(((var_5 + (arr_17 [i_10] [i_2]))))))));
                    arr_31 [i_10] = ((~(min(var_6, (((-(arr_13 [i_2]))))))));
                }
                arr_32 [i_2] [1] &= (min((((~(((-88 > (arr_26 [i_2] [i_3] [i_2]))))))), ((~(min((-9223372036854775807 - 1), (arr_14 [i_2])))))));
            }
        }
    }
    #pragma endscop
}
