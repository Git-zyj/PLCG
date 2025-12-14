/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = (min(var_13, -27422496605371486));
        arr_2 [i_0] = ((((min((arr_0 [i_0] [i_0]), (arr_1 [i_0])))) ? (min(0, -54)) : (min((arr_1 [i_0]), (arr_0 [i_0] [i_0])))));
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            {
                var_14 = (max((max(var_3, var_8)), ((((var_6 || var_4) || (var_1 || 9665252414812949363))))));
                arr_10 [i_2] [i_1] [i_2] = (!-var_3);
                arr_11 [i_2] [i_2] [i_2] = ((var_0 ? (((min((65525 <= 126), 16)))) : (min(-1, var_2))));
                arr_12 [i_1] [i_1] [i_2] = (min(-5641494919080648618, ((min((min(var_1, (arr_7 [i_2] [i_1]))), (arr_5 [i_1] [i_1]))))));
            }
        }
    }
    var_15 = var_4;
    var_16 = var_8;
    var_17 -= (((max(((-5460023326686015349 ? 8 : -1)), var_10)) ^ var_8));
    #pragma endscop
}
