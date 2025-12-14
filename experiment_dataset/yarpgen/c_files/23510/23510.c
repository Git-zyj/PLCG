/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    var_16 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 |= (max((69805794224242688 + 0), 0));
                    var_18 = (0 | 3230555654223258354);

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_3] [i_3] |= ((((((((12 ? -8393 : 1))) ? ((0 ? 1 : 4)) : 18446744073709551612))) ? ((((((1 ? 3 : 7))) || 55188))) : ((((max(2147483647, 1))) ? 0 : (11 <= 0)))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            arr_14 [i_1] = (-11 >= 20);
                            var_19 = (min(var_19, (((7128 ? (1 - -3) : -2083054695)))));
                            var_20 = 31786;
                        }
                        for (int i_5 = 1; i_5 < 14;i_5 += 1)
                        {
                            var_21 = 1;
                            var_22 = (min(var_22, ((((((127 ? -31 : 18446744073709551586)) | (2012331976 | 57)))))));
                            var_23 -= -31;
                        }
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = (min(((((((49993 ? 4905032342835766847 : 9223372036854775795))) || (6059293909698341877 || 25594)))), (max(((23 ? 20 : 48)), (!1588070903)))));
                        arr_18 [i_0] [i_1] [i_0] [i_0] = ((((213 ? ((18446744073709551602 ? 21 : 1840286118)) : 8))) ? (5108 || 1926114246) : ((20 ? (!15152) : 24)));
                    }
                    var_24 = ((((max(39571, 30))) / 30));
                }
            }
        }
    }
    #pragma endscop
}
