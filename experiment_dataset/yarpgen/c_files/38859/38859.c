/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_1] [i_2] = (min(((1034629741 - (arr_7 [i_0] [i_1] [i_2]))), (((arr_7 [i_0] [i_1] [i_2]) - var_10))));
                    arr_11 [i_0] [i_1] [i_2] = -9223372036854775802;
                    arr_12 [i_1] = (min((((!(var_7 > -5519591141783252358)))), -123));
                }
            }
        }
    }
    var_16 = (min(((max((var_1 < 0), (max(-126, -126))))), 2147483647));
    var_17 = (max(var_17, var_7));
    #pragma endscop
}
