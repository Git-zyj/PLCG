/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 0;
    var_15 = ((19196 << (-1 + 13)));
    var_16 = var_3;
    var_17 = (255 ? 760452234415389181 : 0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_8 [1] [i_1] [i_1] = (arr_3 [i_0]);
                var_18 = ((((min((arr_7 [i_0]), (arr_7 [i_0])))) ? ((((var_5 ? (arr_5 [i_0] [i_1]) : (arr_5 [i_0] [i_1]))) ^ ((((arr_0 [i_0]) ^ var_4))))) : (arr_0 [i_0])));
                var_19 *= var_2;
                var_20 = (-7 ? 0 : -13);
                arr_9 [6] [5] = (((((-1 ? (arr_7 [i_1]) : (arr_2 [i_0] [i_0]))))) ? 0 : (65535 % var_12));
            }
        }
    }
    #pragma endscop
}
