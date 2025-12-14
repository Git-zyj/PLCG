/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_11 = (var_4 ? (~var_5) : (((((~(arr_2 [i_1] [i_1 + 2])))) ? var_10 : (~var_8))));
                arr_5 [i_0] [i_0] [i_0 + 1] = ((!((min((arr_0 [i_0 - 1] [i_1 - 1]), (arr_0 [i_0 - 1] [i_1 + 3]))))));
                var_12 = (min((arr_3 [i_0] [i_0]), var_8));
            }
        }
    }
    var_13 &= (min(-7257737521231786765, 6283));
    var_14 = ((var_0 ? 1 : var_5));
    var_15 = (max(var_15, (((((var_2 == (((5940210532799601939 ? var_5 : var_7))))) ? var_9 : (var_9 & var_6))))));
    #pragma endscop
}
