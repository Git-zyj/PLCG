/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_5 [i_0] = 7553720287539705607;
                arr_6 [i_0] = ((+(min((arr_0 [i_1 + 1]), (arr_4 [i_1 + 3] [i_0 - 1] [i_0])))));
                arr_7 [11] = 7553720287539705635;
                arr_8 [i_1 + 3] = (((min(-7553720287539705615, ((min(1, var_2)))))) ? (((((var_2 ? -7553720287539705608 : 65531))) ? var_4 : ((((arr_4 [i_0] [i_0] [i_1]) ? 187 : 226))))) : (((((min(var_2, var_6))) ? (max(var_9, var_5)) : (((-2147483647 - 1) ^ 1))))));
            }
        }
    }
    var_10 = (-7553720287539705611 ? (max(var_6, 118)) : ((((((118 ? 285302049 : 109))) ? 80 : var_0))));
    #pragma endscop
}
