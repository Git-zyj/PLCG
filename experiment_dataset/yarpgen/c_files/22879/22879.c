/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((var_17 | 1) / (max(var_17, var_5))))) * ((var_8 ? (40 * 0) : 1106914016))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_20 = (min((((((!(arr_1 [i_0] [i_1])))) | 244)), (arr_1 [i_0] [i_0 + 1])));
                    var_21 = (max(var_21, (((-(2041476219 > var_11))))));
                    var_22 = var_11;
                    var_23 = ((17991 ? (var_0 && 61) : ((var_17 ? var_13 : var_0))));
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    var_24 |= (((!var_16) >= var_6));
                    var_25 = (min(var_25, (((var_6 ? (((!((min(255, var_17)))))) : 127)))));
                    var_26 = ((!(arr_3 [i_0 - 1] [i_1])));
                }
                var_27 = (min((min(((0 ? 32532 : var_3)), var_3)), -var_14));
                var_28 += ((((127 && -6577249805773664531) && (17990 / 16320))));
                var_29 = ((((max(1680772357, 1445465073197335482))) ? (((((min(240, var_8))) && (255 && 217)))) : (min((arr_3 [i_1] [i_0 + 1]), var_5))));
            }
        }
    }
    #pragma endscop
}
