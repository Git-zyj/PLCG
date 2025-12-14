/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 3949181320;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_16 &= var_0;
            var_17 = (min(var_17, (((((((((var_7 << (-1537853363 + 1537853380)))) ? (arr_0 [i_0]) : ((var_2 >> (264241152 - 264241135)))))) ? (((~(((((arr_0 [i_0]) + 2147483647)) >> var_13))))) : (max(((264241150 ? var_2 : 345785976)), (((!(arr_2 [16] [i_1])))))))))));
            var_18 = ((((max((arr_0 [i_1]), -264241144))) / (min(var_12, 264241143))));
        }
        var_19 = (((-264241152 + 2147483647) >> (3373149744540979473 - 3373149744540979444)));
        arr_4 [i_0] = var_0;
        arr_5 [16] [i_0] = var_0;
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = (max(var_2, ((~(((arr_3 [1] [i_2]) | (arr_3 [16] [1])))))));
        var_20 += (var_5 ^ 345785975);
    }
    var_21 = 31;
    var_22 = (min(var_12, ((min(-134531057, 1)))));
    #pragma endscop
}
