/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_1] = 83670187;
                arr_5 [i_1] = var_12;

                for (int i_2 = 3; i_2 < 24;i_2 += 1)
                {
                    var_16 &= ((2643581819 ? (6454757817565113179 / var_4) : var_9));
                    var_17 = (min(var_17, (var_7 % var_9)));
                }
                var_18 = (min(var_6, -7923742934933875277));
            }
        }
    }
    var_19 |= var_12;
    var_20 = ((var_5 ? var_3 : -1019343492));
    var_21 ^= (var_7 << (((max(60036, ((635828217 << (652694887 - 652694867))))) - 2140143602)));
    #pragma endscop
}
