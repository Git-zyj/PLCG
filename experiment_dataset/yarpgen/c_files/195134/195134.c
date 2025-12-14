/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 164375698;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_14 = -var_9;
                                arr_14 [i_0 + 1] = (arr_8 [i_4] [i_4] [i_2] [i_3] [i_4] [i_3]);
                            }
                        }
                    }
                    arr_15 [i_2] = ((((((!(~-12263))))) * -121));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_23 [6] [i_1] [i_5] = (max(((!(arr_12 [i_0] [i_0 + 1] [i_0 - 4] [i_0] [i_0 - 1]))), ((!(!0)))));
                                var_15 = ((-(arr_11 [i_0] [i_1] [5] [i_5] [i_6])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
