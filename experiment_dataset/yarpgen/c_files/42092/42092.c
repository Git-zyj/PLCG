/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_16 = ((-(arr_0 [13])));
            var_17 = (~-6266707683508854372);
            var_18 = var_6;
        }
        var_19 &= (!(arr_5 [i_0]));
        var_20 = (max(var_20, 3461));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_21 = (max(var_21, -var_8));
        var_22 &= ((-(min(var_6, (arr_5 [i_2])))));
        var_23 = var_4;
        var_24 = var_3;
    }
    var_25 = (min(var_25, ((min((var_15 || 1365742780), 11271)))));
    var_26 = (max(var_26, 66));
    #pragma endscop
}
