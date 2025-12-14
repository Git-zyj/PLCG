/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_15 ^= (7 > 12);
                var_16 = ((((((15657 && 55121) ? 60560 : (~var_10)))) ? 2711568564828559028 : 1380555782));
                var_17 -= (((((-848252885 ? 65528 : 1097785500))) ? (1566973371504993412 * var_9) : 12829386338651550113));
                arr_6 [i_0] = ((66039922838104766 | ((var_5 ? 534773760 : 7))));
            }
        }
    }
    #pragma endscop
}
