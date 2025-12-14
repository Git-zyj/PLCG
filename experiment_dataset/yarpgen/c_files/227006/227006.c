/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((((((((arr_5 [13] [13]) ^ (arr_5 [6] [i_0]))) ^ (55090 ^ 3498466904)))) ? ((-8605333648496225788 ? -7538502777166940616 : (444702503 || 52053))) : 33554431));
                arr_7 [i_0] = ((~((((((arr_5 [i_0] [i_0]) ? 495155909 : (arr_4 [i_0] [i_1])))) ? (((arr_3 [i_1]) ? (arr_1 [i_1] [i_0]) : 3183333671)) : var_2))));
            }
        }
    }
    var_10 = (~(((max(3528947034, var_5)))));
    #pragma endscop
}
