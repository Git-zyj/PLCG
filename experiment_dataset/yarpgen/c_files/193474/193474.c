/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (((+((min((arr_1 [i_0 - 2] [i_0 + 2]), 4941))))))));
                var_20 = (arr_2 [i_0]);
                var_21 = (min((((min((arr_2 [i_0 - 2]), var_8)) * ((((!(arr_1 [3] [i_1]))))))), ((((min((arr_5 [i_1] [0]), (arr_2 [i_0])))) ? (min((arr_5 [i_1] [i_1]), var_11)) : ((min(var_13, (arr_3 [i_0]))))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_1] [i_3 - 2] [i_1] = (arr_12 [15] [7] [i_3] [4]);
                                var_22 = (max(var_22, ((((~(((arr_3 [i_0]) / 7344367317806717295)))) < ((min((((arr_4 [13]) ? 1133856578 : 1011980803)), (~-19))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (max(var_23, var_11));
    var_24 = var_3;
    #pragma endscop
}
