/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 &= -1965683163;
        var_19 = ((-19909 ? 15284 : 1965683163));
        arr_2 [i_0] [1] = (((((~(max(var_6, (arr_0 [i_0])))))) ? -9223372036854775801 : (((((-10670 ? 56 : var_14))) ? (((max(83, 186)))) : -1405476494911872964))));
        arr_3 [i_0] [8] = 37639;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            {
                arr_8 [i_2] = (min((((((-1405476494911872964 ? -9223372036854775795 : 3265616353765524806))) ? -9223372036854775800 : ((1 ? -1405476494911872964 : var_8)))), ((1405476494911872975 ? (max((arr_5 [i_1] [i_2 - 1]), 4294967283)) : (~-9223372036854775783)))));
                var_20 = ((-((-3856822175958875424 ? (var_4 * var_0) : ((var_12 ? 2177425011 : (arr_5 [11] [i_1])))))));
                arr_9 [i_2] = 0;
            }
        }
    }
    #pragma endscop
}
