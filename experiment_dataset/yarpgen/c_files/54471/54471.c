/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (~var_12);
    var_14 = (min(var_14, var_1));
    var_15 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = (arr_3 [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_17 = (((-2147483647 - 1) ? (max((((254 | (arr_2 [i_3] [i_2])))), (13 % 1103404886653018114))) : ((((arr_10 [i_0] [5] [i_2] [7]) * (arr_10 [i_0] [i_0] [i_0] [i_0]))))));
                            var_18 = (min((max(0, ((((-9223372036854775807 - 1) < 15389))))), 1));
                        }
                    }
                }
                arr_11 [i_0] [i_0] = 4125343707;
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_19 = -1103404886653018114;
                                var_20 = (min(var_20, ((min(((max((arr_4 [i_0]), -1743271654))), (0 < -773896601))))));
                                var_21 = (min((arr_18 [i_0] [i_1] [i_0] [18] [10]), (((-(((arr_3 [i_1]) ? 9768 : (arr_0 [i_4] [i_5 - 3]))))))));
                            }
                        }
                    }
                }
                arr_20 [i_0] = ((((((((min(var_2, (arr_2 [i_0] [i_0]))))) / 1103404886653018129))) ? (((44408 - 1) ? 114 : (1103404886653018114 / -1286181460))) : (min(25910, (max(1, -2912294661960754206))))));
            }
        }
    }
    #pragma endscop
}
