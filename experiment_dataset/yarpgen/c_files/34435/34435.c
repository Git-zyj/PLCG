/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((1767156625 ? 4294967295 : 198)) ^ var_0);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_15 -= ((((((198 ? var_11 : 16882)))) ? (((((1 ? (arr_3 [i_0]) : 1767156625)) << (((450041496866016362 - 57273) - 450041496865959083))))) : (min(var_13, (-1222387242395471637 / 3257965863)))));
                arr_4 [i_0] [i_1] [i_1] = (min((((arr_3 [i_0 + 2]) ? (arr_1 [i_0] [i_1]) : (~var_3))), (arr_0 [i_0] [i_0])));
            }
        }
    }
    var_16 = var_6;
    #pragma endscop
}
