/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((max(46401, 1))) ? var_7 : (!971454937))) ^ ((12721948394414645323 ? ((min(231, 13200))) : ((max(34, 7112)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 = ((((min(-28372, 104))) ? 5 : ((120 ? 3323512356 : 0))));
                    arr_10 [i_2] [i_1] [i_2] [i_0] = (((((min(31, 28372))) < -46401)));
                }
            }
        }
    }
    #pragma endscop
}
