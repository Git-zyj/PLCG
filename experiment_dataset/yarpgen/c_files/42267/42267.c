/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_7 [i_0 + 2] [i_1] [i_0] = 1682725148;
                    var_20 = (max(-112, 108));
                }
                arr_8 [i_0] [i_0] [i_0] = (((16 > 114) ? (min(467311816, 1682725150)) : var_18));
                arr_9 [i_0] = 98;
                var_21 ^= 0;
            }
        }
    }
    var_22 |= var_4;
    #pragma endscop
}
