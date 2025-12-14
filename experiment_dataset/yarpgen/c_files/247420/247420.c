/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~((~(11840500330062689785 ^ var_15)))));
    var_18 = ((max(var_15, 512)) + (((~(min(2997501769, var_7))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_19 = ((((-((4294967289 ? 0 : 14734839984103062011)))) == ((max((arr_8 [i_2 + 1]), 7)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_16 [6] [i_1] [i_0] [i_3] [i_4] = 3264323340;
                                var_20 *= ((var_5 - 1) ? (arr_13 [i_1] [i_1 + 1] [i_2 - 1] [i_4] [2]) : ((((1 - var_1) / 3264323329))));
                                var_21 += arr_3 [1] [4] [4];
                            }
                        }
                    }
                    arr_17 [i_0 - 1] [i_0] [i_0] [1] = 1;
                }
            }
        }
    }
    var_22 = ((max(3003763737675370751, 1)));
    #pragma endscop
}
