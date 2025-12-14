/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (((101 < -1757675898) ? (min(1757675897, (arr_0 [i_0]))) : ((((((min(899647983, var_14))) >= (arr_4 [i_0] [i_1 - 2] [i_1])))))))));
                arr_5 [i_1] [i_1 + 2] [i_1 - 2] = (min(((-1 ? 8690 : 1757675897)), (!var_13)));
                var_21 = (((((max((arr_3 [5] [i_1] [i_1]), var_18))) ? (!4520165381845009512) : (var_10 * 4294967295))) * ((-(arr_4 [i_0] [i_1] [9]))));
                arr_6 [i_0] [i_1 + 3] = ((((((arr_3 [i_1] [i_1] [i_1]) ? ((-(arr_1 [i_0]))) : (arr_1 [i_0])))) & (min(var_18, (max(-1110132281252842339, 912776095))))));
            }
        }
    }
    var_22 = (!var_15);
    #pragma endscop
}
