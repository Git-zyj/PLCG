/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1 - 1] [i_2] [i_2] [i_2] = ((45 ? 30543 : 0));
                                var_15 -= ((((((((var_13 ? var_4 : 1))) ? ((((arr_0 [i_1]) ? (arr_10 [i_1 + 1] [i_0] [i_3 + 2] [16]) : (arr_9 [i_0] [12])))) : (((arr_2 [i_4] [16]) ? var_7 : var_12))))) ? ((((((var_8 ? var_2 : (arr_3 [7] [8] [8])))) ? (((7035982665731899236 ? (arr_1 [i_2] [i_3]) : var_9))) : (((arr_10 [i_4] [i_0] [i_0] [i_0]) ? var_7 : -8337742893388296819))))) : (((((var_4 ? -46 : (arr_4 [i_0] [i_1] [i_3] [i_4])))) ? ((var_0 ? 140600049401856 : 1665261128)) : (((var_2 ? var_4 : -19024)))))));
                            }
                        }
                    }
                    arr_12 [i_2] [i_2] [i_0] [i_2] = ((((((((0 ? (arr_10 [i_0] [i_2] [i_2] [i_2]) : 12607835261761590317))) ? ((var_12 ? 30561 : var_2)) : ((-8337742893388296816 ? -1704195137 : 1))))) ? (((15338012056240302834 ? 30561 : 2629706181))) : ((((((arr_2 [i_1] [i_1]) ? -8337742893388296819 : var_13))) ? ((var_12 ? var_1 : -1)) : (((var_11 ? -1 : 19023)))))));
                }
            }
        }
    }
    var_16 = (max(var_16, (((7936 ? 12948915324804570836 : 2147483647)))));
    #pragma endscop
}
