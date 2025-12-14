/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-((var_13 + (var_12 | -3435927751265921878)))));
    var_15 += ((var_2 - (((var_9 || ((((var_6 + 2147483647) << (((var_8 + 104) - 12))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 ^= (arr_3 [i_0] [i_0]);
                var_17 = (min(var_17, ((((max(-3435927751265921878, 523844055)) + (~520192))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                var_18 = (((((!3435927751265921877) * ((max(1, 104))))) - (max((arr_6 [i_2]), (3609906544 < var_0)))));
                arr_10 [i_2] [9] = ((((max(0, (~var_4)))) && (((3435927751265921877 ? -520176 : -520191)))));
                var_19 = ((((((~1159728521) - (min(0, (arr_7 [i_3])))))) ? (arr_3 [i_2] [i_3]) : (((!((157 != (arr_9 [i_2] [i_3] [i_3]))))))));
            }
        }
    }
    #pragma endscop
}
