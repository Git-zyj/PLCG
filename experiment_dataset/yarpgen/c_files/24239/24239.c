/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_15 += 0;
                                arr_13 [i_0] [i_2] = ((-1098776890143592209 / ((min(227, var_11)))));
                                var_16 += var_12;
                                var_17 = (max(var_17, ((min(((((arr_3 [i_0] [i_2 + 1] [i_2]) ? (min(1098776890143592208, var_0)) : (arr_5 [i_0])))), (max(122, var_14)))))));
                            }
                        }
                    }
                }
                var_18 *= ((((-26719 ? 7864144756412027511 : 122)) < -125));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_19 = (max(var_19, ((((((2661010874626132745 ? 1098776890143592209 : 1098776890143592208))) ? 28950 : 6760628557254435440)))));
                            var_20 = (((((!((var_1 || (arr_2 [i_0] [i_1] [i_6])))))) << (((((arr_9 [i_0] [i_1 - 1] [i_6]) ? (arr_15 [i_6] [i_6 + 1] [i_6 + 1] [i_6]) : var_14)) - 1150520158))));
                            arr_20 [i_6 + 1] [i_5] [i_1] = (!-1098776890143592209);
                        }
                    }
                }
            }
        }
    }
    var_21 *= ((((897349354 ? -9223372036854775804 : 897349336))) ? ((((var_12 >= (var_13 % var_0))))) : ((((-2729980526749185537 ? var_9 : -1098776890143592209)) | ((max(var_3, -2147483643))))));
    #pragma endscop
}
