/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_19;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_21 = ((((126 != (arr_4 [i_0 + 1] [i_0]))) ? 110 : ((((min(274877906943, var_3))) ? (arr_4 [i_0] [i_0 + 1]) : (arr_4 [i_0] [i_0])))));
                var_22 = 1;
            }
        }
    }
    var_23 = (max(var_23, (((((((449013474905458682 > var_9) ? 41762 : (var_3 || var_15)))) ? (((((min(var_7, var_11)) == ((var_11 ? var_10 : -1220851988215981581)))))) : (((((237 << (274877906939 - 274877906932)))) ? 0 : ((var_14 ? var_6 : var_19)))))))));
    #pragma endscop
}
