/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_5 ? ((-10 ? -1556152598 : 255)) : (!var_8)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (min(((((((min(var_1, (arr_1 [i_0]))))) >= (var_2 | var_5)))), var_0));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] = min(((min((((!(arr_0 [i_0])))), (min(48229, -1970843762))))), var_7);
                            arr_12 [i_0] [i_1] [i_2] [5] [i_0] = ((((max((arr_0 [i_2 + 2]), (arr_0 [i_2 + 2])))) || 45397));
                            arr_13 [i_0] [10] [i_0] = (((~138) / var_6));
                        }
                    }
                }
                var_11 = (arr_8 [i_0] [i_0]);
            }
        }
    }
    var_12 -= ((var_5 == (min(var_7, (max(var_7, var_2))))));
    #pragma endscop
}
