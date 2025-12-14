/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_3 ? ((-(60978 > -1715345488))) : var_10));
    var_20 |= var_9;
    var_21 -= ((((var_15 >= (((var_0 ? var_16 : 249))))) ? (min(var_6, (((var_0 ? 4 : var_16))))) : var_13));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_22 = (max(var_22, ((24 ? ((min(var_6, -1579209349))) : ((((max(255, var_12))) + 3685270920088171156))))));
                                var_23 = ((((~((max(var_11, (arr_8 [i_4 + 1])))))) < ((max((arr_6 [i_0] [i_1 + 2] [i_2 + 3]), (arr_12 [i_1 + 1] [i_2 + 2] [i_4 + 2]))))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_2] = (min((((-1880424116 - 4294967271) + 24)), (arr_8 [i_0])));
                    var_24 ^= (min((((arr_4 [i_0]) * 67104768)), 24));
                    arr_14 [i_0] = var_16;
                }
            }
        }
    }
    #pragma endscop
}
