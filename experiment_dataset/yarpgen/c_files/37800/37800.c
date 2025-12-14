/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (max((((~(arr_4 [i_1])))), (((arr_5 [i_1]) / ((var_10 ? 4643734288414822946 : var_0))))))));
                arr_6 [i_0] = min((var_1 * 0), (((arr_5 [i_0]) ? (arr_1 [i_1] [i_1]) : (arr_5 [i_0]))));
                arr_7 [i_1] [i_0] [i_0] = (arr_1 [i_0] [i_0]);
                arr_8 [i_1] = 112;
            }
        }
    }
    var_12 |= (var_0 / var_2);
    var_13 = 592600381;
    #pragma endscop
}
