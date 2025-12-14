/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min(var_9, (((5419 + var_8) ? -65535 : (~var_6))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_0] = var_0;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_11 = (min(var_11, 0));
                                var_12 = (min((((arr_14 [i_0] [i_1]) ? (max(1669585187, 65535)) : (((min((arr_12 [i_1] [i_3 + 1] [i_0] [i_1] [i_1]), 1)))))), (((((65535 ? 1317070706 : 1162616549311875658)) < (var_7 - 4294967295))))));
                                arr_16 [i_1] [i_1] [i_1] [i_3] [i_3] = ((!((max(((((arr_0 [i_1]) ? (arr_12 [11] [i_1] [i_2] [i_3] [i_1]) : 65535))), (arr_13 [i_0] [i_1] [i_0]))))));
                                var_13 = 65535;
                                var_14 += ((~(!-7384289519735730854)));
                            }
                        }
                    }
                    var_15 = var_9;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 14;i_9 += 1)
                        {
                            {
                                arr_30 [i_7] [i_6] [i_7] = ((-(arr_0 [i_5])));
                                arr_31 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((((((((-30108 ? var_7 : -30108))) ? var_9 : ((var_1 ? var_0 : var_6))))) ? 506654132 : ((((!-31669) >= ((65522 % (arr_9 [i_6] [i_6] [i_7] [i_8]))))))));
                                var_16 += (min((arr_15 [i_8] [i_6] [i_8] [0]), (min(((1 ? (arr_9 [i_6] [i_7] [i_6] [0]) : 506654132)), ((-(arr_0 [i_5])))))));
                            }
                        }
                    }
                }
                var_17 = 18446744073709551615;
                var_18 = (((max(65535, (30107 | 88192080016495932))) | ((((arr_8 [i_6] [i_5] [i_5] [i_6]) ? ((max(4096, 46973))) : 5893)))));
                var_19 = 1;
            }
        }
    }
    #pragma endscop
}
