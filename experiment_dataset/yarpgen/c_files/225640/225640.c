/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (((((-(~var_7)))) ? ((-((var_4 ? 510 : var_3)))) : (~-209)));
    var_14 = (((((var_4 / (4503599627239424 && 46)))) ? -5201224361378448655 : 4285273510));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = ((0 < (((((-(arr_3 [1])))) ? (((-(arr_1 [i_1])))) : 1478702019))));
                arr_4 [i_0] = ((((-20464 ? var_2 : (arr_0 [i_1])))));
            }
        }
    }
    #pragma endscop
}
