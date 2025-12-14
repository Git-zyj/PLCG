/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min((var_0 <= 233), var_16))) ? (((var_1 ? ((min(var_11, var_4))) : var_2))) : (8795019280384 / var_2)));
    var_19 = (!((min(3728895784, (var_6 * 123)))));
    var_20 = min(var_10, var_10);

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_21 = (min(var_21, (((393216 + ((((68054809 ? 64 : var_14)) / -192)))))));
        var_22 *= var_8;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_23 = (min(var_23, (min((min(((((arr_1 [i_0]) >> (((arr_4 [i_0 - 1]) - 97818564520863691))))), (arr_4 [i_1]))), 0))));
            var_24 = (!1);
            var_25 = ((-(((-3511064782529460348 && 8855151838892977763) ? 3179691146643254694 : ((var_0 ^ (arr_2 [i_0])))))));
        }
        var_26 = -268435456;
    }
    for (int i_2 = 1; i_2 < 8;i_2 += 1)
    {
        arr_8 [i_2] [i_2 + 1] = (((((-(min(4, var_14))))) ? (((((arr_3 [i_2] [i_2]) - (arr_3 [i_2] [i_2 + 1]))))) : -5920760262310491162));
        var_27 = (max(var_27, var_12));
    }
    var_28 = (((4179178219756233614 >> (8246738417209159257 - 8246738417209159202))));
    #pragma endscop
}
