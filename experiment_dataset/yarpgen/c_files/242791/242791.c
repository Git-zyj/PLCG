/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 = (((((405737979 ? -1 : (arr_6 [1] [5] [i_2 - 1])))) ? (!var_15) : (max((!-1), ((var_12 ? -85 : (arr_6 [i_2] [i_1] [i_0 - 1])))))));
                    var_18 = (((((0 - 0) % (1 && 1)))) ? (~-1) : 1);
                }
            }
        }
        var_19 = ((1 ? ((min(((3832772925 ? 1 : -390917131)), ((-34 ? 3 : -1242698646))))) : 2166013066));
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        arr_20 [16] [i_0] [i_4] [i_5] [i_0] = 64;
                        var_20 = (max((((4887 ? ((((arr_2 [i_0]) > var_3))) : 1))), (arr_2 [1])));
                    }
                }
            }
        }
        arr_21 [i_0] = (((!1) ? var_16 : (max(1, ((1 ? (arr_0 [i_0]) : -5))))));
    }
    for (int i_6 = 4; i_6 < 8;i_6 += 1)
    {
        arr_25 [i_6] = 39;
        arr_26 [i_6] [i_6] = (min(((1 ? (arr_22 [i_6 - 1] [i_6 + 4]) : 33)), (max(1242698620, (arr_10 [i_6 + 2])))));
    }
    var_21 -= -1242698640;
    #pragma endscop
}
