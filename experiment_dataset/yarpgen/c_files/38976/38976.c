/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = 3864021430;
            var_14 = (max((arr_4 [0]), ((var_8 >> (((~var_10) + 41603))))));
        }
        var_15 = (((127 > 1238667161) ? 7705604750402182406 : (var_13 > var_3)));
        arr_7 [i_0] = (((((((~var_11) == 697371091382450398)))) < (max((1238667162 & -1171548951599118594), -1171548951599118591))));
    }
    var_16 = var_6;
    #pragma endscop
}
