/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] = (min((((((-(arr_0 [i_0])))) ? (((min(60, var_9)))) : (min(1720127385, 10775590314708466262)))), ((min(-1, ((min((arr_2 [i_0] [i_1]), 47))))))));
                arr_7 [i_0] = ((7671153759001085350 && ((((((arr_3 [i_0 - 3] [i_1] [i_1]) ? -1 : -64)) ^ ((min(1679841482, 127))))))));
            }
        }
    }
    var_10 -= ((277119972938250880 ? -46 : 2861974272));
    var_11 = var_6;
    #pragma endscop
}
