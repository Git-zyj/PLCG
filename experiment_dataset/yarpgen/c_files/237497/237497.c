/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        var_16 = (((((4 ? 9 : 251))) ? ((((!var_5) >= (var_14 && var_2)))) : 2));

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_17 = (min(var_17, var_6));
                            arr_17 [i_2] [i_1] [i_2 - 1] [i_2 - 1] [i_3] [i_3] [i_4] = (((((8 - 11) ? (var_8 != var_10) : (102 != var_7)))) ? ((4 ? 4949974404941521398 : 26)) : ((max((31 ^ 147), (255 ^ 25)))));
                            var_18 = (min(var_18, (arr_5 [i_2 - 1] [i_2])));
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_19 = var_3;
                            arr_21 [i_2] [i_2] = ((((-(16355 == var_9)))) && (((-(-995328027 == var_6)))));
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            arr_24 [i_0] [i_0] [i_1] [i_3 - 1] [i_6] |= ((-38 ? 13282534523149133818 : 1));
                            var_20 = 4949974404941521401;
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_21 *= 4949974404941521392;
                            var_22 = (min(var_22, (-4949974404941521390 >= 82)));
                        }
                    }
                    var_23 = (max(var_23, ((min(((((max(-1979771151, -761095004))) & 11351666765165856513)), ((((62 - var_3) != var_3))))))));
                    arr_29 [i_0] [i_2] [6] = (((((-761095031 ^ 761094995) == var_6)) ? (!var_6) : -var_12));
                }
            }
        }
    }
    #pragma endscop
}
