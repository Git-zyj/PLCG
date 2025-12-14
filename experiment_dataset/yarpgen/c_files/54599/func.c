/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54599
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
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_11) >= (76609305)))) % ((~(var_5)))))) ? (var_3) : (((/* implicit */unsigned long long int) var_5))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 24; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -1608572532)) && (((/* implicit */_Bool) -76609304)))) ? (((-76609298) & (var_4))) : (((var_5) & (var_12)))))) ? (max((min((((/* implicit */unsigned long long int) var_11)), (5370073509219675666ULL))), (1ULL))) : (min((18446744073709551602ULL), (var_3))));
                                var_14 = max((((((3670016) >= (-76609291))) ? (((/* implicit */unsigned long long int) var_10)) : (min((18446744073709551606ULL), (var_1))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_3) : (var_3)))) ? (min((var_7), (18446744073709551574ULL))) : (max((((/* implicit */unsigned long long int) 1191418889)), (10333117646104602517ULL))))));
                                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551596ULL)) ? (((((/* implicit */unsigned long long int) var_2)) * (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_2) : (-1713544375))))))) ? ((~(max((((/* implicit */unsigned long long int) var_4)), (var_6))))) : (max((((/* implicit */unsigned long long int) ((((-1693277310) + (2147483647))) >> (((-1713544382) + (1713544396)))))), (min((var_9), (var_6))))))))));
                            }
                        } 
                    } 
                } 
                var_16 -= ((((min((var_9), (((/* implicit */unsigned long long int) var_11)))) - (((/* implicit */unsigned long long int) var_12)))) * (((((/* implicit */unsigned long long int) 76609323)) + (max((((/* implicit */unsigned long long int) var_4)), (4611686018426339328ULL))))));
                arr_13 [i_0] [i_0] |= ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */unsigned long long int) var_5)), (var_9))) : (18446744073709551615ULL))) & (((/* implicit */unsigned long long int) var_5))));
                arr_14 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) -718474023)) ? (var_7) : (min((min((((/* implicit */unsigned long long int) -147295745)), (var_1))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 10666161)) : (18446744073709551584ULL)))))));
                var_17 = ((/* implicit */int) ((((((((/* implicit */_Bool) 31457280)) ? (var_3) : (2179046073981773717ULL))) / (((((/* implicit */_Bool) var_4)) ? (704872419966606164ULL) : (var_8))))) * (min((((((/* implicit */_Bool) 8122291294785179250ULL)) ? (32ULL) : (var_0))), (min((var_0), (10ULL)))))));
            }
        } 
    } 
}
