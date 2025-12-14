/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_3));
    var_19 = (max((max(((var_0 ? var_0 : 1773926956)), (max(var_16, 51)))), (~51)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = min((((((max((arr_0 [i_0] [i_0]), 5504889285132530865))) ? (arr_3 [i_0]) : 1))), ((15360 ? (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_0 [i_0] [i_0]))) : ((((arr_0 [i_0] [i_0]) ? 8948276025572348538 : (arr_0 [i_0] [i_0])))))));
        arr_5 [i_0] = ((-35184372088832 ? var_9 : ((-(arr_0 [i_0] [i_0])))));

        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            var_20 = ((((arr_9 [i_1 - 2] [i_1 + 2] [i_1 + 2]) || (arr_8 [i_0] [i_1 - 2]))));
            arr_10 [i_0] [i_0] [i_0] = max((max((arr_2 [i_1 + 1]), (arr_2 [i_1 - 2]))), (!1338653456));
            var_21 = ((0 ? 5504889285132530881 : 622772320));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_13 [i_0] [i_0] = ((min(((0 ? 1056964608 : 13510798882111488)), ((((arr_0 [i_2] [i_0]) ? (-9223372036854775807 - 1) : 524288))))) >> ((((~(arr_9 [i_0] [i_0] [i_0]))) - 9273983589746964598)));
            var_22 ^= ((((~6937496553617798736) & (arr_3 [i_0]))));
        }
        var_23 ^= (~1);
    }
    #pragma endscop
}
