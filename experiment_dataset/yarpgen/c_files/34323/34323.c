/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = (1 / 17001587783215110232);
                arr_5 [12] [i_0] = ((min(17338589713510021508, 3001220823858183859)));
                var_16 = (((!((((arr_3 [i_0 + 2] [i_0 + 2] [i_1]) + (arr_3 [i_0] [i_0] [i_0])))))));
            }
        }
    }
    var_17 = (min(var_17, ((((var_2 != var_7) ? ((((700928114626618981 ? var_14 : 125708765)))) : (var_8 + var_4))))));
    var_18 += ((((var_10 < var_5) ^ ((17745815959082932635 ? 1 : 17001587783215110232)))));
    var_19 = var_7;
    #pragma endscop
}
