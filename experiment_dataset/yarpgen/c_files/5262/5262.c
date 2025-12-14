/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 |= (((2097151 - 18446744073707454461) ? (((var_9 ^ var_3) - (arr_4 [i_0]))) : (((min(var_10, ((min(60, 1)))))))));
                arr_5 [i_0] = var_0;
                var_14 = (max(((-(arr_3 [i_0]))), ((12513850521837429308 ? (arr_3 [i_0]) : (arr_3 [i_0])))));
            }
        }
    }
    #pragma endscop
}
