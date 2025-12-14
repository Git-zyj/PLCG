/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~(((var_9 != (max(3834, var_1)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, (((-(arr_7 [i_0] [i_0] [i_0]))))));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        var_12 = 9006649498927104;
                        var_13 = (max(var_13, 7805070074332453275));
                    }
                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        var_14 ^= ((max((arr_5 [i_4 - 1] [i_4] [i_4 + 1]), (arr_3 [i_4 + 1]))));
                        var_15 = (max(var_15, (arr_10 [i_2])));
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_16 [i_0] [i_1] [i_5] [i_5] = (!var_9);
                        arr_17 [i_5] [i_2] [i_5] [i_5] [i_0] [i_0] = ((-49 ? ((((!((min(13475641112210508174, (arr_4 [i_0])))))))) : ((8967 ? (((arr_5 [i_0] [i_1] [i_2]) ? (arr_0 [i_2]) : 7805070074332453273)) : (var_3 ^ 15802314538066237383)))));
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        arr_22 [i_2] [i_1] [i_2] [i_6 - 1] [i_1] = ((!(arr_1 [i_6 - 1] [i_1])));
                        var_16 = (!-13118);
                    }
                }
            }
        }
    }
    var_17 += (!var_1);
    var_18 = ((var_0 ? ((var_9 ? 16754317050229814301 : -179046266)) : -5269465363581617498));
    var_19 ^= var_0;
    #pragma endscop
}
