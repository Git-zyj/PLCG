/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 *= (((((-0 << ((((-(arr_6 [i_2 - 4] [i_1 - 1]))) + 27))))) ? (((~(!var_10)))) : (max((var_7 | var_3), (((arr_2 [i_0] [i_0]) ^ 168))))));
                    var_18 |= (arr_8 [4] [i_1 - 1] [i_2 + 1]);
                    var_19 = ((((-(((arr_6 [i_0] [i_1]) / (arr_2 [i_1] [i_2 + 2]))))) / (arr_0 [4])));
                }
            }
        }
    }
    var_20 = ((!(!var_15)));
    var_21 = -var_5;
    #pragma endscop
}
