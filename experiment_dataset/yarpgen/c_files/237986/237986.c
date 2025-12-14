/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((~(8866 == 36677)));
                var_12 = ((var_9 * (((var_7 * (!8854))))));
            }
        }
    }
    var_13 = (var_10 * var_5);
    var_14 = (((((!11025666462888007938) ? var_0 : var_3)) == (~var_11)));
    #pragma endscop
}
