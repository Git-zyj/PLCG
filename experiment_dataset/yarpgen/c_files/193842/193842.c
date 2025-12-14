/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= var_7;
    var_12 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] = (max(((~(var_0 & -1119359917))), (((((18446744073709551599 ? 45 : -32765))) ? var_3 : ((var_3 ^ (arr_2 [i_1] [i_1] [i_1])))))));
                                arr_14 [i_1] [i_1] [i_1] = ((6799259286593069888 ? -1119359911 : 10787002403315497709));
                                arr_15 [i_0] [i_0] [i_0] [i_1] = (-1119359916 ? var_3 : ((((var_7 ? -184305546633246206 : var_10)) / ((var_4 ? 184305546633246221 : -1119359941)))));
                                var_13 = ((var_7 ? (arr_3 [i_0 + 2]) : 7659741670394053925));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((var_8 != ((min(165, var_8)))));
                            }
                        }
                    }
                }
                var_14 = (((arr_2 [i_0] [i_1] [i_1]) ? ((~(arr_1 [i_0 + 3]))) : var_5));
                var_15 = (min((((arr_9 [i_0] [i_0] [i_1] [i_0 - 1]) ? (arr_9 [i_0] [i_0] [i_1] [i_0 - 1]) : (arr_9 [i_0] [i_0] [i_1] [i_0 + 2]))), ((~(arr_9 [i_0] [i_0] [i_1] [i_0 + 3])))));
                arr_17 [i_1] = -14280;
            }
        }
    }
    #pragma endscop
}
