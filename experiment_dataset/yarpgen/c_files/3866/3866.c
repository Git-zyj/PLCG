/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (min(var_6, ((((max(-68403661, -68403661))) ? (-1168742648 * var_0) : var_7))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 -= var_5;
                    var_15 |= var_8;
                }
            }
        }
        arr_9 [1] |= (max((arr_6 [0] [0] [4] [10]), (((max((arr_6 [4] [i_0] [4] [4]), (arr_7 [8] [i_0 - 1] [8]))) ^ (~-68403661)))));
        var_16 &= (min((((((min(-68403661, (arr_7 [10] [6] [12])))) ? 224 : -1024))), ((((6895875221977995540 ? 5576868405486259012 : 20467)) / (arr_7 [0] [0] [0])))));
        var_17 &= ((1 ? (max((((var_11 << (((arr_6 [4] [i_0] [i_0] [12]) - 16231038771621419773))))), (min(0, var_0)))) : (arr_7 [6] [i_0 - 1] [i_0])));
        arr_10 [i_0] = 31;
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
    {
        arr_13 [16] [2] = var_0;
        var_18 = (max(68403649, (arr_12 [i_3 + 1] [i_3 - 1])));
    }
    for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_19 ^= ((((max(((min(var_3, (arr_11 [11])))), (max(1, (arr_14 [12])))))) ? (max(-68403674, ((max(1, 0))))) : (arr_17 [0])));
        var_20 = (min(-1, 255));
        var_21 ^= (max(68403657, ((((min((arr_12 [2] [i_4]), -622166466))) ? (arr_15 [i_4] [2]) : (((max((arr_15 [i_4] [2]), (arr_11 [i_4])))))))));
        arr_18 [i_4] [i_4] = ((-(42 & 1)));
    }
    for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
    {
        var_22 |= (((arr_17 [20]) >> (-var_11 + 13572)));
        var_23 = var_4;
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 20;i_8 += 1)
                {
                    {
                        arr_30 [i_5] [i_5] [i_5 + 1] [i_5 + 1] [1] = (arr_28 [i_5 - 1]);
                        var_24 = (max(var_24, ((max((((arr_25 [i_5 - 1] [i_6] [i_8 + 1] [4]) ? 2 : var_0)), ((((((var_0 < (arr_27 [i_5 - 1] [i_6] [10] [10])))) & (var_2 < 1)))))))));
                    }
                }
            }
        }
    }
    var_25 = ((116 ? var_4 : (-9223372036854775807 - 1)));
    #pragma endscop
}
