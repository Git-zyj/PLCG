/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= 212771348;
    var_20 *= var_3;
    var_21 = (min((((min(1, var_2)))), var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [7] [i_2] [i_0] = (i_0 % 2 == zero) ? ((((((18090 << (((((arr_0 [i_1 + 1] [i_0]) + 122)) - 15))))) ? (((0 || (~var_15)))) : ((min(var_0, var_18)))))) : ((((((18090 << (((((((((arr_0 [i_1 + 1] [i_0]) + 122)) - 15)) + 10121)) - 8))))) ? (((0 || (~var_15)))) : ((min(var_0, var_18))))));
                            var_22 = 3390394416;
                            arr_10 [i_0] [i_1] [i_1 + 1] [i_1 - 1] [i_1] = (min(255, 0));
                            var_23 = ((((5841689203473635249 ? -28 : 0)) | var_12));
                            var_24 = (arr_1 [i_0]);
                        }
                    }
                }
                arr_11 [i_0] [i_1] [i_0] = (!var_9);
                var_25 = ((((((arr_7 [10] [i_0] [i_0] [i_0] [i_0] [6]) ? 1893238995 : (arr_6 [i_0] [i_0] [i_0] [i_0])))) ? (((((min((arr_1 [i_0]), -1))) ? 255 : var_16))) : (max(5841689203473635236, 2))));
                var_26 -= (((((3935894096 + (arr_0 [8] [8])))) ? (((-1571181582 + 2147483647) << (((50 <= (arr_1 [i_0])))))) : -18075));
            }
        }
    }
    #pragma endscop
}
