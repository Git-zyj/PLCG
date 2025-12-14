/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((9582696392048198849 ? 562949953413120 : var_12))) ? 32764 : -2145410123));
    var_15 -= var_13;
    var_16 ^= 0;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_17 = (max(var_17, 0));
            var_18 = 8496;
        }
        arr_6 [i_0] = (((((-17 ? 57040 : 8496))) ? ((8496 ? 1827 : -20)) : ((1 ? 65527 : 1))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                arr_15 [i_3] = 0;
                var_19 = (min(var_19, 20199));
                var_20 += 38701;
                arr_16 [5] [1] [i_3] = ((1827 ? 1821 : 41701));
                arr_17 [i_3] [i_2] [i_2] = (((((1 ? ((0 ? 26837 : 38701)) : 1827))) ? ((-17 ? 41701 : 0)) : 45));
            }
        }
    }
    #pragma endscop
}
