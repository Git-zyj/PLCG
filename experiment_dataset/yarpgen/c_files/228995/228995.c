/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((((1 ? 1263846912 : 17974))) ? 16383 : (var_7 < var_1))) % var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, var_1));
                    var_14 -= -17974;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_3] = (((arr_9 [i_0] [i_1] [i_2] [i_4]) << (((max(((var_1 >> (((-127 - 1) + 145)))), ((440 | (arr_12 [i_0] [i_0] [i_4]))))) - 443))));
                                var_15 ^= ((~(((((((arr_5 [10] [8]) ? (arr_2 [i_0]) : 1770849089))) || 3351)))));
                                arr_14 [i_4] [i_1] [i_2] [i_4] [i_2] [i_4] [6] = ((-(arr_6 [i_0] [i_0])));
                            }
                        }
                    }
                    arr_15 [i_0] = 2172567145;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_16 = (min(var_16, 0));
                                arr_21 [i_6] [i_5] [0] [0] [i_0] = var_7;
                                arr_22 [i_0] [i_1] = 4;
                                arr_23 [2] [i_2] [i_2] [i_2] [i_2] = ((!(arr_20 [i_0] [5])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (min((~var_5), ((var_11 ? (!var_11) : -1460727703))));

    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        {
                            var_18 = (arr_24 [i_11]);
                            arr_38 [i_11] |= (26705 ? -var_2 : ((7118 ? 17961 : 2047)));
                            var_19 = (max(var_19, (!128)));
                        }
                    }
                }
            }
            var_20 -= 29218;
        }
        arr_39 [i_7] = (~var_8);
    }
    var_21 = var_2;
    #pragma endscop
}
