/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (((var_5 & var_2) ? ((var_0 ? 91 : ((min(var_3, var_1))))) : var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_11 -= (((110 == -31602) ? ((((var_5 || (((30786 ? 3 : -90))))))) : ((-3450351970468823457 ? (0 >= 16) : (~9223372036854775794)))));
                                arr_14 [i_4] [i_1] [3] [i_3] [12] = (((arr_13 [i_0] [i_1] [i_2] [i_3] [i_4]) ? 248 : (((((-1 ? var_8 : (arr_12 [i_0] [i_4] [i_4] [17] [i_4]))) <= ((10330687124232555474 ? var_9 : (arr_7 [i_4] [i_3] [1] [i_1]))))))));
                            }
                        }
                    }
                }
                var_12 = min((min((((arr_4 [17]) ? var_4 : 81809851)), (((30786 ? var_8 : -30786))))), (!-1));
                var_13 = (min((min((((-(arr_8 [i_1] [i_0] [i_0] [i_0])))), var_6)), ((min((arr_5 [i_0] [i_1] [i_0] [i_0]), var_5)))));
                arr_15 [i_0] [i_0] [i_1] = ((((1 >= (-50 <= -17535))) ? ((-(((arr_11 [i_1]) ? var_2 : var_5)))) : (((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) ? ((45306 ? (arr_3 [i_0]) : (arr_6 [i_0] [i_0] [i_1] [i_1]))) : (((arr_8 [i_0] [i_0] [i_0] [i_0]) + var_8))))));
            }
        }
    }
    var_14 = (((((var_7 ? (var_0 / var_9) : -11687040919600233411))) ? (1 > -3) : (((((var_7 ? 2048635457 : 8116056949476996142))) ? 107 : var_8))));
    #pragma endscop
}
