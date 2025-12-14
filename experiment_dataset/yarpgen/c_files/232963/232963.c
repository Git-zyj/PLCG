/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (min((4294967295 || 60783), 3));
                arr_6 [i_1] [i_1] = 1;
            }
        }
    }
    var_11 = (((((~(0 * var_6)))) ? (var_9 || var_3) : ((-((0 ? var_2 : -1331843717))))));
    #pragma endscop
}
