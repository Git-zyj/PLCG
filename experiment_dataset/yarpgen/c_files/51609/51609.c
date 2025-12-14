/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_8;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = (128 ? 65407 : 65407);
                arr_5 [1] &= ((65407 / 98) ? ((((((arr_3 [i_1]) * (arr_4 [i_1] [i_0])))) ? (142 * 65407) : ((var_10 ? 98 : (arr_1 [i_1]))))) : ((~((var_7 ? var_1 : 128)))));
            }
        }
    }
    var_13 = (min(var_13, (((((max((~var_6), 65408))) ? (min(((var_4 ? var_0 : var_1)), ((113 ? 128 : var_8)))) : ((max((min(65416, 65407)), (128 != 133)))))))));
    var_14 = ((!(((~(!var_1))))));
    #pragma endscop
}
