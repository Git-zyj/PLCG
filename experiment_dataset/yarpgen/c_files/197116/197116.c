/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= 127;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 *= ((((max(var_7, (arr_0 [i_2] [i_2])))) << (127 & 2609811086)));
                    var_15 = ((-(0 != -1)));
                    var_16 += ((((((-1 + 9223372036854775807) << (!1020)))) ? (arr_4 [i_0] [16] [16] [i_2]) : ((((!127) * (arr_0 [i_2] [i_0]))))));
                }
            }
        }
    }
    var_17 = var_6;
    var_18 += 127;
    #pragma endscop
}
