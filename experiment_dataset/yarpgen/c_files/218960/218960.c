/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 144115050636902400;
    var_11 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 = -899238691;
                    arr_11 [i_0] [i_0] [i_0] = (max(((min((arr_4 [i_0]), 0))), (max((arr_6 [i_0] [i_1] [i_2]), (arr_3 [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_20 [i_4] [i_1] [i_2] [i_1] [18] &= 1238745042;
                                var_13 = (arr_6 [i_0] [i_2] [i_2]);
                                arr_21 [i_0] [i_1] [18] [i_3] [i_2] [18] [i_3 + 3] |= ((((-1238745043 + (arr_10 [i_3] [i_3] [i_3 + 1] [i_3 + 2]))) % (~1336004645)));
                                var_14 = (min((~var_2), (~1254276897)));
                            }
                        }
                    }
                    var_15 *= (((((arr_16 [i_0] [i_0] [i_1] [i_1] [i_2] [i_1]) ? 1336004645 : (arr_19 [i_0] [i_2] [i_2] [i_1] [i_1] [i_0] [i_1]))) > (arr_12 [i_1] [1] [i_2] [i_1] [i_0])));
                }
            }
        }
    }
    var_16 = var_0;
    #pragma endscop
}
