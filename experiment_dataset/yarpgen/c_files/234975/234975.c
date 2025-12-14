/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 13113980389056214092;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = var_3;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = 383295252619389858;
                                var_12 = (max(var_12, ((min((min(-var_2, (91 * 1))), ((1 ? ((min(1, 1))) : ((2 >> (8886818520495023992 - 8886818520495023977))))))))));
                                var_13 = ((((((max(var_6, 12043191642315657115))) || ((max(11, var_3))))) ? ((var_3 ? -383295252619389859 : var_4)) : (((-1 ? (var_5 != 18446744073709551615) : ((max(57, var_1))))))));
                                arr_17 [i_0] [2] [i_0] [5] [i_0] = ((+(min((1 && 1), (max(15095639078441007154, 1))))));
                                var_14 = ((((((((var_0 ? 1 : -116))) | (var_4 ^ 227)))) ? (((32768 ? 12717 : var_1))) : ((((max(12469298542632851623, -892383696418493752))) ? 169 : (max(12469298542632851623, var_9))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 &= (((((((var_6 ? var_5 : 6524203411083993925))))) / (((min(1, var_4)) * var_10))));
    #pragma endscop
}
