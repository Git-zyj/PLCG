/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2616
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
                var_19 = (arr_3 [i_0] [i_0] [i_1]);
                arr_4 [i_0] [i_0] [i_0] = ((!(arr_3 [i_0] [i_0] [i_1])));
                var_20 = ((+(max((arr_1 [i_0]), (((!(arr_2 [i_0] [i_0] [0]))))))));
            }
        }
    }
    var_21 = (min(var_21, ((((~46) % -1)))));
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 8;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_22 = (max(var_22, (((var_12 ? (((((-7067888631290646411 ? 255 : 255))) ? -7067888631290646402 : (((min(var_7, 267)))))) : (var_2 & -var_1))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_23 = ((((((arr_17 [i_2] [i_2] [i_2] [10]) / ((min(-1371784058, var_7)))))) || (31457280 % 18446744073709551615)));
                                var_24 = ((!((max((arr_0 [i_3]), 7243743259807804102)))));
                            }
                        }
                    }
                    var_25 = (min((min((~var_7), 52975)), (((1062805815 == -24670) & 0))));
                    var_26 = (max(var_26, ((((((~((var_10 ? 2106097537 : (arr_1 [i_2])))))) ? ((max((arr_6 [i_2] [i_4]), var_2))) : ((((max(1800268656, 1))) ? 108 : (var_7 - var_10))))))));
                }
            }
        }
    }
    var_27 = (255 >= var_4);
    #pragma endscop
}
