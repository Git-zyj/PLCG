/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [18] = (((!-681460156) >> (((arr_6 [i_0] [i_0] [i_1] [i_2]) + 1298665647))));
                    var_14 = (!18446744073709551615);
                    arr_9 [i_0] [i_0] [i_1] [i_2] = (1 != 2147483636);
                }
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_15 = (min(0, ((max((arr_4 [i_0] [i_0] [i_0]), 21461)))));
                                var_16 &= ((((!(arr_0 [i_3]))) && ((!(arr_14 [i_0] [i_3] [i_3])))));
                            }
                        }
                    }
                }
                var_17 = ((103 ? (((var_12 && (arr_13 [i_1] [i_1] [i_1] [i_1])))) : (~5)));
                var_18 += ((var_12 && ((618097844 || ((min(-3063154634874608450, 15355474401416271879)))))));
            }
        }
    }
    var_19 = var_6;
    #pragma endscop
}
