/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_10 >= ((var_0 ? var_2 : var_10))));
    var_15 = (~var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_7 [i_1] = (((-(((1 <= (arr_2 [i_0])))))));
                    var_16 = var_10;
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    arr_11 [8] [i_1] [i_3] = (1 || 24576);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_17 *= ((281474976710528 ? 2070879244 : 8586445982689794831));
                                arr_17 [i_0] [i_1] [i_1] [i_3] [i_3] [i_5] |= (((((max(1, 1047658992)))) ? (((arr_15 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_1] [i_5 + 1] [i_5]) | (((arr_16 [i_0] [i_3]) ^ -281474976710525)))) : 24585));
                                var_18 = 1;
                                var_19 = (var_9 >= -var_12);
                                var_20 -= ((1 ? 24576 : -94));
                            }
                        }
                    }
                    var_21 = 1805672755556376609;
                    arr_18 [i_3] [i_0] = ((+((max((arr_9 [i_3] [i_1] [i_1] [i_0]), (arr_9 [i_0] [i_1] [i_0] [i_3]))))));
                    arr_19 [i_1] [i_1] = 255;
                }
                arr_20 [1] [i_1] [i_1] = (max(((max(13, (((~(arr_6 [i_1]))))))), (arr_12 [i_0] [i_1] [i_0] [i_1] [i_1])));
                var_22 = 255;
                /* LoopNest 3 */
                for (int i_6 = 2; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_23 ^= ((((41 ? 312987783 : 40945))) ? ((min(1, (arr_3 [i_0])))) : ((((arr_25 [i_0] [11] [11] [i_6] [i_7] [i_7] [1]) >= (arr_15 [i_0] [i_1] [i_1] [i_0] [i_1] [i_8])))));
                                arr_27 [i_6] [4] [i_0] [i_0] [i_0] [i_6] = 19;
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 &= var_11;
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            {
                var_25 ^= (arr_31 [i_9] [i_9] [i_10]);
                var_26 = ((44 ? 24576 : 0));
                var_27 = 41225;
            }
        }
    }
    #pragma endscop
}
