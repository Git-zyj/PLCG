/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= ((var_3 ? ((min(var_8, 250))) : var_5));
    var_20 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = ((-((((((198 ? 42 : 7548))) == (min(51, -1853571924359522603)))))));
                arr_5 [i_1] |= (((((~((min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))))))) ? (((min(-83, 10017)))) : (((arr_2 [i_1] [i_0]) ? (((arr_1 [i_1]) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_0 [i_1] [i_0]))) : ((var_16 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_1])))))));
            }
        }
    }
    var_22 |= ((211 ? (!96) : 75));
    #pragma endscop
}
