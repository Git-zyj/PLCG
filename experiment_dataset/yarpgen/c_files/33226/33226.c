/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0 - 2] [i_1] = (((((max((arr_2 [i_0 - 3]), (((!(arr_2 [11])))))))) ^ (max((-9223372036854775807 - 1), 95962276))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_19 = ((-(arr_6 [i_0 - 2] [i_0] [i_0 - 3] [i_0 - 3])));
                                var_20 = 148;
                                var_21 = (((!126) >= ((max((arr_8 [i_0 + 2] [i_0] [i_0 - 2] [i_0 + 2]), (arr_8 [i_0 - 2] [i_0] [i_0 + 2] [i_0 + 2]))))));
                                var_22 = ((+((-(max((arr_3 [i_1]), -95962276))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 &= ((((((112 == ((max(12, var_7))))))) * (((min(-8628, var_18)) % (!0)))));
    var_24 = ((-((-((max(var_9, var_9)))))));
    #pragma endscop
}
