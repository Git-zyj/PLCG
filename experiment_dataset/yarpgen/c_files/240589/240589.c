/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = ((((max((arr_5 [i_0 + 2]), var_7))) ? (~-9072390104445860539) : (((max((arr_5 [i_0 + 3]), var_3))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_4] = (((((-((var_0 ? 22978 : 22978))))) ? var_2 : (((!(((42557 ? var_2 : 14702061296508059978))))))));
                                arr_15 [i_4] [i_3] [i_2] [i_1] [i_0 + 1] = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 += var_9;
    var_16 = ((var_0 ? ((max(42559, var_12))) : 1538));
    #pragma endscop
}
