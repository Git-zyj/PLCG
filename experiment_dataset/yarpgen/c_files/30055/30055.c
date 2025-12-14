/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((var_0 << (-11397 + 11420))) == -1373726275));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_14 = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_15 = ((((((((65535 ? (arr_1 [i_1]) : (arr_3 [i_0] [i_0] [i_0])))) || (arr_1 [i_0 + 2])))) <= ((-(arr_0 [i_0 + 2])))));
            var_16 = (max(65516, (((!(arr_0 [i_0]))))));
        }
    }
    var_17 = var_7;
    #pragma endscop
}
