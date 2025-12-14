/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_1;
    var_12 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_13 = (((((-29054 ? (arr_7 [i_1] [i_3] [i_1] [i_1]) : var_9))) ? (~var_8) : 991155952600662011));
                                var_14 = ((-991155952600662030 ? -684662023 : 758759068));
                                var_15 = var_2;
                                var_16 = (max((((-684662005 <= (arr_9 [i_4] [i_4] [i_3] [i_2] [i_1] [i_0])))), (((arr_9 [i_0] [i_1] [i_2] [i_2] [0] [i_4]) ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            }
                        }
                    }
                    var_17 = 684662041;
                }
            }
        }
    }
    var_18 ^= ((min(var_8, -684662020)));
    #pragma endscop
}
