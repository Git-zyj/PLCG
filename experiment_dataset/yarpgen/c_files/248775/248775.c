/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= ((17592186044415 ? 1 : 94));
    var_17 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = ((~((6473347194550520386 ? (arr_5 [i_1 + 1] [i_1 + 2]) : (arr_5 [i_1 + 1] [i_1 + 2])))));
                arr_6 [i_1] [1] = ((6266503580900305216 ? -627015507791284377 : 35864));
            }
        }
    }
    var_19 = (min(var_19, (((min(((18446744073709551609 ? 534319417644122441 : 1), var_3)))))));
    #pragma endscop
}
