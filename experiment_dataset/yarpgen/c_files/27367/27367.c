/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_8 [i_1] [i_2] [i_2] [i_1] [i_1] = (max(192, (((var_4 ? 177 : 158)))));
                            arr_9 [i_1] = 1981450222;
                        }
                    }
                }
                arr_10 [i_1] [i_1] = ((var_9 || (((3955015255 ? ((32767 & (-9223372036854775807 - 1))) : 192)))));
            }
        }
    }
    var_11 += (-127 - 1);
    var_12 = (!var_7);
    #pragma endscop
}
