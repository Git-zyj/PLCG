/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (((8 + var_5) + (var_2 + var_7)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = -40953;
                arr_7 [i_1] [i_1] [i_1] = ((~(((arr_0 [i_0]) * (((min((arr_3 [i_1]), (arr_4 [i_1])))))))));
                var_11 = (min(var_11, (((((var_9 ? 5006671783730700596 : var_5)) * ((((var_0 <= (arr_5 [i_0]))))))))));
            }
        }
    }
    #pragma endscop
}
