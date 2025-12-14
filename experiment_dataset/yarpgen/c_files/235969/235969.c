/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((max(var_10, var_12))) || ((min(var_4, (arr_4 [i_0])))));
                var_15 = (arr_3 [i_0]);
                var_16 = (min(var_16, (((((((max(19072, 1))) ? (min(var_14, var_1)) : (arr_4 [i_0]))) == ((min(var_13, ((min(-21484, 113)))))))))));
            }
        }
    }
    var_17 = var_2;
    var_18 = var_4;
    #pragma endscop
}
