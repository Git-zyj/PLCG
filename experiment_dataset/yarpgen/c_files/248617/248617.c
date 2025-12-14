/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -183679885;
    var_14 = -183679879;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = ((-183679885 >= (max(var_7, ((32767 ? var_10 : 4294967282))))));
                var_16 = (arr_0 [i_1 - 1]);
            }
        }
    }
    var_17 = (max(var_17, ((max(var_10, (var_7 >= 32756))))));
    #pragma endscop
}
