/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, 19));
                                var_14 = (-90 - -165129804);
                            }
                        }
                    }
                }
                arr_13 [i_0] [i_0] [1] = ((((max(-1, ((-(arr_2 [i_0] [i_1])))))) ? (~-131637707839077558) : (~68)));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_15 -= (min((min((arr_11 [i_0] [i_1 - 3] [i_0] [i_6 - 1] [i_7] [i_6 - 1] [i_0]), (arr_11 [i_0] [i_1 - 2] [i_0] [i_6 - 1] [i_7] [i_5] [4]))), var_4));
                                var_16 = ((0 % (((arr_1 [i_1 - 1]) % -28527))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 10;i_9 += 1)
                    {
                        {
                            arr_28 [0] [i_1 - 2] [i_8] [1] = 2856212276;
                            arr_29 [i_0] [i_1] [i_1] [i_8] [i_9 - 3] = ((-((((arr_19 [1] [i_9 - 2] [i_9 - 2] [i_9 + 1] [i_9 - 1] [i_0] [i_9]) > (((arr_16 [i_0] [i_0] [1] [i_1] [i_8] [i_0]) ^ 9)))))));
                        }
                    }
                }
                var_17 = -1335633667;
            }
        }
    }
    var_18 = ((var_11 ? var_10 : 1));
    #pragma endscop
}
