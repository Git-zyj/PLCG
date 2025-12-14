/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [i_0] = max((arr_0 [i_1 + 2] [i_1 - 1]), (max((arr_3 [i_0] [i_0] [i_0]), (255 * 16383919066159364383))));
                arr_8 [i_0] [i_0] = (((((((max(5, var_2))) / (arr_6 [i_0])))) && (((((max(1, (arr_1 [i_0]))))) != var_1))));
            }
        }
    }
    var_11 = (min(var_11, var_0));
    var_12 = ((622726341 ? ((max(-1436571687, var_2))) : 17534));
    #pragma endscop
}
