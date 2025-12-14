/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_7;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_13 = (max(var_4, (max(((31672 ? var_3 : var_11)), var_10))));
                    var_14 = (max(var_14, 3490));
                    arr_8 [i_0] [13] = ((150 ? ((-var_2 ? var_8 : (max(var_2, var_8)))) : (min(3491, (max(var_10, var_2))))));
                    var_15 = (~var_10);
                }
            }
        }
    }
    var_16 = (-4093 ? (((((max(2147483647, var_5))) ? (~var_8) : (max(-3491, 0))))) : (min(-230153697, ((var_9 ? var_2 : var_9)))));
    var_17 = ((!((!((min(4294967287, var_10)))))));
    var_18 = (max(var_18, (((~((((max(var_4, 112))) ? ((91 ? 6006828170152290616 : var_11)) : (max(1370931613, var_2)))))))));
    #pragma endscop
}
