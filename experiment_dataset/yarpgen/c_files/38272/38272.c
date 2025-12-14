/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((((min(3769629863, 27))) ? var_9 : 1023))) >= -3769629863));
    var_16 = 2556479809;
    var_17 = (min((((!(525337432 < 15937703876305663899)))), (min(var_7, var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_1] = (((438523356 - var_2) ? var_5 : (min(16352, 370137755))));
                arr_7 [i_0] [i_1] = (525337448 && -1581262614);
            }
        }
    }
    var_18 &= var_7;
    #pragma endscop
}
