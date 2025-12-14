/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (arr_1 [5]);
                var_18 += var_2;
            }
        }
    }
    var_19 = (max(var_19, ((((((12243279572152394938 || 18167) ? -var_11 : (274009803 * 16873496762174580857))) >> (((-16873496762174580857 > (var_6 || var_14)))))))));
    var_20 = (max((max((min(var_10, 333489994333900742)), (var_1 % var_1))), var_2));
    #pragma endscop
}
