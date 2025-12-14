/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((((!(!var_3)))), var_2));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] &= (((arr_0 [i_0 + 2]) ? 187 : ((((arr_0 [i_0 + 2]) >= (arr_0 [i_0 + 2]))))));
                var_11 = (((((arr_3 [i_1]) - (((arr_3 [i_0]) - 3884434640666750374)))) < ((~((var_0 ? 3884434640666750374 : (arr_0 [i_0])))))));
                arr_6 [i_0 + 2] = ((((max((arr_0 [i_0 + 2]), (arr_0 [i_0 + 2])))) ? (((arr_0 [i_0 + 2]) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 2]))) : (arr_0 [i_0 + 2])));
                arr_7 [i_0] [i_0] [i_1] = (max((arr_0 [i_1]), ((((~130023424) != (arr_1 [i_0]))))));
                arr_8 [i_0] = (((var_2 > (arr_4 [i_0 - 1]))));
            }
        }
    }
    var_12 = ((((~var_6) ? var_2 : var_2)));
    #pragma endscop
}
