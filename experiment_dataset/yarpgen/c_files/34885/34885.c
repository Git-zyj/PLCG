/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = var_6;
                arr_6 [i_1] [i_0 - 2] = ((arr_2 [i_0 + 2]) <= (min((arr_1 [i_1 + 1] [i_1 - 1]), var_8)));
                arr_7 [i_1] [13] [i_1] = ((((min(8192, (-9223372036854775807 - 1)))) * ((((var_8 == (min(var_4, var_10))))))));
                arr_8 [i_1] = 0;
            }
        }
    }
    var_12 = var_0;
    var_13 = (max(var_3, var_5));
    #pragma endscop
}
