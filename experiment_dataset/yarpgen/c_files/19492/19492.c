/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;
    var_17 = (min(var_17, var_12));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 *= ((31457280 * ((((max((arr_3 [i_0] [i_0] [i_0]), var_7)) > ((-(arr_4 [i_0] [i_1] [i_2 - 1]))))))));
                    var_19 += (((arr_5 [i_2] [i_2 + 2]) ? (((((((arr_4 [i_0] [i_1] [i_2 + 1]) ? 12301849947834509783 : 6144894125875041832))) ? (arr_6 [i_1] [i_1] [i_2]) : (max((arr_0 [i_1] [i_1]), (arr_3 [i_0] [i_0] [i_2 + 1])))))) : var_15));
                    var_20 = (((arr_8 [i_2]) ? ((((((74 ? 54 : (arr_3 [i_0] [i_1] [i_2])))) ? 1839379987473243707 : var_8))) : 18446744073709551615));
                    var_21 = var_2;
                }
            }
        }
    }
    var_22 = 18446744073709551608;
    var_23 = ((var_2 ? ((((var_0 & var_15) ? (18446744073709551593 > 18446744073709551615) : var_5))) : var_15));
    #pragma endscop
}
