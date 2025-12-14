/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (min(1, (((((arr_2 [i_1]) - (arr_1 [i_1]))) / ((min(var_6, -4329377927164860719)))))));
                arr_7 [i_1] [i_0] [i_1] = ((+(max((-4668 >= -6), (max((arr_0 [i_0]), -5927403549256141161))))));
                arr_8 [i_1] = (max((((0 ? 5927403549256141167 : (arr_5 [i_1 - 2] [i_1])))), (arr_5 [i_1 - 2] [i_1 + 1])));
                arr_9 [i_0] |= max((((((((arr_1 [i_0]) ? var_8 : (arr_3 [i_0])))) && (((arr_3 [i_1]) && 4667))))), (max(((-7667998227834485626 ? -3646211609015484340 : -29)), 918832342)));
            }
        }
    }
    var_17 = (((((-12612135191805148037 ? (~var_6) : var_12))) ? ((var_8 ? (max(var_15, -11992)) : (max(8126234725721748510, var_13)))) : (((var_0 - (249 && var_9))))));
    #pragma endscop
}
