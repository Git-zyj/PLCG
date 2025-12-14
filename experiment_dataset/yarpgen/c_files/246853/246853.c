/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246853
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
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_14 = ((((var_6 ? var_13 : 51656)) + (13874 && var_4)));
                                var_15 *= var_2;
                                var_16 = var_7;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        {
                            arr_15 [i_0] [i_0] [i_5] [i_6] = ((((((((1 ? var_6 : var_12))) ? ((13865 ? 13141184998748983721 : 12228128901693627384)) : (var_7 > var_11)))) ? (((((var_1 ? var_13 : var_12))) ? (min(2993274659, 60233)) : (((min(5305, -8)))))) : (((11 ? 7 : var_2)))));
                            var_17 = ((((((13878 & var_3) ^ (~127)))) ? ((((max(var_0, var_4))) ? ((1955477137 ? 40 : var_11)) : var_13)) : ((((((16 ? 13878 : var_7))) ? 127 : (!55064))))));
                            arr_16 [5] [i_0] = (((((-1821624137 ? (-127 - 1) : 65518))) ? var_12 : (~49901)));
                        }
                    }
                }
                var_18 = (((((2610607430128497360 ? (var_3 / var_0) : ((min(var_10, var_2)))))) ? (max(58379, 1850081718)) : -var_0));
            }
        }
    }
    var_19 = (min(((min(((var_2 ? 127 : var_2)), var_5))), ((var_9 ? ((6594 ? 3481892688354124197 : 11647709371328206655)) : (((var_3 ? var_13 : var_8)))))));
    #pragma endscop
}
