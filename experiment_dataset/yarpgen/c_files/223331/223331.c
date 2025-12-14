/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_13 -= ((((max(var_3, (min(-19695873, var_5))))) ? ((((((2394725969 ? 19695873 : var_3))) ? ((max(var_3, var_5))) : (max(0, -19695873))))) : ((-19695882 ? 14932199073657527072 : 14932199073657527072))));
                arr_4 [i_0] [i_1] = 17544244494187988612;
            }
        }
    }
    var_14 = var_9;

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_15 = ((1 ? 0 : (~var_5)));
        var_16 = var_10;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_17 = (max(var_17, 95));
                    arr_12 [i_2] [i_2] = 1;
                    arr_13 [i_2] [3] [i_4] [i_4] = (!100);
                    var_18 -= (-(max(0, var_7)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_19 = ((((max(((-85 ? var_10 : -11854)), -29326))) ? (!var_4) : -4910));
                                var_20 = ((8 ? (max(var_0, -114)) : (((1 ? 0 : -19695890)))));
                            }
                        }
                    }
                    arr_27 [i_2] [i_5] [9] = (max((min(16986718060648905738, 1)), 65531));
                    var_21 = (min(((179 ? var_3 : var_6)), (~var_5)));
                }
            }
        }
    }
    var_22 = var_12;
    #pragma endscop
}
