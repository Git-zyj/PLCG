/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 = ((!((!((!(arr_3 [i_0] [i_1])))))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = 1;
                    var_21 *= (((((((((arr_0 [i_0]) <= (arr_9 [i_1] [i_2])))) >> 7))) ? ((((-var_3 || (!var_1))))) : (~18446744073709551615)));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 19;i_5 += 1)
            {
                {
                    arr_21 [i_5] = ((((((!(arr_1 [13]))) || ((!(arr_1 [i_5]))))) && (((!640334728) > (((arr_8 [i_4] [i_4] [i_5] [i_4]) ? -80 : -93))))));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_22 = (((max(((-8759 > (arr_5 [i_3] [i_7]))), (((arr_27 [i_5] [i_4] [i_4] [i_4] [i_4]) && 8740)))) ? (~65535) : (arr_0 [i_7])));
                                arr_28 [i_3] [i_3] [i_5] [i_5] = ((~((((max((arr_1 [i_3]), -8738))) ? (min((arr_15 [i_3] [i_4] [i_7]), 30761)) : (~1)))));
                                arr_29 [i_6] [i_4] [i_5] = (arr_8 [i_3 - 1] [7] [i_5 + 1] [i_3 - 1]);
                            }
                        }
                    }
                    var_23 = 21616;
                }
            }
        }
    }
    var_24 = (max(var_24, 4887847420470553853));
    var_25 *= var_14;
    #pragma endscop
}
