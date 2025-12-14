/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_9 ? (max(516886034, 12)) : var_0))) ? (max((15 << 15), var_3)) : var_9));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0 - 1] [i_1] = (((max((arr_0 [i_0 + 1]), var_8)) ^ (((arr_0 [i_0 + 3]) << (((arr_0 [i_0 + 4]) - 2950405387))))));
                var_11 = (max(var_11, 48));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    var_12 = (((arr_8 [i_2 + 1] [i_2] [i_2]) | var_8));
                    var_13 = 33;
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((~(arr_2 [i_0 + 3])));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 15;i_3 += 1) /* same iter space */
                {
                    var_14 = (((arr_10 [i_0 - 2]) && var_3));
                    var_15 = (((arr_10 [i_3 + 1]) ? (arr_10 [i_3 - 1]) : 32));

                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_16 = ((arr_3 [i_0 + 2] [i_3 - 1]) ^ (arr_4 [i_0 - 2] [i_0 - 1]));

                        for (int i_5 = 3; i_5 < 15;i_5 += 1)
                        {
                            var_17 = ((var_6 ? (arr_14 [i_0 - 2] [i_3 - 1]) : (arr_14 [i_0 + 2] [i_3 + 1])));
                            var_18 = (arr_0 [i_3 + 1]);
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_19 = ((+(((arr_13 [i_0] [i_0 - 1] [i_0 + 3] [i_0]) ? var_3 : var_5))));
                            var_20 += (arr_8 [i_0] [i_1] [i_0 + 2]);
                            var_21 = var_5;
                        }
                        var_22 = 27;
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        arr_25 [i_3] = ((-(arr_24 [i_3 - 1] [i_0] [i_0] [i_0 - 2])));
                        var_23 = (((((59 << (4294967295 - 4294967289)))) ? 250 : 5));
                        var_24 -= var_1;

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_25 = -847039343;
                            arr_30 [i_8] [i_3] [i_3] [i_0] = (((arr_13 [i_0] [i_0] [i_0 + 1] [i_3 - 1]) << (((arr_12 [i_0] [i_1] [i_3] [i_7] [i_8] [i_0]) - 8997138217920708116))));
                            var_26 += (((arr_4 [8] [i_0 + 2]) % (arr_14 [i_0 - 1] [i_0])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
