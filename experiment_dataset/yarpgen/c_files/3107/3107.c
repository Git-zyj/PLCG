/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 59045;
    var_19 = (min((((16257 != (((max(-92, 6490))))))), var_3));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_1] = (~788782646);
            var_20 += 73;
        }
        var_21 = (27541 >= 0);

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_22 = 3506184649;
            var_23 = (~-39);
        }
    }
    var_24 = (min(var_24, (((max(788782646, ((min(-5664, 18976)))))))));
    var_25 = var_6;
    #pragma endscop
}
