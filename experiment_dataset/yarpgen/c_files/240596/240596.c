/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((max(((18446744073709551609 ? 479795693 : 18), (arr_1 [i_0] [i_1]))))))));
                arr_5 [i_1] [i_1] [i_1 - 1] = (((((((((arr_2 [i_0]) ? -1319750908 : var_2))) ? var_11 : ((-2147483637 ? (arr_1 [i_0] [i_0]) : 0))))) ? (!32) : (90 >= 27)));
            }
        }
    }
    var_14 *= (-2147483647 - 1);
    #pragma endscop
}
