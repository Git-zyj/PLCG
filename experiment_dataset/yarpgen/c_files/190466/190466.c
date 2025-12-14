/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (max(-var_10, ((min((arr_3 [i_0] [i_0] [8]), (arr_3 [i_0] [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_13 [i_3] [i_3] [i_0] [i_1] [i_0] = (2044972757 + 144250589);
                            arr_14 [i_0] [i_0] [i_0] [i_0] = ((var_2 ? (3277149911 && 2249994539) : ((var_3 + (arr_2 [1])))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (max(-7706012665349090110, ((max((arr_6 [i_3 + 1] [i_3 - 3] [i_3 - 3] [i_3 - 2]), (max(96, 199)))))));
                        }
                    }
                }
            }
        }
    }
    var_14 = 4574;
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    var_15 = (min(var_15, ((((-(min(var_8, 1))))))));
                    var_16 = (max(var_16, (((127 < (((2044972746 == (arr_17 [i_6] [i_6])))))))));
                    var_17 = (~(((arr_10 [i_5] [i_5] [i_5] [i_5] [i_5]) ? (((((arr_20 [i_4]) || var_3)))) : (min(-6781800150858780178, 2044972771)))));
                }
            }
        }
    }
    var_18 = (max((((!3388086007616186342) || (!4574))), ((((max(var_13, -47))) || (!var_12)))));
    var_19 ^= (((((var_8 && -1619571665) ? ((2044972784 ? 14068002408166866333 : 4574)) : (((var_12 ? var_0 : var_12))))) >= ((min(((var_5 ? var_11 : var_9)), var_13)))));
    #pragma endscop
}
