/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((511 ? -4229022626264619686 : 188))) ? (((min(var_11, var_2)))) : (89 - 0))) >> (((((var_12 ? 34771 : var_5))) - 34760)));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, (65042 > 43339)));
                    var_18 = (((((4294967295 ? (((((arr_3 [i_1]) < 52712)))) : ((-99 ? 67 : -3954009367065990447))))) ? 12824 : ((-(arr_4 [i_0])))));
                }
            }
        }
    }
    var_19 = var_2;
    #pragma endscop
}
