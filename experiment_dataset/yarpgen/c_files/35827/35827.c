/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_1] = (min(((max((((var_3 ? var_16 : (arr_5 [i_0] [i_1] [i_1 - 1])))), var_9))), var_5));
                var_17 = (min(var_17, ((((min(-2147483632, (arr_5 [i_1 - 3] [i_1 - 1] [i_1 - 3]))) * ((min((min(var_14, 23701)), (var_10 >= 18446744073709551615)))))))));
            }
        }
    }
    var_18 = var_12;
    #pragma endscop
}
