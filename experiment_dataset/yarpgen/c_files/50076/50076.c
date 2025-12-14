/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (-6010 ? 8305238697943696465 : 3186182853678695906);
        var_16 = ((-1 ? var_4 : ((40643 & (((arr_2 [i_0] [i_0]) ^ var_13))))));
        arr_4 [i_0] = max(53208, ((-9 ? 37913 : 1)));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_17 = var_6;
            arr_13 [i_1] = ((((((1 | (arr_1 [i_1] [i_2])))) ? (arr_5 [i_1 - 1]) : (arr_8 [i_2]))) == (((arr_5 [i_1 - 1]) * 1)));
            var_18 ^= ((1 ? 32768 : 1876598249));
        }
        var_19 = 1876598249;
    }
    var_20 ^= (var_8 ? (min(var_10, var_12)) : var_9);
    var_21 = (min(((((7057 ? 1255351510426127200 : 262143)) | ((((-32767 - 1) | 2))))), 246));
    var_22 = (((5065645794908166441 & 67106816) | (min(var_1, var_5))));
    #pragma endscop
}
