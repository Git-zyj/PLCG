/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_5, (min(((255 ? -4994411755268838996 : -9223372036854775796)), var_3))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((min(230, (arr_1 [i_0 - 1]))) / 241);
                arr_5 [i_1] [i_0] = ((255 ? -13958 : 241));
                var_12 = (min((min(3350811442075582389, -2252)), (((32704 && (64 < -12))))));
            }
        }
    }
    var_13 &= var_3;
    #pragma endscop
}
