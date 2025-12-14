/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_10 = (min(var_10, (((var_8 ? ((+(((arr_1 [i_0]) ? 1 : 4294967295)))) : ((max((64916 && 1), ((4294967295 ? 64925 : var_9))))))))));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {

                        for (int i_4 = 4; i_4 < 12;i_4 += 1)
                        {
                            arr_13 [i_2] = ((1 ? (max(18, 1)) : (((max(14, 241))))));
                            var_11 = ((24156 ? 1387980100 : 0));
                        }
                        arr_14 [i_3] [i_2] [i_0] [i_0] = (arr_4 [i_0] [i_1] [i_2]);
                        var_12 *= max(14667595576153138488, (((4294967285 ? 14859 : 2147483647))));
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_13 = (((((2030335256 ? (arr_0 [i_0] [i_0 - 2]) : ((min(var_2, 57297)))))) > (((arr_3 [i_0 + 1]) ? (arr_3 [i_0 - 1]) : 1207013857613109612))));
                        arr_18 [i_0 - 2] [5] [i_2] [i_5] = 22;
                        var_14 = (max(var_14, ((((min(12977, ((49155 ? 36945 : 97)))) - (((((arr_3 [1]) & var_7)))))))));
                    }
                }
            }
        }
    }
    var_15 = ((((min(17239730216096442000, 2147483645))) ? ((-((min(var_6, -22761))))) : ((var_9 ? ((var_9 ? var_0 : 0)) : var_4))));
    #pragma endscop
}
