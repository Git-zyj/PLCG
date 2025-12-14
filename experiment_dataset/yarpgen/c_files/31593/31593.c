/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (arr_0 [i_1]);
                arr_5 [i_0] [i_0] = (((((((9967424622725122349 ? (arr_1 [16]) : 9967424622725122349)) / 9967424622725122348))) ? 9967424622725122345 : (((((65527 >> (8479319450984429268 - 8479319450984429238)))) & 9967424622725122373))));
            }
        }
    }
    #pragma endscop
}
