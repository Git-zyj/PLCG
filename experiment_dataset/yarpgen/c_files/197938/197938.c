/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = arr_1 [2] [i_1];
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] = (arr_2 [i_1]);
                            var_21 = (((((4294967292 ? (arr_3 [i_3] [i_3]) : (7125693841829464869 != var_6)))) ? (3 <= var_4) : var_18));
                        }
                    }
                }
            }
        }
    }
    var_22 = var_18;
    var_23 = -300019296;
    var_24 = ((var_5 ? -var_14 : (min(64, ((var_3 ? 247 : var_8))))));
    var_25 = 95;
    #pragma endscop
}
