/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_18 *= (((((max(var_4, 25045)) ? (255 >= -65) : ((max(-121, 249)))))));
                        arr_9 [i_0] [i_0] [i_0] [i_3] = ((var_5 ? ((((var_8 ? var_0 : var_5)) << (((~var_8) + 36)))) : 220));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        arr_12 [i_4] = (((~52) ? -var_6 : var_13));
                        var_19 -= (((((252 >> (((arr_3 [i_2] [i_2]) - 54508))))) ? 7 : (arr_8 [i_4 - 1] [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1])));
                    }
                    var_20 = ((((min((~var_12), (~49392)))) ? (min(var_11, var_1)) : ((~((252 ? 32372 : 18046757481192207199))))));
                    var_21 = (max((((49 ? var_2 : var_1))), ((((arr_4 [i_1] [i_1] [i_1]) && (~-32765))))));
                }
            }
        }
    }
    var_22 = -7;
    var_23 = var_4;
    var_24 = var_4;
    #pragma endscop
}
