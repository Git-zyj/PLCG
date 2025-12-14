/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= var_9;
    var_20 = (min(var_11, ((((24058 >= var_1) << (243 < 2147483647))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = (((((var_11 <= var_6) ? ((min(9, 7))) : 1))) <= (min((arr_1 [i_0] [i_1 + 1]), (243 == 18446744073709551604))));
                var_22 = ((-((-(arr_3 [i_0] [i_1 + 1] [i_0])))));
                arr_7 [i_1] = var_13;
            }
        }
    }
    var_23 = -1;
    var_24 = var_14;
    #pragma endscop
}
