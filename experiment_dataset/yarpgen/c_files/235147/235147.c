/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 -= (((3835184950 && 1) & ((min(var_3, var_2)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, ((max((((((var_10 && (arr_5 [i_2] [i_3])))) < 117)), (0 != var_2))))));
                                var_17 = (max((((arr_10 [i_3] [i_3 + 1] [i_3 - 1] [i_3 - 1]) * 0)), ((((arr_8 [i_3 - 1] [i_3 + 1] [i_4] [i_4]) >= -212815664)))));
                                var_18 ^= (((1 * var_9) ^ ((max(0, var_5)))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] = (((2116547187 >= 0) | ((max((arr_9 [i_0] [i_1] [i_2] [i_3] [i_3 + 1] [i_3 + 1]), (arr_9 [i_0] [i_0] [i_0] [7] [i_3 + 1] [i_0]))))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [15] [i_1] = (((((arr_12 [i_3] [4] [4] [i_3 + 1] [i_3]) * var_12)) | (max(1720459314, (arr_12 [9] [9] [i_3 + 1] [i_3 + 1] [i_3 - 1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_19 [i_2] [i_1] [i_2] [0] [1] [4] [i_2] = ((-26174 * (168 % -117)));
                                arr_20 [i_1] [8] [8] [i_6] = (max(-117, 5900861889164449283));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
