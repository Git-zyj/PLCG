/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (((arr_1 [i_1 - 1] [i_1]) - (max(135, (min(9082381682108867685, 6723716464812345229))))));
                arr_6 [i_0] [i_0] [i_1] = min(((min((max(-752720723, (-32767 - 1))), (arr_0 [i_0] [i_1])))), (((arr_2 [i_1 - 1] [i_1 - 1]) - (max(-5994488178114626883, 42429)))));
            }
        }
    }
    var_14 = 1700429425;
    #pragma endscop
}
