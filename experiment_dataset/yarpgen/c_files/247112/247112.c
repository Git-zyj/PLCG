/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((max((var_6 || -1015751952), -var_7)))));
    var_11 += (((min((~14100109143058645861), var_0)) < (~var_3)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_0] = (min((((((arr_7 [i_2]) ? var_7 : (arr_4 [i_2]))))), (((min(4346634930650905735, (arr_0 [i_2]))) % (14100109143058645854 ^ var_8)))));
                    arr_9 [i_2] [i_1] [i_0] = ((!(((~(arr_6 [i_0] [i_1] [i_2]))))));

                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_2] = (arr_1 [i_3 - 1] [i_1]);
                        var_12 = (min((((-(arr_5 [i_2])))), (min((arr_0 [i_1]), 2750873313))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] = (((max((max(-1015751952, var_3)), (arr_7 [i_1]))) % (((arr_0 [i_3 + 1]) ^ ((((arr_0 [i_3]) == 65523)))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                arr_21 [i_1] [i_5] = (arr_1 [i_0] [i_0]);
                                var_13 = (((max(1015751951, (arr_17 [i_0] [i_0]))) ^ (((arr_17 [i_0] [i_0]) ? 62006 : 22134))));
                                var_14 &= (+-1544093957);
                                var_15 *= (arr_15 [i_5]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
