/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= var_10;
    var_12 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 -= ((var_6 >= (!var_0)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_14 = var_2;
                                var_15 += (max((arr_14 [i_1] [i_1] [i_1] [i_1] [i_2] [i_2]), var_9));
                            }
                        }
                    }
                    var_16 = ((var_3 && ((min(56, 24433)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_17 = 1;
                                var_18 = (!var_0);
                                var_19 = (min(var_19, ((~((~(arr_9 [i_0] [i_0] [i_0])))))));
                                var_20 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 -= var_8;
    #pragma endscop
}
