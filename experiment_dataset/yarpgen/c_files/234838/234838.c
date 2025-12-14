/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((-((min((arr_0 [i_0 + 2] [i_0 + 4]), (arr_1 [i_0]))))));
                var_19 = ((-(min(((max((arr_4 [i_0]), (arr_0 [i_0] [i_1])))), ((var_6 ? (arr_5 [i_1] [i_0]) : (arr_4 [i_0])))))));
                arr_7 [i_0] [i_1] [i_0] = var_1;
                var_20 *= ((-(min((arr_5 [i_1] [i_1]), (arr_0 [i_1] [i_0 + 2])))));
            }
        }
    }
    #pragma endscop
}
