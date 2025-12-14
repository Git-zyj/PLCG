/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min(0, 1188943242047533285);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((((((((-(arr_2 [i_1])))) ? ((min(1, var_4))) : 667444226512256447)) >> (-667444226512256447 + 667444226512256456))))));
                var_20 = ((((max((arr_2 [i_1]), (arr_2 [i_0])))) != ((min((arr_2 [i_1]), (arr_2 [i_0]))))));
                var_21 = ((!((max(18446236973785564050, var_8)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_22 = (arr_7 [i_0] [i_1] [3] [i_0]);
                                var_23 = (min((~var_3), 667444226512256447));
                            }
                        }
                    }
                }
                var_24 = (!667444226512256444);
            }
        }
    }
    #pragma endscop
}
