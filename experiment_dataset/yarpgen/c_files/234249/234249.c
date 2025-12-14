/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = ((!(!-var_8)));
                var_17 = (max((max(var_8, 68)), (!var_4)));
                var_18 = (!-100);
                var_19 &= (-188 <= 0);
            }
        }
    }
    var_20 *= 180;
    var_21 = (min(var_21, var_12));

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_22 += (min(((((min(var_1, (arr_0 [5] [i_2])))) ? (arr_3 [i_2]) : (arr_3 [i_2]))), ((~((min((arr_3 [i_2]), (arr_3 [i_2]))))))));
        arr_6 [i_2] [i_2] = ((15 << (-121 + 122)));
    }
    var_23 = (max(var_9, (min(((var_12 ? 159 : 68)), var_13))));
    #pragma endscop
}
