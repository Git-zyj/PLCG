/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((~((1 ? var_6 : var_4))))) ? -8 : ((11 ? 3281295522 : -6907517877923199675))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                var_13 = (min(15900033650561894627, 2069968757));
                var_14 = (min(var_14, ((((((+(((arr_2 [i_1]) ? (-2147483647 - 1) : (-2147483647 - 1)))))) || var_7)))));
                var_15 += ((1 ? 2147483647 : 63));
            }
        }
    }
    #pragma endscop
}
