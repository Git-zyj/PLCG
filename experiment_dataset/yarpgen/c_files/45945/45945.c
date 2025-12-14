/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= 34653;
    var_17 = (min(var_9, ((((max((-32767 - 1), var_5))) ? var_9 : var_4))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_18 |= (min(((((3147219498 <= -31160) ? 3147219495 : ((var_12 ? var_3 : 9))))), (((var_2 ? var_3 : 31181)))));
                                var_19 ^= (((min(8488372997763495385, 31181)) <= -843899208));
                            }
                        }
                    }
                    var_20 += ((((219 ? (((arr_2 [i_2]) ? 29902 : var_11)) : 80)) / (arr_1 [i_0 + 1])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_21 -= (((((((32766 ? var_1 : var_0))) | 145)) | (((~(min(var_6, var_5)))))));
                                var_22 = (min(((-7310491349599724439 ? var_6 : 3)), var_10));
                                var_23 -= 1630407483465575031;
                                var_24 = var_15;
                                var_25 ^= (((min(0, (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [0]))) - var_13));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
