/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_8;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] = -6952251254460045687;
                    var_12 = ((((!(arr_2 [i_0 - 1]))) ? (arr_2 [i_0 + 1]) : (((!(arr_4 [i_0 - 1] [i_0 - 1]))))));
                    arr_9 [i_0] = (max(-6952251254460045674, (arr_1 [i_2])));
                    arr_10 [17] [i_1] [i_2] [i_2] = -18446744073709551615;
                }
            }
        }
    }
    var_13 = (max(6952251254460045686, (-32767 - 1)));
    #pragma endscop
}
