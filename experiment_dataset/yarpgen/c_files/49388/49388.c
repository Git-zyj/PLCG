/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = (min(89, (min(4253776166, 4253776166))));
                arr_7 [i_1] = (max((((min(22, 1953166033)))), 562949953421311));
                var_15 = (min((41191140 & 41191158), 1965826475));
                var_16 = ((((max((!4253776131), (max(-1, 232))))) && ((min(((min(24794, 1))), -1332316073)))));
                arr_8 [i_1] = ((max(1124853974, -1)));
            }
        }
    }
    var_17 = var_7;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                var_18 = (!41191158);
                var_19 = (max(((min(1, 48))), (max(10843765621090595503, 1493748619))));
            }
        }
    }
    #pragma endscop
}
