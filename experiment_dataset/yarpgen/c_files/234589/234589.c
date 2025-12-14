/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 = (min(var_3, ((((~(arr_2 [i_0]))) | (var_0 > var_5)))));
                    var_14 = (max((max(18446744073709551615, -43)), (((var_1 >= (var_8 >= var_1))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 = 285648151;
                                var_16 = (arr_9 [15] [i_1]);
                                var_17 = (min(var_17, (((((!((max(var_4, 82))))) ? ((((min(var_1, var_10))) ? (((4294967293 ? (arr_0 [i_2]) : var_10))) : (((arr_2 [i_2]) ? (arr_11 [i_1]) : var_5)))) : ((((((2472508200541162415 ? (arr_5 [i_0 - 2] [i_2] [i_3 - 1]) : (arr_4 [14]))) >= (((7275 ? -37 : var_7))))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = 1;
    var_19 = var_5;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    var_20 = ((+(((arr_1 [i_6] [i_6]) ? (((arr_20 [i_5] [i_6] [i_6] [i_7]) ^ (arr_2 [i_7]))) : (4294967294 - 4294967286)))));
                    var_21 = ((arr_0 [8]) ? var_8 : (min((arr_5 [i_5] [14] [i_5]), 20)));
                    var_22 = (((((1 ? (arr_17 [6] [i_6] [i_7]) : -87)) < (~248911477))));
                }
            }
        }
    }
    #pragma endscop
}
