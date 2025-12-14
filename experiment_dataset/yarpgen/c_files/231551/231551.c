/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 += (~1223602074);
                var_18 -= ((~((1223602071 ? 1982910336 : 38))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_19 = (((arr_12 [i_2]) ? (!-1223602071) : var_3));
                var_20 = (max((max(218, (arr_9 [i_3]))), ((max((arr_1 [i_3] [0]), (arr_1 [i_2] [i_3]))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_21 ^= (min(((min((arr_7 [i_2]), ((var_0 ? var_5 : var_13))))), var_8));
                            arr_19 [i_4] [i_4] [4] [8] [i_4] [i_4] = (min(var_11, var_8));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
