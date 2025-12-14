/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (((((var_4 ? var_3 : (((~(arr_0 [i_0]))))))) ? 4014978574 : ((((!((min((arr_3 [7]), var_7)))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_15 = ((((48131 ? 2013265920 : 6250092979061202999))) ? 42 : ((13397422321170857647 >> (-12754 + 12768))));
                            var_16 = (max(var_16, var_0));
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_2] = (max(((((arr_7 [15] [i_1 - 1] [i_1 - 1]) && ((max(399256255, -6250092979061203009)))))), (max((-1851883804 && var_1), ((6250092979061203003 ? var_9 : 27))))));
                            arr_14 [i_0] [i_0] [i_1] [i_2] [i_3] = (((((~(arr_0 [i_2])))) ? -6250092979061203009 : (arr_7 [i_0] [i_1] [i_3])));
                        }
                    }
                }
                var_17 = 399256255;
                var_18 = (((((~67) & (~625945253))) & ((-22 & ((1 ? -125 : (arr_11 [i_1] [i_0])))))));
            }
        }
    }
    var_19 = var_5;
    var_20 = ((var_9 * (((-15462 ? -1371980713 : 58594831)))));
    var_21 = (min(0, (min(((min(var_14, var_8))), (max(6250092979061203009, var_5))))));
    #pragma endscop
}
