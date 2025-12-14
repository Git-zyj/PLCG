/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (((((arr_0 [i_0 + 1]) ? (arr_0 [i_0 + 4]) : (arr_0 [i_0 + 4])))))));
                var_21 ^= (max(((0 << (17155327845429942156 - 17155327845429942134))), ((max(32767, 65523)))));
                arr_4 [i_0 + 3] [i_1] [i_1] = ((23 ? ((((!(arr_0 [i_0]))) ? (min((arr_2 [19] [i_1]), -9223372036854775785)) : (((max(91, 242)))))) : ((((1 || ((((arr_3 [19] [4]) ? 815238937165723656 : 18384489836532258666)))))))));
            }
        }
    }
    #pragma endscop
}
