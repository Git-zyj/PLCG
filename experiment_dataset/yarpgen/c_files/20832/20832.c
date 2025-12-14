/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = ((~(((arr_1 [i_1 - 1]) ? 1573969234571224686 : (arr_4 [i_1 + 3] [11] [i_1])))));
                arr_5 [i_1] = (((~1407592563) ? (((~(arr_3 [i_1] [i_1 - 2])))) : ((~((var_14 ? (arr_4 [i_0] [i_0] [i_0]) : 3119902092))))));
                arr_6 [i_0] [i_0] = ((((((arr_4 [5] [i_1 - 2] [i_0]) ? var_15 : (arr_3 [i_0] [i_1 + 2])))) ? (!-4782338176752525388) : (~78)));
            }
        }
    }
    var_21 = ((-(((!2) ? (((var_4 ? var_9 : var_18))) : var_2))));
    var_22 = (((--18446744073709551613) ? var_3 : var_1));
    #pragma endscop
}
