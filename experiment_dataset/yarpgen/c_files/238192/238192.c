/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = (arr_2 [i_1 + 1] [i_0 + 1] [i_1]);
                arr_4 [i_1] [i_0 + 1] = (arr_2 [i_0] [i_0 - 2] [i_0]);
                arr_5 [i_0] = ((((var_8 && ((min(-24, (arr_0 [i_1])))))) ? (arr_1 [i_1]) : ((+((min((arr_2 [i_0] [i_0] [i_1]), (arr_2 [i_0] [i_0] [i_0 + 1]))))))));
                arr_6 [i_0] = ((((((var_5 ? var_0 : 4842379264852216341)))) ? (arr_2 [i_1 + 2] [i_1 + 2] [i_1 + 3]) : (max((arr_2 [i_0] [i_1 + 3] [i_1]), (~var_5)))));
                arr_7 [i_0] [i_0] [i_0] = (!32764);
            }
        }
    }
    #pragma endscop
}
