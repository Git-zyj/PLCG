/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_3 % (((var_2 ? (((max(48690, var_7)))) : ((var_2 ? var_2 : var_7)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = ((((min((!var_8), (var_4 * var_5)))) ? var_8 : (!-10)));
                    var_12 = (((((((((arr_3 [i_1]) ? var_3 : (arr_5 [i_2])))) ? var_7 : ((16858 ? 3616 : 16851))))) ? ((((~var_9) ? (!65534) : ((((arr_3 [i_0]) < (arr_2 [i_0]))))))) : ((((((arr_0 [i_1]) & (arr_0 [i_0])))) ? ((var_4 ? var_8 : -1211864386586570234)) : var_8))));
                }
            }
        }
    }
    var_13 = ((((((1521544585 ? var_7 : var_6))) ? var_6 : (~var_7))));
    var_14 = -1347904302;
    #pragma endscop
}
