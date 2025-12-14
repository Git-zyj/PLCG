/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min(var_18, (!var_17)))) ? ((~(max(144115188075855872, 6961201380330724353)))) : (((((-6961201380330724380 <= var_4) == 6961201380330724353))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_1] = (min((max((((arr_4 [i_0]) ? var_6 : 6961201380330724352)), -60)), ((((-127 - 1) ^ var_14)))));
                var_21 += (min((arr_1 [i_0]), (max((arr_3 [8] [i_0]), (arr_3 [i_1] [1])))));
                arr_6 [i_1] [i_1] [i_0] = 144115188075855903;
                arr_7 [i_1] [i_1] = 807524513;
            }
        }
    }
    var_22 = ((-(((var_0 | var_0) ? var_7 : (36702 > 7)))));
    var_23 = (max(var_23, 35));
    #pragma endscop
}
