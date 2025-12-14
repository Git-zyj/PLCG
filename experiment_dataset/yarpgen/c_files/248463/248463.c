/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((((!1175887812) ^ ((12042208547536441948 ? 6281 : 12042208547536441948)))), ((max((min(108, var_10)), 1)))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 -= ((((((((arr_5 [i_2] [i_2] [i_1] [i_0]) | 12538))) && (((~(arr_1 [i_1 + 1])))))) && ((max(1, 3952615687399473749)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [9] [9] [i_4] [i_4 + 2] [i_4] [i_4 - 1] [i_4 + 2] = ((((((min((arr_2 [i_0 - 2] [i_1]), (arr_7 [i_0] [i_1 - 1] [i_3])))) || (((0 - (arr_8 [i_0] [i_4 - 1])))))) || 2955742316));
                                var_20 = (2127902178 ? 24 : 1);
                                var_21 = ((((max((((-(arr_7 [i_0 - 2] [i_1] [i_2])))), -var_4))) ? (((arr_2 [i_0 - 2] [i_1 + 2]) + (arr_2 [i_0 - 3] [i_1 + 1]))) : (5001100425866014913 != 5948853934663363534)));
                                var_22 = ((((-(arr_12 [i_0 - 4] [i_1 + 1]))) < ((((arr_12 [i_2] [i_3]) != (arr_12 [i_1 - 1] [i_1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
