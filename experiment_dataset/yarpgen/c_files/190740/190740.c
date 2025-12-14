/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_20 = (min(var_20, (arr_4 [i_2] [i_1 - 2])));
                            var_21 = (max(var_21, (((-(2189725500 & 77))))));
                            var_22 ^= 32055;
                            var_23 = ((-((max((arr_8 [i_1] [i_2 - 2]), 742)))));
                        }
                    }
                }
                arr_9 [i_1] [i_1] = (((arr_4 [i_1] [i_1 + 3]) ? (((95657071377672313 < ((((!(arr_0 [i_1 - 2])))))))) : -1));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        arr_20 [i_6] [0] [i_6] &= 9763460989850041881;
                        arr_21 [i_4] [i_4] [i_5] [i_4] = (((-(arr_14 [i_5] [i_5]))));
                    }
                    for (int i_8 = 1; i_8 < 10;i_8 += 1)
                    {
                        var_24 |= -28674;
                        arr_25 [i_5] [i_5] [i_5] [i_5 + 1] [i_6] &= (((max((0 & 1), (max((arr_16 [1] [i_5] [i_6] [i_6]), (arr_19 [i_4] [i_4] [i_4]))))) > (max((max(15425221797137516410, 1)), (var_17 > 2147483647)))));
                    }
                    var_25 = (((max(3025157220, -4346)) > 19));
                }
            }
        }
    }
    var_26 = -21444;
    #pragma endscop
}
