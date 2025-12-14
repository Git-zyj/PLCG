/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] [i_1] = ((((((((var_13 ? (arr_8 [i_1 - 3] [i_1] [3] [i_1]) : (arr_3 [i_0] [i_1 + 1] [i_1])))) ? (((arr_5 [2] [2] [i_1 + 2]) ^ -6407991061264970986)) : (arr_8 [i_1 - 3] [i_1 + 1] [i_1 + 2] [i_1 + 2])))) ? (arr_0 [i_1 + 2]) : ((((var_13 >= (((max(var_6, 39760))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 = (arr_13 [i_0] [i_1] [i_0] [i_3]);
                                arr_17 [i_1] [i_1] [i_2] [i_3] [i_4] = ((var_4 ^ (((!(arr_8 [i_0] [i_0] [i_1 - 2] [i_1 - 2]))))));
                                arr_18 [i_0] [9] [i_0] [i_0] [i_0] [i_1] [i_0] = ((max(((1812305474994787965 ? 21078 : -1)), (arr_15 [i_0] [i_0] [i_0] [9]))) < (arr_14 [i_0] [i_0] [i_2] [i_0] [i_4] [i_0] [i_0]));
                                var_20 -= (~var_2);
                            }
                        }
                    }
                    var_21 = var_16;
                }
            }
        }
    }
    var_22 = var_6;
    var_23 = var_14;
    var_24 = (max(var_7, var_15));
    #pragma endscop
}
