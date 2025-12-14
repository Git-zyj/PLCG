/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(101, (min(1, -5732337417318851842))));
    var_16 = (max(var_16, ((max((!var_8), (((min(var_3, 13895931001073533384)) != ((max(var_4, 1))))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (((((~12) ? 27807 : (((arr_1 [i_0] [2]) ? -7984965763666518701 : 5)))) == (((((var_8 ? 0 : 7984965763666518700)))))));
                arr_7 [i_0] [i_0] = (((528482304 * 516182779) / 8141318484466940914));
                var_17 = var_14;
            }
        }
    }
    #pragma endscop
}
