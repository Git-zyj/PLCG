/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_1] [i_0] [1] = ((((min(1, 1)))) / ((((((arr_13 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]) ^ -9022))) ? var_15 : 1)));
                                var_17 = ((+(((arr_1 [i_0]) % (~var_9)))));
                                arr_15 [10] [10] [i_2 - 1] [i_0] [i_2 - 1] = (((--8949) * (!8949)));
                                arr_16 [18] [i_0] = (((((arr_12 [i_2 - 1] [i_2 - 1]) >= (arr_12 [i_2 - 1] [i_2 - 1]))) && var_0));
                            }
                        }
                    }
                    arr_17 [1] [i_0] [i_0] [i_0] = var_9;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 13;i_9 += 1)
                        {
                            {
                                arr_33 [i_9] [9] [i_9] [i_9] [i_9] [i_9] [i_5] = ((max((arr_32 [i_6] [12] [i_7] [i_8 - 1] [i_7] [i_5] [i_5]), (arr_32 [i_5] [i_5] [i_5] [4] [i_7] [i_5] [i_9 - 1]))) != ((-(arr_32 [i_5] [i_6] [i_7] [i_6] [0] [13] [1]))));
                                var_18 ^= (arr_22 [1] [1]);
                            }
                        }
                    }
                }
                var_19 = (max(var_19, ((min((896 >= var_11), (!2236832639470127325))))));
            }
        }
    }
    #pragma endscop
}
