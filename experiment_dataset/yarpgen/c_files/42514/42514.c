/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-(((506880493 - var_6) ? (!13981555288782974960) : ((13981555288782974942 ? 3910739891356686830 : 3788086802))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] = ((((((((52776558133248 ? 65 : (arr_1 [i_1])))) ? 52776558133243 : 3))) ? 4465188784926576655 : (((52776558133248 ? -51 : 7780540964161815249)))));
                var_20 = (~((~(arr_1 [i_0]))));
            }
        }
    }
    #pragma endscop
}
