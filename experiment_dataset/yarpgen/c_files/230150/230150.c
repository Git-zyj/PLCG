/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_10 = max((((-2139095040 >> (((max(68719476735, 0)) - 68719476720))))), var_5);
                var_11 = (((((1 ? -737877610 : var_1))) ? (!1525322264682655765) : (arr_4 [i_0 + 1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_12 = (min(var_12, (arr_3 [i_2])));
                            var_13 = (min(var_13, (((((arr_2 [i_1]) ? (arr_2 [i_1]) : (arr_2 [i_3])))))));
                        }
                    }
                }
            }
        }
    }
    var_14 = (var_7 << ((((-((var_8 ? var_8 : var_6)))) + 127)));
    var_15 -= 68719476735;
    #pragma endscop
}
