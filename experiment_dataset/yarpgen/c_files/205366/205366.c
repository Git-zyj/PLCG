/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    var_18 = ((((-111 ? -var_7 : var_11)) == ((min((min(var_14, 6)), var_12)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [12] &= (!var_3);
                var_19 = (min(var_19, ((max((((var_0 ? var_3 : var_15))), ((((min(111, 33521664))) ? (!var_5) : ((min(var_16, var_11))))))))));
                var_20 = (max(var_20, (min(-8954160605052624038, 33521667))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_21 = (min(var_21, ((((arr_8 [i_2] [i_2] [i_1 - 1] [i_2]) ? (((~((26381 ? 33521664 : -127))))) : -3179854490848946046)))));
                            arr_10 [i_0] [i_1] [i_0] [i_0] [i_0] = ((8954160605052624038 ? 17168 : ((2864940054972112320 ? -23892 : 24063))));
                            arr_11 [i_1] [i_2] [i_1] [i_1] = (((((((var_2 ? (arr_6 [i_0] [i_0] [i_2] [i_3]) : 0))) ? (((0 & (arr_2 [i_0] [i_0])))) : (((arr_8 [i_1] [i_1] [i_1] [i_1]) / 682200072469723232)))) < ((((min(var_7, -33521664))) ? (max((arr_6 [i_0] [i_1] [i_0] [1]), 8954160605052624038)) : (~-6295)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
