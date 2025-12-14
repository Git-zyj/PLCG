/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_15 = ((((!(arr_3 [i_0] [i_0])))));
                            arr_10 [i_2] [i_3] [2] = ((+((((arr_0 [i_0]) < (((-32767 - 1) ? 0 : 14587473101954808322)))))));
                            arr_11 [i_0] [7] [i_0] [i_3] = ((((((max((arr_5 [i_3] [i_0]), 10794616261384529810)) >= 2133813617))) >= (10117 < 0)));
                            var_16 = (((max((arr_5 [i_0] [i_2]), -148557971)) | ((((-1631 + 2147483647) << (2867229580876695396 - 2867229580876695396))))));
                            arr_12 [i_0] [10] [i_2] [i_3] = (((((-30174 ? -26855 : 3455336520)) >> ((((max(32767, 44))) - 32751)))));
                        }
                    }
                }
                var_17 = (min(var_17, ((((-14587473101954808322 ? (max(3455336520, 234)) : (arr_7 [i_0] [20] [i_0] [i_0])))))));
                var_18 = 11334;
            }
        }
    }
    var_19 = var_3;
    #pragma endscop
}
