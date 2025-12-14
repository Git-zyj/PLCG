/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= ((((-(65535 / 492114455))) + var_0));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = (max(var_13, ((min(((var_0 ? -9 : (((-1903824289 ? var_4 : -1))))), (min(492114430, ((((arr_5 [14] [6] [i_0]) > var_3))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_14 *= (((!var_2) <= ((max(492114455, 7573)))));
                            var_15 ^= (arr_10 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3]);
                            var_16 = (max(var_16, (((var_11 ? ((((!(arr_11 [i_3]))))) : (min((((-(arr_11 [i_2])))), (arr_5 [i_1] [i_2] [i_3]))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_17 += arr_5 [i_5] [i_4] [12];
                            var_18 *= (((max((arr_6 [10] [i_4] [16] [i_0 + 1]), -97112895)) / 3050175135));
                        }
                    }
                }
                var_19 *= var_9;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 18;i_10 += 1)
                        {
                            {
                                var_20 += (max(var_10, (((max((arr_21 [i_6] [i_10]), var_10)) & ((min(-864633137, 400)))))));
                                var_21 *= ((((min(3802852866, (864633153 || 1305349786)))) ? ((12156 >> (1244792145 - 1244792144))) : (((((max(1982779072, 41))) > ((140737488355327 / (arr_32 [i_6] [i_7] [i_8] [i_9] [i_10]))))))));
                            }
                        }
                    }
                    var_22 = (min(var_22, ((((((((var_10 ? 492114426 : (arr_33 [i_6] [i_6] [i_8] [4] [i_8])))) ? (!3802852841) : (arr_20 [i_6]))) <= ((((arr_31 [18] [i_7] [i_6] [i_6] [18]) || 45670))))))));
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            {
                                var_23 = (arr_30 [18] [16] [i_8] [6] [16] [i_6]);
                                var_24 = (max(var_24, (max((min(492114421, (arr_35 [i_11 - 1] [i_11 - 1] [i_11] [i_11] [i_11] [i_11 - 1]))), ((((var_11 | var_10) >= (arr_37 [i_11 + 1] [i_11 + 1] [i_11 - 1] [10] [i_11 + 2] [i_11 - 2] [i_11 - 1]))))))));
                                var_25 = (max(var_25, ((((((-3714 ? 3802852841 : 492114455))) ? (((arr_34 [i_11 + 2] [i_11] [i_11] [i_11] [i_11 - 2] [i_11 - 1]) + (arr_34 [i_11 + 2] [i_11 + 2] [i_11 + 2] [i_11 + 1] [i_11 - 2] [i_11 + 1]))) : 2312188223)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
