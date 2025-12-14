/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((min(((45927 ? var_13 : var_8)), ((var_18 ? var_16 : var_13)))), var_6));
    var_20 = (((((-83 ? 31980 : 86))) + (min(var_4, ((var_1 ? var_1 : var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_21 |= (((min(-1, -1495631009))) ? ((((arr_2 [i_2]) ? (((min((arr_12 [2] [i_3] [4] [2]), (arr_3 [5]))))) : var_18))) : ((((((arr_1 [i_1]) ? 65528 : (arr_12 [6] [i_3] [i_2] [6])))) + var_11)));
                                var_22 = (((1 * -1495631022) ? (-26222 / 2446466239293525447) : -7178));
                                var_23 = (min(((min(65280, 168))), ((-((var_13 ? var_0 : (arr_2 [i_0 + 1])))))));
                            }
                        }
                    }
                }
                var_24 = (((min((arr_6 [i_1 + 2] [i_0 + 1]), (arr_6 [i_1 + 2] [i_0 + 1]))) + (((arr_6 [i_1 + 2] [i_0 + 1]) - 39818))));
                var_25 -= (max(var_17, (((arr_1 [i_0]) ? var_10 : (arr_1 [i_1 + 1])))));
                var_26 -= ((218 ? 4 : -7639611747710079307));
            }
        }
    }
    var_27 = (((((-26223 ? 882890763943906078 : -1495630980))) ^ (((((154 <= var_13) < ((var_2 ? var_11 : var_13))))))));
    #pragma endscop
}
