/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = var_5;
        arr_3 [i_0] = (((5878045037616002881 ? -114 : 8646911284551352320)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_21 -= 55531;
            arr_8 [i_0] [1] [10] = var_6;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_22 = (max(var_22, var_13));
            var_23 = (arr_9 [6] [8]);
        }
        arr_13 [i_0] [i_0] = ((min(-1381152209, -9097027398569840777)));
    }
    var_24 += (var_8 ? 1920 : -685758938);
    var_25 = max((~var_10), var_2);
    #pragma endscop
}
