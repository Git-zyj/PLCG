/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-((~(~-5349541416755790042)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_12 = ((((max((max((arr_3 [i_0] [i_0]), (arr_5 [i_1] [i_2]))), (~-12736)))) ? (((((arr_6 [i_0] [i_2] [i_0]) && (arr_4 [i_3] [i_3] [i_2]))) ? (((arr_6 [i_0] [i_2] [i_0]) ? 54850 : var_9)) : 3446653279089791240)) : (((~(arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_13 &= (((((var_2 ? (arr_4 [i_1 - 1] [i_1] [i_2]) : ((max(var_8, (arr_4 [i_0] [i_1] [i_2]))))))) ? ((((min(4789, 46219))) ? (4765 % var_7) : 1901023786)) : var_2));
                            var_14 = ((-(((((var_5 ? -1610335936 : 1))) ? (((arr_7 [i_3] [i_0] [i_0]) & var_7)) : (arr_2 [i_0] [i_4])))));
                            var_15 = 14220362279981527537;
                        }
                    }
                }
            }
        }
        var_16 = (arr_5 [i_0] [4]);
    }
    var_17 = var_10;
    #pragma endscop
}
