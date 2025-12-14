/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3568
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
    var_12 = ((/* implicit */unsigned long long int) min((var_8), (((/* implicit */long long int) (-(((/* implicit */int) var_4)))))));
    var_13 = ((/* implicit */signed char) var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9283900576287586209ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120)))))) ? (((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 18446744073709551615ULL))))) ^ (((/* implicit */int) ((4ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) min((9223372036854775807LL), (((/* implicit */long long int) var_1))))) >= (7ULL))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 7; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) 18446744073709551615ULL);
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
                            {
                                var_16 = ((/* implicit */int) ((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) (unsigned short)896))))) && (((/* implicit */_Bool) (signed char)18))))))));
                                var_17 &= ((/* implicit */long long int) max((min((var_3), (((/* implicit */unsigned short) var_6)))), (((/* implicit */unsigned short) (signed char)22))));
                                arr_12 [i_4] [i_1] = ((/* implicit */short) min((min((18446744073709551589ULL), (12209271757876830002ULL))), (((/* implicit */unsigned long long int) (signed char)-61))));
                                var_18 = ((/* implicit */unsigned long long int) 3943031922742725407LL);
                            }
                        }
                    } 
                } 
                arr_13 [0LL] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((20ULL), (((/* implicit */unsigned long long int) var_5))))) ? ((~(((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) ((((/* implicit */_Bool) 1ULL)) || (((/* implicit */_Bool) 14426730332666204227ULL)))))));
            }
        } 
    } 
}
