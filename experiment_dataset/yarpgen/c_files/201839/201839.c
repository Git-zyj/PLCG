/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = (+((((max((arr_3 [i_0]), var_12))) ? ((max(29297, var_12))) : var_14)));
                var_18 -= ((-430567016 ? ((max(119, (max(411835704, 22967))))) : -1486252620487505643));
            }
        }
    }

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_2] [i_4] = 404823962114288189;
                    var_19 = (min(var_19, (((~(arr_7 [4] [i_2]))))));
                    arr_14 [i_2] [i_3] [i_4] = var_8;
                    var_20 = max((max((arr_8 [i_3 + 1] [i_4] [i_4]), var_14)), (0 + 0));
                }
            }
        }
        arr_15 [i_2] [i_2] = -12328;
    }
    var_21 = var_10;
    #pragma endscop
}
