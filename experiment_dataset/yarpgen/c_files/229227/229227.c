/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = (~198);

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_21 *= (((max(-19793, 0))) ? (!1) : (max((min(var_8, 3408845499)), (53 - 19895))));
            var_22 = ((19793 >= (max(var_3, (((arr_0 [i_1]) ? (arr_4 [i_0] [i_0] [i_0]) : 1))))));
            arr_7 [i_0] [i_0] = ((((((arr_6 [i_0] [i_0] [i_1]) % ((127 << (3820843129 - 3820843107)))))) ? (arr_6 [i_0] [i_0] [i_0]) : (max((max(19793, 755644649)), (max((arr_5 [i_0] [i_1]), 47))))));
        }
        var_23 &= ((((min((arr_0 [i_0]), (arr_3 [i_0] [i_0])))) != (((arr_0 [i_0]) >> (var_2 + 22738)))));
    }
    var_24 = (max((3408845499 & 0), ((min(var_13, (max(var_0, var_5)))))));
    #pragma endscop
}
