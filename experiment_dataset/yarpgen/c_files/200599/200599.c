/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_11 = ((((((var_3 | (arr_3 [i_1] [i_1] [i_2]))) & (-43 | var_9))) | (((((-86 & (arr_0 [i_1] [i_0])))) & (var_9 | var_9)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_2] [i_0] [i_1] [i_2] = (((((((((arr_10 [i_1 - 2] [i_1]) || 86))) >> (-93 <= 102)))) - (((var_6 == var_4) % (184 + var_8)))));
                                var_12 = (min(var_12, (64 > 93)));
                                var_13 = (max(var_13, ((((((-16492 <= 0) == (((arr_0 [i_0] [i_1]) * 18096)))) && ((((0 >= 9223372036854775792) | (1215835558 % -6616)))))))));
                            }
                        }
                    }
                    var_14 = (((65535 | 928455694) & ((((((arr_7 [i_1 + 2] [i_1 + 2] [i_0] [i_0]) % var_5)) < ((((93 <= (arr_1 [i_2]))))))))));
                }
            }
        }
    }
    var_15 *= (((((13151 + 53905357) || (var_3 <= 18089))) || ((((var_7 / 209) * (-8959697099032595014 < 1966192541))))));
    #pragma endscop
}
