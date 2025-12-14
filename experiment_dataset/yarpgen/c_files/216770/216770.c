/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = ((-29 ? -2072451364 : (arr_0 [14])));
        var_17 = (min(var_17, (((!-2072451375) != var_5))));
    }
    var_18 = (max(var_18, (((~(((var_6 != 3876180400) ? var_9 : 2173133338)))))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            {
                var_19 = (((var_4 | var_14) | ((((max((arr_6 [i_1] [i_2] [i_1]), var_5)) ^ var_13)))));
                var_20 = (max(var_20, ((max((max((var_0 - -2072451372), (min(-1, var_9)))), -2072451382)))));
                var_21 *= ((!(((~((var_5 ? 418786904 : (arr_4 [i_1]))))))));
                var_22 = (max(var_22, (((((min((arr_3 [i_2]), (arr_2 [i_1])))) == (max(var_9, (min(var_1, 2041717955)))))))));
            }
        }
    }
    #pragma endscop
}
