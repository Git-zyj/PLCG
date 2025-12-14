/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= -7466514056424347329;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 = -var_0;
                arr_4 [i_0] [i_0] = (-344376086364471965 / -57344);
            }
        }
    }
    var_17 = (!8192);
    var_18 = (max(var_13, (((-var_6 ? -27152 : ((var_14 >> (9223372036854775807 - 9223372036854775777))))))));

    for (int i_2 = 2; i_2 < 19;i_2 += 1) /* same iter space */
    {
        arr_7 [i_2 - 2] = 8;
        arr_8 [i_2] = (((max((var_10 == var_0), 38386))) && ((!(arr_6 [i_2 + 1] [i_2 + 1]))));
    }
    for (int i_3 = 2; i_3 < 19;i_3 += 1) /* same iter space */
    {
        arr_11 [8] &= var_3;
        arr_12 [i_3] = var_1;
        arr_13 [i_3] = 27152;
    }
    #pragma endscop
}
