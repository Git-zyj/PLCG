/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 = (((((12318868210911020501 ? (-9223372036854775807 - 1) : 2013265920))) ? (-9223372036854775807 - 1) : ((15360 ? 12318868210911020476 : 6127875862798531124))));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_14 = max(268435456, 13250748963998987633);
                        var_15 = (arr_6 [i_0] [i_1] [i_2] [i_3]);
                        var_16 = ((-((1073741823 ? var_11 : 12306290368646317951))));
                    }
                    var_17 = ((3221225463 << ((((9223372036854775807 ? var_1 : (arr_5 [i_0]))) - 16329))));
                }
            }
        }
    }
    #pragma endscop
}
