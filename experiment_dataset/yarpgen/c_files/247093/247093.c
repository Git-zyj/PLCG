/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] [i_1] [i_1] = ((4294967290 ? ((((((arr_3 [i_1]) ? (arr_1 [i_0]) : 81)) - -299977010))) : -78));
                arr_5 [i_0] [i_0 + 2] [7] = (arr_3 [9]);
            }
        }
    }
    var_17 = ((~(((47267 ? -13727 : 299977015)))));
    var_18 = (((((8380416 ? 7 : 81))) ? (-32767 - 1) : ((78 ? 299977008 : var_14))));
    var_19 = 4294967295;
    var_20 = ((!-32767) << (-688817323994859486 + 688817323994859494));
    #pragma endscop
}
