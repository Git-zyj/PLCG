/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 *= (min(((max(-var_3, (max(20340, -434834532))))), ((((max(434834536, var_11))) ? var_11 : 434834536))));
                    arr_7 [17] [i_0] [i_0] = var_9;
                    var_13 = (((((((max((arr_0 [i_0]), -1))) ? 434834548 : var_4))) ? ((-(min(18446744073709551615, var_8)))) : 0));
                }
            }
        }
    }
    var_14 *= ((0 ? 242 : 0));
    var_15 = max((min(16338, ((1 ? 1 : -5875822018173287797)))), ((min(var_6, -73))));
    #pragma endscop
}
