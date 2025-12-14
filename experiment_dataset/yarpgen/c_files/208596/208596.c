/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = -7063;
        var_20 = var_16;
        var_21 = ((((((((-7063 ? 2245231923386117064 : (arr_3 [13] [i_0])))) ? ((46 ? var_5 : 203)) : (arr_3 [i_0] [i_0])))) ? (((((var_7 ? var_16 : 15))))) : ((~(min((arr_3 [i_0] [i_0]), (arr_2 [i_0])))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    arr_13 [i_1] = 1;
                    var_22 = 210;
                    arr_14 [i_1 - 1] [i_1 - 1] [i_2] [i_1] = (min(((~(min((arr_12 [i_1] [i_2] [i_3]), var_16)))), -17684));
                }
            }
        }
    }
    var_23 = ((((var_13 ? var_7 : var_5))) ? -10 : ((min(65517, 1))));
    #pragma endscop
}
