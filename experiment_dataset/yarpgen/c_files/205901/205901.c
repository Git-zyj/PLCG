/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((((((((var_10 ? 24211 : -18048)) > (1 && var_18)))) > (((1 && -88) << (var_8 - 8845))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] = (((((87 < (arr_1 [i_1] [6])))) < ((~(~-46)))));
                    var_21 = ((~(((arr_2 [10] [i_1] [10]) << (((arr_2 [i_0] [i_1] [i_2]) - 15025624673265134505))))));
                }
                for (int i_3 = 3; i_3 < 13;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_22 -= arr_2 [i_1] [i_3 - 3] [i_1];
                                var_23 &= ((((arr_10 [i_4 - 1]) ^ 36028796951855104)));
                            }
                        }
                    }
                    var_24 &= 86;
                }
                var_25 = ((+(((((arr_12 [i_0] [i_1] [i_0] [i_0]) == (arr_3 [i_0]))) ? 1531358351502663561 : (!0)))));
            }
        }
    }
    var_26 = (var_0 ? (((0 && (-41 && var_2)))) : var_6);
    var_27 = ((((!(var_5 == 18410715276757696520))) ? (((-((5 ? 118 : var_9))))) : ((-16 / (((var_15 ? -18056 : var_9)))))));
    #pragma endscop
}
