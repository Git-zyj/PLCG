/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, ((((((((5 ? 6 : 26582)) / ((min(30833, 26582)))))) || 921320336)))));
                                var_18 ^= (((arr_12 [13]) ^ (min((min(921320331, var_8)), (arr_5 [i_0] [i_2])))));
                                var_19 &= ((min((!var_6), (min((arr_3 [i_1] [i_2]), -18598244)))));
                                var_20 += (min((min((min(921320336, (arr_12 [13]))), (arr_13 [i_0] [i_1] [i_3 - 1] [i_3] [i_3 - 1] [i_4]))), (!18446744073709551615)));
                                var_21 = -38948;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_22 ^= (max((min((arr_13 [i_6] [i_5] [i_2] [i_1] [14] [13]), ((min((arr_17 [i_6] [i_5] [i_2] [i_1] [i_0] [i_0]), (arr_10 [i_0] [13])))))), (((((((arr_3 [i_5] [0]) ? var_1 : var_9))) || ((7 > (arr_7 [i_0] [i_1] [i_2]))))))));
                                arr_20 [i_6] [5] [i_1] [i_0] = (max(var_16, (min((var_7 <= var_10), (min(921320336, var_16))))));
                            }
                        }
                    }
                    var_23 = (min(var_23, (7 + 1936409135)));
                }
            }
        }
    }
    var_24 &= (min(var_6, (min((max(var_13, var_7)), var_12))));
    var_25 &= (min(3373646966, (((((var_1 ? var_15 : var_13))) ? var_3 : ((6 ? var_10 : var_8))))));
    #pragma endscop
}
