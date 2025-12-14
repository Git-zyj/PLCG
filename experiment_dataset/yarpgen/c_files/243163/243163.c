/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = (min(var_13, ((((((var_11 ? (min(11305437000835903280, 62)) : var_12))) ? ((195 ? 62 : 69)) : ((max(var_5, ((79 ? 54 : 199))))))))));
                var_14 = ((97 ? (arr_3 [i_0] [i_1 + 1]) : ((var_1 ? (var_10 || var_11) : ((~(arr_4 [i_1 + 1] [10] [24])))))));
                arr_6 [i_0] = (max(var_11, 15));
                arr_7 [1] [i_0] [i_1] = var_0;
            }
        }
    }
    var_15 &= var_9;
    var_16 -= ((13976221827584766741 || (((!var_3) >= var_5))));
    #pragma endscop
}
