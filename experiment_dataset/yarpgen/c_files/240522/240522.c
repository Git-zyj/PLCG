/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= var_10;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0 + 2] [i_1] = (var_12 && 1753856838941438393);
                var_14 += (((arr_0 [16]) ? (min((max(4294967273, -6775012763504857402)), 16308)) : 32));
            }
        }
    }
    var_15 &= var_5;
    var_16 ^= (max(3827370706, (-1753856838941438400 - 63)));
    #pragma endscop
}
