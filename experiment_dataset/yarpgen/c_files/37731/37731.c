/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_1 + 2] [i_1 + 2] [i_0 + 1] |= (((-1459160596 || 1459160576) || ((((arr_1 [i_1 + 3]) + (arr_1 [i_1 - 1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 18;i_4 += 1)
                            {
                                var_16 = ((((min((arr_2 [i_0 - 1]), var_3))) ? ((min((arr_2 [i_0 + 1]), (arr_2 [i_0 - 1])))) : (-923881581 * 1)));
                                var_17 = ((((min((max(3087014094, -111)), (!1459160596)))) ? (((var_6 ? var_1 : var_14))) : ((-(var_4 / var_5)))));
                            }
                            for (int i_5 = 0; i_5 < 20;i_5 += 1)
                            {
                                var_18 -= (((9045849501664270339 == 58219) == 1459160595));
                                arr_14 [i_0 + 1] [i_1 + 2] [i_2] [i_3] [i_2] = (((((229 ? (arr_8 [i_0 + 1] [i_1 + 3]) : var_14))) ? ((max(var_11, -1459160596))) : 438020762));
                            }
                            var_19 = (((1 ? 2147352576 : 527010996)));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 16;i_7 += 1)
        {
            {
                arr_19 [i_7] = arr_12 [i_6 - 2];
                var_20 |= (arr_13 [i_6 - 2] [i_6 + 3] [i_6 + 2] [i_6 + 2] [i_6 - 2]);
                arr_20 [i_7] [i_7 - 1] [i_7 + 1] = ((((var_3 != (min(13097452, var_1)))) && ((((var_11 <= var_9) ? (9296 || -1325600670) : ((var_4 ? 13318085001704531277 : var_1)))))));
            }
        }
    }
    var_21 = var_15;
    var_22 = (max(var_22, (1 == var_8)));
    var_23 = (var_8 ? (max(var_3, 10086434727447771692)) : var_4);
    #pragma endscop
}
