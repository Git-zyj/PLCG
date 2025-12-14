/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((-((-((878298229519563805 ? 19 : 74))))));
                arr_8 [i_0] [i_0] = ((+((+(((-44 + 2147483647) >> (2241541512 - 2241541500)))))));
                arr_9 [i_0] = ((((var_10 ? var_4 : (((!(arr_1 [i_0])))))) / (arr_1 [6])));
            }
        }
    }
    var_16 &= var_6;
    var_17 = (!var_4);
    #pragma endscop
}
