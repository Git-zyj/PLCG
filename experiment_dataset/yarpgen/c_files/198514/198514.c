/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= 16368;
    var_11 = (!((min(16368, var_4))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_12 -= ((((((((var_1 / (arr_4 [i_4])))) ? ((-(arr_8 [i_4] [i_1] [0]))) : (((min(49168, var_0))))))) / ((-(2222038765011888910 + -501450618)))));
                                var_13 = (min(var_13, ((((max((arr_11 [i_0] [i_1] [i_0] [i_3] [i_4]), (arr_11 [i_0 - 1] [i_2 + 1] [i_3 - 1] [i_3 + 3] [i_4 - 1])))) ? (((19 * 3077103823) + (max(3077103835, 1)))) : -16379))));
                                var_14 = ((((((arr_1 [3]) || 32764))) != (((arr_1 [i_0]) ? (arr_6 [i_0] [i_1] [i_2] [i_0 - 1]) : (arr_6 [i_0] [i_1] [0] [i_0 - 1])))));
                                var_15 |= 182;
                            }
                        }
                    }
                    var_16 *= (min(((((((arr_7 [i_0]) ? var_5 : 1217863455))) ? (((1689843582 ? (arr_6 [i_0] [i_0] [i_1] [i_2]) : (arr_12 [i_0] [i_1] [i_2])))) : ((-17 ? 3077103827 : var_4)))), ((((((arr_1 [8]) || var_1)) && ((min(250, (arr_12 [i_0] [0] [i_2])))))))));
                    var_17 += (min(((1 ^ (min(1514481540, 707426795)))), (min((arr_7 [i_0]), (!var_2)))));
                }
            }
        }
    }
    #pragma endscop
}
