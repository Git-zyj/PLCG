/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_12 ^= 3535048303;
                                arr_16 [i_0] [i_0] [i_1] [i_1] [i_2] [13] [i_4] = -1965280762;
                                arr_17 [i_0] [i_1] [12] [10] [i_1] = (((((arr_10 [i_0] [i_0] [i_2] [i_0] [i_2] [i_2 + 2]) ? 148 : (min(1726964246994747345, var_11)))) != (((((-2090696088 + 2147483647) >> (-2036053795 + 2036053818)))))));
                            }
                        }
                    }
                    var_13 = (min(var_13, (((((var_2 <= (arr_11 [i_2] [i_1 + 1] [12] [i_2]))) ? ((489376172 + ((-(arr_8 [i_0] [i_0] [i_2]))))) : (arr_2 [i_1] [i_1 - 1] [10]))))));
                    var_14 += var_7;
                }
            }
        }
    }
    var_15 = ((((((var_10 ? 70 : -1)) <= var_10)) ? 3622367428 : (((-(var_11 > var_5))))));
    var_16 = (((((var_7 ? var_8 : 83))) ? var_11 : 132));
    var_17 = var_4;
    #pragma endscop
}
