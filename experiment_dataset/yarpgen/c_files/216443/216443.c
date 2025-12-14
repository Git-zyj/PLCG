/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((min(((var_9 ? var_12 : var_15)), var_17)) | 91));
    var_19 = -21310;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, (((~(min((((1574643573 ? 1574643573 : 2720323722))), (1574643573 / var_3))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_21 -= ((-((2720323717 ? 3 : (~-92)))));
                                arr_14 [0] [i_0] [i_2] [i_0] [i_0 - 1] = max(11778200082095652337, (!5703028628852086876));
                                var_22 = (((((max(var_13, var_16))) ? (~92) : (max(1822066271, 6668543991613899278)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (!19868);
    var_24 = ((((((var_16 ? var_13 : var_12))) ? (((var_4 ? 1 : var_14))) : (min(-122, 6668543991613899279)))));
    #pragma endscop
}
