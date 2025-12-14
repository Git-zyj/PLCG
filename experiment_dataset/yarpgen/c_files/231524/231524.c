/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1] = (((arr_4 [i_1] [i_0]) ^ -0));
                var_19 = (min(var_19, ((((((-((18446744073709551610 | (arr_1 [i_1] [i_0])))))) ? -253 : ((((((arr_3 [i_1 - 1]) ? (arr_3 [i_0]) : 12430661429851427918))) ? -102 : ((max((arr_1 [i_1] [i_0]), 65535))))))))));
            }
        }
    }
    var_20 = -12430661429851427920;
    var_21 = max(((-(var_18 & 1702))), -0);
    var_22 = var_14;
    #pragma endscop
}
