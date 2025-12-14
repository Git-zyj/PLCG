/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((max(var_0, 11))) ? ((max(var_3, var_3))) : var_3);
    var_13 = (max(var_13, (((var_3 ? var_2 : ((12645895687920513160 ? 32761 : (!255))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_8 [i_1] [i_1] [1] &= ((-(((((arr_0 [i_0 - 1]) + 9223372036854775807)) >> ((((var_9 ? var_3 : (arr_6 [i_0 + 1] [i_1] [i_1]))) + 155))))));
                var_14 += ((-1361505030 ? var_7 : ((210719375 ? 5165813288496359324 : (arr_6 [i_1] [i_0 + 1] [i_0])))));
            }
        }
    }
    #pragma endscop
}
