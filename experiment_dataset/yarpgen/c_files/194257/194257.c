/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_9 [i_1] [i_3 - 1] [1] [i_1] [i_1] = ((((var_3 >= ((min((arr_0 [i_0]), 30073))))) ? (arr_1 [i_0]) : (((((((arr_1 [i_3 - 2]) >= var_9))) < (!36))))));
                            var_10 = (min((!37), 15812196002839588359));

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                var_11 ^= (255 == 15259);
                                arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] = (arr_8 [i_2 + 1]);
                                var_12 ^= (arr_4 [i_0]);
                            }
                            var_13 = (((arr_7 [7] [i_1 - 1] [i_1] [i_2 + 2] [i_3]) < ((((arr_7 [4] [i_1 + 2] [i_1] [i_1 + 2] [i_1 + 1]) == (arr_7 [i_0] [17] [i_1] [i_2 + 1] [2]))))));
                            arr_15 [i_3 - 1] [i_1] [i_1] [i_0] = var_4;
                        }
                    }
                }

                for (int i_5 = 4; i_5 < 18;i_5 += 1)
                {

                    for (int i_6 = 2; i_6 < 18;i_6 += 1)
                    {
                        var_14 ^= ((-4954135223454456186 && 300511224) || 15259);
                        arr_21 [i_6] [i_1] [4] = ((-28 & ((50099 ? 127 : -6540058344705097885))));
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_15 = (max(var_15, (((-7402 ? (237 < 13) : -300511246)))));
                        var_16 = (arr_13 [i_1] [11] [i_5 + 1] [i_1 - 1] [i_1]);
                    }
                    arr_26 [i_1 - 1] [i_1] = 1429175726;
                }
            }
        }
    }
    var_17 ^= ((var_7 ? (min(20, 11181802094650610942)) : (~var_5)));
    #pragma endscop
}
