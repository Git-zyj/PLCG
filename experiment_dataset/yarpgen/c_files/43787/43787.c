/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] = (-1098203051013598247 ? 15582 : 4294967295);
                var_17 = ((max(1232, (((arr_4 [i_0]) ? var_1 : var_10)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_18 += (((((((arr_3 [i_0 + 3] [i_1] [i_0 + 3]) ? 1 : var_4))) ? 4294967295 : (max(803496897, (arr_1 [i_1] [i_3 - 1]))))));
                            var_19 -= ((((min((arr_2 [i_0 + 3]), (arr_2 [i_0 + 1])))) % ((max((arr_2 [i_0 + 1]), (arr_2 [i_0 - 1]))))));
                        }
                    }
                }
                arr_10 [i_0] [i_0] = (((((((min(var_13, var_3))) ? ((var_8 ? var_7 : 4444)) : (arr_3 [i_0] [i_0] [i_1])))) ? var_0 : (((((31 ? (-9223372036854775807 - 1) : 57))) ? (((!(arr_9 [i_0] [i_1] [i_0])))) : var_2))));
            }
        }
    }
    var_20 = var_9;
    #pragma endscop
}
