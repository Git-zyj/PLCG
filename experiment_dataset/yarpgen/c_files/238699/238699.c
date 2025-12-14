/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [1] = ((-(((((var_2 ? 1 : (arr_3 [i_0] [i_0] [i_1])))) ? 96 : (var_4 & 1951363445)))));
                arr_6 [0] [0] [i_1] = (arr_0 [i_0]);
                arr_7 [i_1] [4] = (-2147483647 - 1);
                var_11 = (min(12, 13048984474497076588));
                arr_8 [i_0] [i_1] = (((((min(var_3, 5397759599212475028) == (((14 ? 1974113878 : 176))))))));
            }
        }
    }
    #pragma endscop
}
