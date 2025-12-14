/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_1 ? (((0 ? ((2847918978 ? 1 : 30611)) : ((5871374260252139935 ? var_6 : var_7))))) : 1447048318));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((((min((arr_0 [i_1] [11]), (1447048326 <= 0)))) ? 1447048318 : ((63 ? (((3229712351181429622 ? 233 : 45293))) : -5871374260252139936))));
                var_14 = (((arr_2 [i_0]) ? 0 : (~0)));
                arr_6 [i_0] [i_1] = ((!(!251)));
            }
        }
    }
    var_15 = ((-(0 >> var_6)));
    var_16 = var_0;
    var_17 = var_5;
    #pragma endscop
}
