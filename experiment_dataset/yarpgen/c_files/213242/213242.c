/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    var_21 = ((1 ? (((1 ? 108 : ((2830439009 ? -5 : 5720))))) : ((5 ? ((54 ? -2959023805561169878 : 3988480301)) : 0))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_22 = (max(var_22, var_13));
                    var_23 = (min(var_23, (((((5 ? var_10 : -5130771942429030332)))))));
                    arr_9 [i_1] = (((0 ? (((-7768 ? -5 : -13))) : (((arr_8 [i_2] [i_2] [i_2] [i_2]) ? (arr_2 [i_0] [i_0]) : var_0)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_24 -= (-1 ? (((((9 ? 1 : 1550236121))) ? (arr_13 [i_0] [i_0]) : (((arr_11 [i_4] [i_2]) ? var_13 : 52)))) : (((((2959023805561169861 ? (arr_11 [i_0] [i_4]) : var_9))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_1] = (((-127 - 1) ? (((var_16 ? -2959023805561169878 : ((4431333359343519847 ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_12))))) : (((((4611686018427387903 ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : 2457428906))) ? (arr_4 [i_2]) : (((arr_2 [i_0] [i_0]) ? 0 : var_13))))));
                                arr_16 [i_1] [i_1] = (((-109 ? var_4 : (((var_7 ? 1 : 16486))))));
                                arr_17 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1] [i_0] = 255;
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (max(var_25, (((var_5 ? ((52 ? var_9 : var_16)) : 47250)))));
    #pragma endscop
}
