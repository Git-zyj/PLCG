/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((3959618872 + 32767) ? ((127 ? 32746 : 47366)) : var_5));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_11 |= 32764;
                var_12 = ((((max((var_3 >= 1), -112))) ? -123 : (!4017)));
                var_13 = ((~((-1 ? (min(var_6, 121)) : ((((!(arr_3 [i_1 - 2] [1])))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                arr_9 [0] [i_2] = var_2;
                arr_10 [i_3] = ((((((!((max(-83, 65))))))) >= ((((983280828310158047 ? 5002710916692471262 : -9223372036854775797)) + 422549582))));
            }
        }
    }
    var_14 = ((((((var_9 ? 35048 : -1137363786)) ? ((min(126, 19988))) : var_4))));
    #pragma endscop
}
