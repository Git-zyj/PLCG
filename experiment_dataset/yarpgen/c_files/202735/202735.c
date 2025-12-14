/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, 15201197584110733979));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = var_6;
                    var_20 = ((min(2630705933010848547, (max(15201197584110733969, var_16)))));
                    var_21 &= ((~((max(14, 16383)))));
                    arr_7 [i_0] [i_2] = 10;
                    arr_8 [i_0] [i_0] [i_0] = (((((((arr_3 [i_2]) + 5938188677986430879))) ? ((min(var_13, -1963364746111296736))) : (arr_5 [i_0] [i_0]))));
                }
            }
        }
    }
    var_22 |= ((-((~(~var_10)))));
    var_23 = (((var_4 ? (var_15 | var_16) : var_17)) << (var_9 - 10868807559738944284));
    var_24 = var_5;
    #pragma endscop
}
