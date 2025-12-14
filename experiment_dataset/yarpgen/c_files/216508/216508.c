/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0 - 1] [i_0] = (min(231, ((((-9223372036854775807 - 1) < ((var_11 ? -6801626510295775336 : (arr_4 [i_0] [i_0] [i_1]))))))));
                arr_7 [i_0] [i_1] [i_0] = ((arr_0 [i_0 + 1]) ? (min((arr_3 [i_0] [i_0]), (min((arr_0 [i_0]), (arr_1 [i_0 + 2] [i_1]))))) : ((~(arr_1 [i_0] [i_1]))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 20;i_3 += 1)
        {
            {
                var_12 = (max(var_12, ((min(((!(arr_8 [i_3 - 1]))), ((!(var_10 - 134))))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_17 [i_2] [i_2] [i_2] [i_4] [i_4] [i_2] |= ((((((((121 ^ (arr_9 [i_2])))) ? (((!(arr_10 [i_2] [i_3 - 4] [i_4])))) : (((arr_10 [i_2] [i_2] [i_2]) ? var_4 : (arr_11 [i_4])))))) % (min(2147483634, 6801626510295775313))));
                            var_13 = (min(var_13, (((-((((max(19822, (arr_11 [i_4])))) ? 45 : (~9223372036854775807))))))));
                        }
                    }
                }
            }
        }
    }
    var_14 = (((min((var_6 || 9223372036854775782), (min(var_9, var_11)))) + var_9));
    #pragma endscop
}
