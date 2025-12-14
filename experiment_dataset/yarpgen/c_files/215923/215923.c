/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 += (~4294967283);
                                var_20 = (max((((arr_0 [i_0] [i_4]) ? 0 : (arr_0 [i_0] [i_0]))), (arr_8 [i_4] [i_4] [i_3] [i_2] [i_1] [i_0])));
                                var_21 = (((max((arr_7 [i_0] [i_2 + 2] [i_2] [i_2]), ((((arr_9 [i_3]) ? (arr_10 [i_4] [i_3] [i_2] [i_1] [i_0]) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))))) < (((((65535 ? -60 : 60))) ? var_17 : (arr_8 [i_2] [i_2] [i_2] [i_2] [i_2 - 3] [i_2])))));
                                var_22 = (min(var_22, (~75)));
                            }
                        }
                    }
                }
                var_23 += ((!(arr_3 [i_0] [i_0])));
                var_24 = (((((((arr_8 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0]) <= (arr_6 [i_0] [i_1]))))) ^ (((arr_8 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0]) ^ (arr_5 [i_0] [i_0])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    arr_21 [i_6] [i_7] = (((max((((arr_19 [i_7] [i_6] [i_6] [i_5]) + 4294967291)), (arr_8 [i_5] [i_5] [i_5] [i_6] [i_6] [i_7]))) - ((-(min((arr_0 [i_7] [i_5]), var_16))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_25 = ((+(((!((((arr_24 [i_5] [i_6] [i_7] [i_8] [i_8] [i_8] [i_9]) ? (arr_18 [i_5] [i_5] [i_5] [i_5]) : (arr_3 [i_6] [i_6])))))))));
                                var_26 = (((4 < (((arr_5 [i_5] [i_9]) ? (arr_7 [i_5] [i_6] [i_7] [i_8]) : (arr_19 [i_5] [i_6] [i_5] [i_5]))))) ? 4294967285 : ((((max(11203, (arr_2 [i_5])))) ? 45 : (arr_18 [i_5] [i_6] [i_8] [i_9]))));
                                var_27 = (((((arr_25 [i_5] [i_6] [i_6] [i_8] [i_9]) ? (arr_25 [i_5] [i_6] [i_6] [i_8] [i_9]) : (arr_25 [i_9] [i_8] [i_6] [i_6] [i_5])))) ? ((((((arr_13 [i_5]) + 2147483647)) << (((arr_20 [i_5] [i_6] [i_7] [i_9]) - 26))))) : (max(var_4, (arr_13 [i_5]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = (~var_8);
    #pragma endscop
}
