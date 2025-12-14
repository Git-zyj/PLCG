/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;
    var_19 = ((-((~(65535 != 0)))));
    var_20 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = ((4294967295 > (-32767 - 1)));
                var_22 = (((arr_4 [i_1 + 1]) ? (((!(arr_5 [i_0] [i_0] [i_0])))) : (((!((var_2 == (arr_4 [i_1]))))))));

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    arr_8 [i_0] [i_2] [i_2 + 2] = ((((((arr_5 [12] [9] [i_2]) < 0)) || (arr_5 [i_0] [1] [i_0]))));
                    var_23 += ((((((2628012516 | 2628012516) & ((~(arr_0 [i_2])))))) ? (((4285248737 & -134217728) ? 69 : (max(var_0, var_17)))) : ((((~var_6) ^ (arr_5 [i_0] [i_2 - 1] [i_2]))))));
                    var_24 = (arr_6 [i_2] [i_1 - 2] [i_2 + 2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_25 = ((((36028796482093056 ? 10792547555114466217 : 16794399681469286179))) ? (((~(arr_6 [i_2] [i_1 + 2] [i_4 - 2])))) : (((arr_11 [i_0] [i_1] [i_0] [i_3]) ? (~var_5) : var_8)));
                                arr_14 [i_2] [i_1] [i_3] = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
