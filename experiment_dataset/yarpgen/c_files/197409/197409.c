/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((((var_8 ? 0 : 16541))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_19 &= var_2;
                var_20 ^= (min((arr_0 [i_1 + 1] [i_1 + 1]), (min(2046, (arr_2 [i_1 + 1] [i_1 + 1])))));
                var_21 = (max(var_21, (((-((-(arr_3 [i_0] [i_1 + 1]))))))));
            }
        }
    }
    var_22 ^= var_7;
    var_23 = 2073121954;
    var_24 = max(var_17, (min(8727015223321829368, var_8)));
    #pragma endscop
}
