/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max((!var_2), (min(var_2, var_7)));
    var_15 = var_3;
    var_16 -= (((24171 >= 1345394488) ? var_10 : (max((~var_4), (-24170 != -25842)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (((min((arr_4 [i_0]), var_8)) * ((((((-17755 ? 1975 : var_2))) ? ((5277775306311733006 ? -24171 : -453832281)) : (arr_0 [i_0] [i_0]))))));
                arr_6 [i_0] = (((arr_3 [i_0]) ? (((24170 == (arr_4 [i_0])))) : ((-((var_7 >> (var_6 - 24168)))))));
            }
        }
    }
    #pragma endscop
}
