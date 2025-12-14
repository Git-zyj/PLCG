/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = ((!(((~(arr_3 [i_0 + 2]))))));
                    var_17 = (max(10285543287499674067, ((((((-70 ? 53 : var_5))) ? var_9 : ((max(126, 69))))))));
                }
            }
        }
    }
    var_18 = (max(((-70 ? 6601487441298437816 : ((10285543287499674074 ? 13061274389059355174 : 10285543287499674053)))), var_7));
    #pragma endscop
}
