/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 32767;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 *= (max((max((var_10 - 212), (0 > 8))), 0));
                arr_6 [i_0] [i_0] = ((((11821103342040041796 * 1) * (((((arr_0 [i_0] [i_1]) <= var_12)))))));
                arr_7 [i_0] = (((((-8343209151389016737 ^ -19309) ? ((((arr_2 [10] [i_1]) + var_2))) : -6625640731669509819)) & ((max(var_5, (~1307788830))))));
                arr_8 [i_0] = ((+((max((!var_5), (!-7755621516460259803))))));
                var_15 = 11821103342040041796;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_16 = (max(11821103342040041797, (((19308 >> (max((arr_11 [12]), 0)))))));
                            arr_21 [i_2] = 11821103342040041772;
                            var_17 = (var_4 ^ 237);
                            arr_22 [i_4] [12] [12] [i_2] &= (((98 < var_1) ? 195 : -1246261484));
                            var_18 = ((((((-19336 + -77) ^ (arr_18 [i_2] [i_2] [i_4] [i_4] [i_5])))) ? (((max((1 == 182), 1)))) : (((19313 >= 1) + ((var_7 ? var_10 : var_6))))));
                        }
                    }
                }
                var_19 = (min(var_19, ((((~var_2) % (((var_6 || (arr_10 [4] [i_3 - 1])))))))));
            }
        }
    }
    #pragma endscop
}
