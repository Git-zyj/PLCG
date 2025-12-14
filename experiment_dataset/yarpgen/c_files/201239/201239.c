/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((((var_10 + var_13) + (((var_2 ? var_10 : var_11))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_10, (max((((arr_5 [i_2]) ^ (arr_3 [i_0]))), ((min((arr_3 [i_0]), var_5)))))));
                                var_16 &= (((((((((arr_12 [i_0] [i_1] [i_2] [i_3] [4]) ? var_2 : (arr_11 [i_0] [i_1] [i_2] [i_3])))) ? (((max(var_3, var_6)))) : (arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4])))) ? ((((max(12828323139143620459, var_4))) ? (((5377822017243530410 ? 9984 : var_10))) : (min((arr_9 [10] [i_3]), var_8)))) : var_8));
                                var_17 = 5928982713426851731;
                                var_18 = ((((max((arr_3 [i_0]), (((arr_12 [i_0] [i_1] [i_2] [i_0] [i_1]) ? var_12 : 2147483647))))) ? ((max(2147483641, 903763069))) : ((((max(-1229138077, 61751))) / (max((arr_9 [i_1] [i_3]), var_5))))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_2] [8] |= ((6630746985232869319 ? (((1229138077 >> (var_10 - 205)))) : ((((((((arr_4 [i_1] [i_2]) << (var_3 - 210)))) == -var_11))))));
                    arr_15 [i_0] [i_1] [i_2] = (((!8595061383027195323) && ((!(((4268825396 ? var_11 : var_7)))))));
                }
            }
        }
    }
    #pragma endscop
}
