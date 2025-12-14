/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((((((32767 ? var_6 : 17))) ? (255 | var_11) : ((max(40844, 54698))))), (~21662)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    var_16 = var_5;
                    var_17 -= (13 % var_2);
                    var_18 = (arr_7 [i_1 + 1]);
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_19 = (min(var_19, 2743582731294148362));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_20 ^= -1945580199;
                                arr_16 [i_1] [i_3] [8] = -0;
                                var_21 = (arr_2 [i_0] [2]);
                                var_22 = ((min((~-22340), 1168529294365875687)));
                            }
                        }
                    }
                }
                var_23 *= ((((min((arr_15 [6] [6] [8] [i_1 - 2] [i_1 + 1]), (arr_12 [i_1 + 1] [i_1 - 1])))) ? ((((-14 >= (arr_15 [i_1 - 1] [10] [8] [i_1 - 3] [i_1 + 2]))))) : (arr_12 [i_1 + 2] [i_1 - 1])));
            }
        }
    }
    #pragma endscop
}
