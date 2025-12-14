/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((((340743069 ? ((min(var_15, var_5))) : ((min(20643, 255)))))), (((max(var_8, var_9)) + var_13))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (var_13 / (arr_3 [i_0]));
        var_20 = ((5404151835659279651 ? 66 : 32767));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_21 = (min((arr_0 [i_1] [1]), ((var_6 ? var_8 : ((((!(arr_2 [i_1] [4])))))))));

        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            arr_10 [i_2] [i_2] = var_4;
            arr_11 [i_2] [i_2] [i_2] = (((max((arr_8 [i_2] [i_2]), 340743058)) + (((((((arr_0 [8] [1]) + 2061814967))) ? (arr_2 [i_2 + 2] [i_1]) : -var_6)))));
        }
        arr_12 [i_1] = (arr_5 [i_1]);
        var_22 = (min(1, 9572091));
    }
    var_23 = var_5;

    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_16 [i_3] [i_3] = (((((((min(2792484007, 255))) ? (66 && -1911286484) : (-183386740352947232 && 255)))) || (arr_13 [i_3] [i_3])));
        arr_17 [i_3] [i_3] = (min(4294967278, 1351440184));
        var_24 -= ((-(min(5052, ((0 * (arr_15 [i_3])))))));
        var_25 = ((((-(arr_13 [i_3] [i_3]))) ^ (((min(var_13, (!var_2)))))));
    }
    var_26 = var_0;
    #pragma endscop
}
