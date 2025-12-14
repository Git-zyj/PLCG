/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = var_3;
    var_12 = (~(min((min(var_0, var_5)), var_8)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = (((((-1372848045 ? (max(var_4, 125)) : ((max((arr_2 [i_1]), var_7)))))) && ((max(-1372848045, (((arr_3 [i_1]) << (var_5 - 28283))))))));
                var_14 = (max((max((1372848044 || var_7), (max(var_5, var_6)))), (arr_1 [i_0])));
                arr_6 [i_0] [i_0] [i_1] = (((arr_1 [i_0]) & ((((((var_4 || (arr_3 [2])))) > (max(-1372848044, 241)))))));
                var_15 = 16;
            }
        }
    }
    #pragma endscop
}
