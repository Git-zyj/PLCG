/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min((var_6 ^ var_9), (var_12 > 1)))) ? (((2814103530 < var_12) ? (~var_0) : (max(1949433010, var_11)))) : ((var_1 ? ((1949433010 ? -31 : var_10)) : ((min(var_10, var_11)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 += (+(max((((arr_7 [i_0] [i_0] [2] [i_1]) ? 108 : 244)), ((-2738910417876187204 ? 1 : var_2)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] [i_2 - 3] [3] [i_4] [i_3] [7] = var_2;
                                var_16 = 1949433019;
                                var_17 = ((((var_7 * -12) + 2147483647)) >> (((arr_2 [i_0 + 4]) - 3737156060)));
                            }
                        }
                    }
                    var_18 = (-1 * (((arr_14 [i_1] [i_1] [1] [1] [i_2] [i_1] [i_2 - 4]) ? (arr_15 [10] [1] [i_1] [i_1] [i_2]) : (4294967295 * 3703696220))));
                    var_19 -= 2311865935;
                }
            }
        }
    }
    #pragma endscop
}
