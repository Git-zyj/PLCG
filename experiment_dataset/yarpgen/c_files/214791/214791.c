/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((min(((max(61284, 4252))), 2469137714)), ((61284 | ((var_4 ? 2437600071 : -1792376721))))));
    var_12 = var_3;
    var_13 = (max(var_13, var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 += (((arr_0 [i_0] [i_1]) ? ((var_4 ? 1625820664 : (arr_2 [i_2]))) : (((0 >> (var_9 + 7989638625193914270))))));
                    var_15 &= (((((((4194303 ? var_0 : 868469043))) ? -6 : 4294967283)) * ((((arr_6 [i_0] [i_0] [i_2] [i_2]) ? 1 : (arr_5 [i_0] [i_1] [i_2] [i_2]))))));
                    var_16 = -186;
                    var_17 = (((arr_1 [i_2]) <= (((((var_5 && 65535) && ((min(0, 4194303)))))))));
                }
            }
        }
    }
    #pragma endscop
}
