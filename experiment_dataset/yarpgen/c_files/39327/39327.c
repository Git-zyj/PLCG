/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [17] &= ((((~((var_2 ? 3 : 102)))) * (arr_3 [i_0])));
                    arr_10 [i_0] [i_1] [1] [i_0] = ((((((8651049471885650994 ? -9922 : -9604))) ? 0 : -861916480)));
                    var_19 += (((((2455949332479308519 ? (((max(14933, var_5)))) : (((arr_5 [i_0] [i_0] [i_1] [i_2]) / (arr_8 [17] [i_0] [17] [i_2])))))) ? (706749761 || -15) : -2147483647));
                    arr_11 [i_0] [i_0] [i_2] = (arr_1 [i_0] [i_1]);
                }
            }
        }
    }
    var_20 &= (max(var_18, var_14));
    var_21 = (max(var_21, (-2147483647 - 1)));
    #pragma endscop
}
