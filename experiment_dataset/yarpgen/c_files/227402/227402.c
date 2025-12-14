/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_12, (!var_14)));
    var_17 = ((!var_13) == var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] = ((-((-(((arr_7 [16] [i_1] [i_2] [i_3]) + (arr_9 [i_1])))))));

                            for (int i_4 = 1; i_4 < 17;i_4 += 1)
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_3] [i_0] = ((0 ? 11 : 14));
                                arr_16 [i_1] [i_1] [i_1] [i_3] [i_4] = var_2;
                            }
                        }
                    }
                }
                var_18 = (max(443232771, 1));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_19 = (i_1 % 2 == zero) ? ((((((((min((arr_7 [i_0] [i_1] [i_5] [i_6]), (arr_21 [18] [i_1])))) && ((((arr_12 [15] [i_1] [i_5] [i_6] [i_1]) >> (((arr_13 [i_1] [i_6] [i_5] [i_1] [i_1]) + 3328071432557207501)))))))) * (arr_6 [i_1] [i_5] [i_1])))) : ((((((((min((arr_7 [i_0] [i_1] [i_5] [i_6]), (arr_21 [18] [i_1])))) && ((((arr_12 [15] [i_1] [i_5] [i_6] [i_1]) >> (((((arr_13 [i_1] [i_6] [i_5] [i_1] [i_1]) + 3328071432557207501)) - 5663293826511707929)))))))) * (arr_6 [i_1] [i_5] [i_1]))));
                            var_20 = (min(1, 21));
                            var_21 = (min((arr_11 [15] [i_1] [i_1] [i_1] [i_1] [i_1]), ((~(arr_8 [i_0] [i_1] [i_0])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
