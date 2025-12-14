/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = (-((342 >> (3898495737247677066 - 3898495737247677054))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_17 = ((3641435766 >> (((max((min(3482051456250613893, -2117467325)), -857240866)) - 18446744072852310722))));
                            var_18 = ((-14427497939714867032 >> (((arr_10 [i_0] [i_1] [i_2] [i_3] [i_3]) - 9553188124596761841))));
                            arr_11 [1] [1] [i_2] [i_2] = (min((54219 & 18446744073709551615), (((((max((arr_1 [i_0] [i_0]), 102))) + (((arr_0 [i_0]) ^ (arr_5 [i_2] [1]))))))));
                        }
                    }
                }
                var_19 = ((((((arr_6 [i_0] [i_0] [i_1]) ? ((~(arr_10 [3] [i_0] [i_0] [i_1] [i_1]))) : ((((arr_9 [i_0] [i_0] [i_0]) * (arr_6 [i_0] [i_1] [i_0]))))))) ? ((9962124904404354494 ? 5925001131216174579 : -481474190)) : 653531530));
                arr_12 [i_0] [i_0] [i_1] = ((((((arr_6 [i_1] [i_1] [i_1]) & -var_0))) ? 70 : ((~(~72)))));
            }
        }
    }
    var_20 = var_12;
    var_21 = var_7;
    var_22 = (var_11 == var_3);
    #pragma endscop
}
