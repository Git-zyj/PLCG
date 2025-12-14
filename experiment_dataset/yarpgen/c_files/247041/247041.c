/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (1 / -2717);
    var_17 = var_14;
    var_18 = -5469347199246013562;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = ((-(min((arr_0 [i_2]), (arr_4 [i_2] [i_1 - 1] [i_0])))));
                    var_20 = (min((arr_6 [i_1 - 2] [i_1 - 2] [i_0]), (((arr_6 [i_1 - 1] [i_0] [i_0]) != var_9))));
                    var_21 = ((((~29149) ? (arr_7 [i_0] [i_0]) : (1 ^ 9223372036854775807))));
                }
            }
        }
    }
    #pragma endscop
}
