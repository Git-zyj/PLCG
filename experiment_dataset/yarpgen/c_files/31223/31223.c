/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((72057576858058752 ? (min((min(10219250518380200440, 18232620643389927374)), -1700525867)) : ((min(var_0, ((((arr_0 [i_0]) / -1832759151))))))));
                var_14 -= ((min(((max((arr_1 [i_0]), -9089973180358390673))), (max(13928561220705265411, var_8)))));
                arr_5 [i_0 - 1] [i_0] = (((((arr_1 [i_1]) ? 8227493555329351176 : (arr_2 [i_0])))));
            }
        }
    }
    var_15 *= min(var_12, (((!(1410819401085024973 + var_5)))));
    #pragma endscop
}
