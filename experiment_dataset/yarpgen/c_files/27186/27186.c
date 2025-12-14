/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (min((((((var_2 ? var_0 : 0))) ? var_2 : var_11)), (-1 >= var_4)));
    var_17 = (max(var_17, 3526135361));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 *= ((-(((max(7758451520622107401, (arr_7 [i_0])))))));
                var_19 = (((var_3 ? 7758451520622107401 : (arr_2 [i_0]))));
            }
        }
    }
    var_20 = (((((((-48 ? 66 : var_12)) | var_8))) / (((((var_15 ? var_14 : var_10))) ? (~var_11) : var_13))));
    #pragma endscop
}
