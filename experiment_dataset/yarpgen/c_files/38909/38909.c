/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((((((((min(var_2, 281433005)) + 2147483647)) << (42726 - 42726)))) | ((~((2936417109556265808 ? var_4 : var_9)))))))));
    var_16 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = (arr_6 [i_0] [i_0] [i_0]);
                    arr_7 [i_0] = (arr_6 [i_0] [i_1] [i_0]);
                }
            }
        }
    }
    var_18 = (max(var_18, ((((((var_6 ? (22807 / 6917529027641081856) : (((22796 ? var_2 : 22807)))))) ? ((22810 ? ((11529215046068469753 << (var_1 - 17716517873072374336))) : (((max(var_5, 42717)))))) : ((var_2 ? (max(22819, var_1)) : var_1)))))));
    #pragma endscop
}
