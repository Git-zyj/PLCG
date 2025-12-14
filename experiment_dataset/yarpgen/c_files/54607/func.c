/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54607
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) var_7);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_1] [i_1] = min((var_10), (((/* implicit */unsigned long long int) arr_2 [i_0])));
                        var_11 = ((/* implicit */_Bool) ((min((((var_8) % (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])))), (((/* implicit */int) arr_9 [i_1])))) << (((4588298213860561519LL) - (4588298213860561500LL)))));
                        var_12 = (i_1 % 2 == zero) ? (min((((var_7) << (((((arr_11 [i_0 - 1] [i_1] [i_0 + 1] [i_0 + 1]) + (1214367044))) - (4))))), (((/* implicit */long long int) ((arr_11 [i_0 - 1] [i_1] [i_0 + 1] [i_0 - 1]) ^ (var_8)))))) : (min((((var_7) << (((((((arr_11 [i_0 - 1] [i_1] [i_0 + 1] [i_0 + 1]) + (1214367044))) - (4))) - (1095492193))))), (((/* implicit */long long int) ((arr_11 [i_0 - 1] [i_1] [i_0 + 1] [i_0 - 1]) ^ (var_8))))));
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((/* implicit */long long int) max((arr_7 [i_0 + 1] [i_0 - 1] [i_0 + 1]), (((/* implicit */unsigned long long int) var_0))));
        var_13 = ((/* implicit */long long int) min((var_13), (var_2)));
        var_14 = ((/* implicit */long long int) min((17061765706101401771ULL), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0 - 1] [12ULL] [i_0]))));
    }
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        var_15 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_6)), (var_0)))) > (var_3))))) <= (((18127748210189338416ULL) << (((arr_5 [i_4 + 1] [8ULL]) - (125465199)))))));
        var_16 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (((((arr_7 [i_4] [i_4 + 1] [i_4 + 1]) + (arr_15 [8ULL] [i_4]))) + (min((763754927210523290ULL), (((/* implicit */unsigned long long int) arr_5 [i_4 + 1] [i_4 + 1]))))))));
    }
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((((/* implicit */_Bool) (~(var_10)))) ? (min((min((var_4), (var_3))), (var_9))) : (max((((/* implicit */unsigned long long int) min((var_7), (-6LL)))), (max((((/* implicit */unsigned long long int) var_7)), (var_9)))))))));
    var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (((var_9) / (4893939003723084851ULL)))));
}
