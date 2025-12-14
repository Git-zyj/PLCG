/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -1648636191;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_11 = (max(((((arr_2 [i_0] [i_1]) != (arr_2 [i_0] [i_0])))), (~-641018523)));
                    var_12 |= (((max((arr_3 [i_0]), var_4)) >= ((min(-641018523, (arr_3 [i_0]))))));
                    arr_9 [i_0] = ((-(((arr_2 [i_0] [i_1]) ? (arr_2 [i_0] [i_2]) : (arr_2 [i_0] [i_0])))));
                    arr_10 [i_0] = (((arr_5 [i_0] [i_1]) || ((((((var_8 ? 0 : 18446744073709551598))) ? var_7 : (arr_2 [i_0] [8]))))));
                }
            }
        }
        var_13 |= (arr_6 [i_0] [i_0] [i_0]);
    }
    var_14 = ((((767864523356710695 & (((var_4 ? var_8 : var_2))))) > 0));
    var_15 = ((114 ? var_6 : ((((min(29, 79))) ? var_5 : 1929931796091488674))));
    var_16 = var_2;
    #pragma endscop
}
