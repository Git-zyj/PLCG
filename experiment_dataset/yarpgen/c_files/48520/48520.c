/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 3392926309;
    var_15 = (min(var_15, (902040986 <= 3706802257)));
    var_16 = max(2203143734990037911, 0);
    var_17 = (min(var_17, (65533 ^ 513913235)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_0] = ((((min(-254, var_10))) ? (~175) : (!var_13)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((max((min((arr_15 [i_0] [i_1] [i_2] [i_3] [i_4]), (arr_13 [i_1] [i_2] [i_3] [i_0]))), var_11)) == (arr_16 [i_0] [i_4])));
                                var_18 ^= ((min((max(71, 524287)), (arr_11 [i_1]))) * (((((-102 ? 128849018880 : 124)) <= (arr_7 [i_4 - 1] [i_1] [i_2] [i_3])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_19 = (arr_22 [i_1] [i_1] [i_5]);
                                var_20 = ((~(arr_20 [i_6])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
