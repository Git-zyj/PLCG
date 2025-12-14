/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (max(var_17, (((var_10 << (var_3 - 7493756960385670415))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_21 += (min((min(32767, (min(var_12, (arr_3 [i_0] [i_0]))))), (max((arr_0 [i_0] [i_1]), (arr_1 [i_0 - 1])))));
                arr_5 [i_0 - 1] [i_0] = ((-((var_14 ? (min((arr_2 [i_1]), var_7)) : ((((var_2 == (arr_3 [i_1] [i_0])))))))));
            }
        }
    }
    var_22 = min(32767, -1);
    #pragma endscop
}
