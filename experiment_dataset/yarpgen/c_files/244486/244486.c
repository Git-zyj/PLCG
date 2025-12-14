/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 1660233338249953253;

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_17 = (((arr_4 [i_1]) - var_9));
            arr_5 [i_0] [i_0] = (max((min((~var_13), (min(1660233338249953277, 75)))), ((-(min(16786510735459598311, var_12))))));
            var_18 *= ((~(((((var_12 ? 23505 : (arr_0 [i_0] [i_0])))) ? var_13 : (arr_4 [i_0])))));
            arr_6 [i_0] [i_0] [i_1] |= (((arr_3 [i_0] [i_0] [i_0]) ? ((max((arr_4 [i_1]), (arr_0 [7] [7])))) : ((1660233338249953260 ? 0 : 265))));
            var_19 += 16786510735459598326;
        }
    }
    var_20 = var_4;
    #pragma endscop
}
