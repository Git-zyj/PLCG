/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= 1913938278;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_16 += ((((((arr_4 [i_0] [i_1] [i_2]) ? (arr_1 [i_1] [16]) : (arr_1 [i_0] [i_2])))) ? 65535 : ((((((var_12 ? 65529 : 65531))) <= (arr_3 [i_2] [i_1] [i_0]))))));
                    var_17 ^= 23;
                }
            }
        }
    }
    var_18 = ((~(((~var_12) % ((65500 << (16 - 9)))))));
    #pragma endscop
}
