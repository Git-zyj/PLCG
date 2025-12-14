/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = (min(var_15, ((((((6204212829805107389 ? var_3 : (arr_0 [i_1])))) ? (((10238 ? 14306 : var_7))) : (arr_3 [i_0] [i_1]))))));
                var_16 = ((min((((!(arr_0 [i_0])))), var_1)) < (min(1891221928, ((-655696998 ? var_2 : 4)))));
                arr_4 [i_0] [i_0] [i_1] = min((((arr_1 [i_0]) ^ (arr_1 [i_0]))), (~var_12));
                var_17 = (((max((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_1])))) ? (((((~(arr_0 [i_0])))) ? (max(-5, 10536080327801371662)) : ((~(arr_1 [i_0]))))) : (((max((arr_0 [i_0]), (arr_3 [i_1] [i_0]))) >> (((-3520 & var_8) - 1450221593)))));
            }
        }
    }
    var_18 = ((~((~(~var_8)))));
    var_19 = var_12;
    var_20 |= (min(((min(-484860730, -1))), (((var_0 % 5385934652738294340) >> (-5 + 17)))));
    #pragma endscop
}
