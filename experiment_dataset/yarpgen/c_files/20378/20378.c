/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((max(var_18, var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = (arr_5 [i_0] [i_1] [22]);
                arr_8 [i_1] [i_1] [i_0 + 1] = (max((min(5, -972552672)), ((max((min(54566, 56837)), ((min(32138, 0))))))));
                arr_9 [3] [i_1] [3] = ((min(var_6, (min(1804049809, -4073798318440004319)))));
                arr_10 [i_0] [i_0 + 1] [i_0 + 1] = (max((arr_1 [i_0] [i_1]), (max(-7847021192915157239, (~8408671321887419649)))));
                var_21 *= 13603529803216888879;
            }
        }
    }
    #pragma endscop
}
