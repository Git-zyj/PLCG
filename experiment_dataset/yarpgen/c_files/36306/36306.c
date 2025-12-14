/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_13 += var_12;
        arr_2 [i_0 + 1] = var_6;
        var_14 = ((((min((((var_7 ? var_4 : var_12))), ((var_3 ? 16571798905931756820 : var_0))))) ? var_5 : ((var_1 ? var_4 : 629851269))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0 - 2] [i_2] = ((28 ? ((var_7 ? -8095860015563908605 : var_8)) : ((max(var_1, ((var_4 ? 47 : -4654)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_15 |= 2005849435;
                                var_16 = (max(var_16, ((min(((max(10002, -165831876))), ((var_9 ? var_4 : var_1)))))));
                                arr_13 [i_0] [i_2] [6] [i_3] [i_4] = (max(871205715, ((var_5 ? ((var_10 ? var_7 : 16571798905931756817)) : ((min(28591, 483299079)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (min(var_17, ((min(var_5, ((var_5 ? ((var_1 ? var_10 : var_0)) : var_0)))))));
    var_18 = (max(((var_3 ? var_2 : (((223 ? var_12 : var_12))))), ((((((971043074123165517 ? var_10 : 162))) ? 223 : var_12)))));
    var_19 = 483299078;
    var_20 ^= var_6;
    #pragma endscop
}
