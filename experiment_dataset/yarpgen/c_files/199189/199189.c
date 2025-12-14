/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_11 << (((16829853328326330594 | var_9) - 16829853328326330592))))) ^ ((var_8 ? (var_1 || -14300) : 5545443380121834373)));
    var_16 = -522335736083780237;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((min((arr_0 [i_1] [i_1]), 522335736083780243))))));
                var_18 = (((~1921190164308252801) >> (((min(2542328893494327836, (arr_1 [i_0] [i_1 - 1]))) - 1649504719))));
                arr_4 [i_0] = var_8;
                var_19 = ((((((max(522335736083780257, (arr_1 [i_1] [i_1])))) ? -var_7 : (arr_2 [i_1])))) ? ((4772182581724328414 << ((((var_9 ? (arr_1 [i_0] [i_0]) : 2147483647)) - 1649504757)))) : ((((max(var_1, var_8))) / (min((arr_2 [i_0]), (arr_2 [i_1]))))));
            }
        }
    }
    #pragma endscop
}
