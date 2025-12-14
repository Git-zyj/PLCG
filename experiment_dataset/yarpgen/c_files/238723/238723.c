/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] = 38420;
                var_12 &= (max(13041, 4294967295));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_13 = (arr_11 [i_0] [i_0] [i_2] [i_3]);

                            for (int i_4 = 0; i_4 < 22;i_4 += 1)
                            {
                                var_14 = ((var_8 ? ((min(var_9, (~var_4)))) : (92 + var_2)));
                                var_15 = (min(var_15, 4294967290));
                            }
                            for (int i_5 = 3; i_5 < 21;i_5 += 1)
                            {
                                arr_21 [i_0] [i_1] [i_0] [i_3] [i_2] |= ((~(max((arr_6 [i_1] [i_2] [i_2]), (arr_12 [i_2] [i_2 + 2] [i_2] [i_2 + 1])))));
                                arr_22 [18] [i_1] [i_1] [i_1] [i_5] = 0;
                            }
                            for (int i_6 = 0; i_6 < 22;i_6 += 1)
                            {
                                var_16 = (arr_8 [i_1] [i_1]);
                                arr_25 [i_0] [i_1] [i_2 + 2] [i_2] [i_3] [i_3] [i_1] = (max(((4294967288 ? (var_11 + 30) : (2308318704 + 47510))), (((4209526777 ? (((arr_13 [i_1] [i_1]) ? 23120 : -6323)) : (arr_9 [i_0] [i_0] [i_0] [i_6]))))));
                            }
                            arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] = (((((((arr_20 [i_1] [i_1] [i_2] [i_1] [i_2]) ? (arr_16 [i_3] [i_2] [i_2 - 2] [i_2 - 1] [i_1] [i_1] [i_0]) : 32307)) - ((5628 ? (arr_2 [i_2]) : var_3))))) ? (((var_9 ? (arr_9 [i_2 - 1] [11] [i_2 - 1] [i_1]) : (arr_9 [i_2 - 2] [i_2] [i_2 + 1] [i_0])))) : (arr_20 [i_1] [i_1] [i_3] [i_3] [i_3]));
                        }
                    }
                }
            }
        }
    }
    var_17 = 13041;
    #pragma endscop
}
