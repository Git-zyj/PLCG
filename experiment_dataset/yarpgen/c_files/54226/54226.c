/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= 3612235156;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] = (max(8888852199447111572, (max(17479673673598261222, 625022592))));
                arr_6 [i_0] = (((arr_1 [11] [i_0 + 3]) ? (((arr_1 [i_0] [i_0 + 3]) ? (arr_1 [i_0 - 1] [i_0 - 1]) : (arr_1 [i_0] [i_0 - 2]))) : (((arr_1 [i_0] [i_0 + 1]) ? (arr_1 [3] [i_0 + 3]) : (arr_1 [i_0] [i_0 + 3])))));
            }
        }
    }
    var_11 = (((4294967295 != 5127479449968440174) * var_0));
    var_12 = (min(var_12, ((((7594281676852564805 | 1568572612084236757) ? (var_2 ^ var_7) : (min((6558345950153173011 == 0), 536854528)))))));
    var_13 = max(var_4, var_0);
    #pragma endscop
}
