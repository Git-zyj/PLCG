/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((max(9390896726527171453, 20099)) >= ((((max(var_5, var_9))) ? (1 | 3349028736) : ((var_4 ? var_12 : 8506518225661586899))))));
    var_14 = ((((((min(9940225848047964701, 813446425))) && (((var_10 ? var_0 : var_2)))))) ^ ((min((var_11 && 4817932689378476381), (max(var_1, var_5))))));
    var_15 = (max((5849849191465498022 <= 9940225848047964717), 7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_16 = (((2977839756541216004 && -8629461924975061084) != (((((arr_2 [i_0]) | (arr_0 [1] [i_1 - 2]))) ^ (((arr_3 [i_0] [i_1] [i_0]) ? (arr_1 [i_0] [i_1]) : (arr_4 [i_0])))))));
                var_17 = (min(var_17, (((((min((65535 - var_4), (var_1 - 7336926052995473153)))) ? (((((var_7 ? var_10 : -79))) ? (min(23341, 11109818020714078457)) : (((max(27729, 48)))))) : (((((arr_2 [i_0]) - 8506518225661586883)) + (((1 + (arr_4 [i_1 + 1])))))))))));
            }
        }
    }
    #pragma endscop
}
