/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_10 ? ((36102 ? 12933152110026373069 : 5513591963683178548)) : ((12933152110026373086 ? 555499972 : ((12933152110026373065 >> (12933152110026373077 - 12933152110026373021)))))));
    var_20 = ((((((var_4 >= var_5) ? ((60006 ? -5813668657098046445 : 26660)) : (min(var_2, var_6))))) ? (((((((var_14 ? 183 : -555499984))) >= -var_16)))) : var_17));
    var_21 = 2117286446;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_8 [10] [i_0] [10] = (((var_18 - var_13) ? var_12 : (((((var_15 ? var_6 : var_18))) ? var_2 : (var_7 / var_18)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_2] = ((min((((var_10 << (var_0 - 83))), -var_6))));
                            var_22 = (max((min(1081034521, var_2)), (((!(((var_5 ? var_16 : var_13))))))));
                            var_23 = (((var_12 ? (((var_10 ? var_4 : var_3))) : ((var_2 ? var_13 : var_17)))));
                            var_24 = ((((min(var_9, (var_2 != var_12)))) ? (((((var_3 / var_6) && var_4)))) : (min(var_18, (max(var_6, var_3))))));
                            var_25 = (max(var_25, 494405139017902125));
                        }
                    }
                }
                var_26 = var_6;
            }
        }
    }
    var_27 |= (max(((var_15 ? ((114 ? -99 : 12933152110026373077)) : (var_18 - var_4))), (((12933152110026373098 ? 7585117919049948839 : -118)))));
    #pragma endscop
}
