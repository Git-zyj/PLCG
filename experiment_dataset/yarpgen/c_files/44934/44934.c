/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((((min(4294967271, 4294967271)))), (min(var_5, ((var_11 ? var_8 : var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_15 ^= (((((35 ? (((min(var_7, var_3)))) : (25 ^ 12)))) ? (min(33, (min(4294967271, var_8)))) : (((4294967271 ? var_8 : ((min(var_1, var_6))))))));
                            var_16 = (((min((4294967268 + 4294967271), 4294967247)) == 4294967271));
                            arr_12 [i_0] [i_2] [i_0] = 11;
                            var_17 = (max(var_17, 4294967269));
                            arr_13 [i_0] [i_0] [i_2] [i_3] = (min(33, 4294967271));
                        }
                    }
                }
                var_18 = var_9;
                arr_14 [3] = ((var_9 ? (((4294967285 ? var_7 : var_5))) : var_4));
            }
        }
    }
    var_19 = var_3;
    #pragma endscop
}
