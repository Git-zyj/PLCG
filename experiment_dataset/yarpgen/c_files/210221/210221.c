/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = min(((-0 ? var_13 : ((67108863 ? -1220328499 : 1088899390)))), ((min((max(var_5, var_12)), (max(-13, var_9))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [10] [i_3] [i_1] [i_2] |= (((!(arr_8 [22]))));
                                var_15 = (((max(9, -397376668)) >> (((((var_5 ? var_1 : 0))) ? ((min(9, 6))) : (max((arr_7 [i_0] [i_3] [i_0] [i_1]), var_6))))));
                                var_16 = 0;
                                arr_13 [i_1] [13] [i_2] [i_2] [i_2] [i_2] = (max((((var_8 == (arr_2 [i_4 + 1] [i_4 - 1] [i_1])))), -var_2));
                                var_17 = (min(((255 ? -863015927 : 255)), (((224 < (((arr_3 [i_0] [i_4] [i_0]) >> (247 - 238))))))));
                            }
                        }
                    }
                    var_18 ^= ((((~((112 ? 9 : 99)))) | var_6));
                }
            }
        }
    }
    var_19 = var_9;
    #pragma endscop
}
