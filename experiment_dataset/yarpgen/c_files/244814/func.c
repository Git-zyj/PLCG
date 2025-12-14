/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244814
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
    var_10 = ((/* implicit */short) (~((~(min((var_6), (var_7)))))));
    var_11 += ((/* implicit */_Bool) min((-2874140795885000416LL), (2874140795885000408LL)));
    var_12 = ((/* implicit */short) -2874140795885000416LL);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) -2874140795885000405LL);
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 16; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_14 ^= ((/* implicit */signed char) (~(min((max((((/* implicit */unsigned long long int) arr_8 [i_3 - 1] [i_2] [i_1] [i_0])), (18446744073709551614ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_5 [(short)17] [i_3 - 1])))))))));
                            arr_11 [i_3] [i_0 + 1] [(signed char)9] [i_1] [i_0 + 1] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) (signed char)52)), (((((var_3) ? (((/* implicit */int) (short)17877)) : (var_7))) | (((/* implicit */int) (signed char)51))))));
                            arr_12 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_4 [i_3]))))))) | (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? ((+(18309980274777463051ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3] [i_2 + 2] [i_1] [i_0])))))));
                        }
                    } 
                } 
                var_15 ^= ((/* implicit */unsigned char) min(((~(((/* implicit */int) (!(((/* implicit */_Bool) -8204924035119624976LL))))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((var_8), (((/* implicit */short) var_0))))))))));
            }
        } 
    } 
}
