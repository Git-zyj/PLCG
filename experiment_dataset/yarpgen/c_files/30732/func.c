/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30732
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */int) min((((((/* implicit */_Bool) ((arr_0 [i_0 - 1] [i_0 - 1]) << (((/* implicit */int) (unsigned char)19))))) ? (((/* implicit */unsigned long long int) (+(3594950137U)))) : (arr_0 [i_2 + 1] [i_1 + 1]))), (((/* implicit */unsigned long long int) var_0))));
                    arr_6 [i_0] [i_1] [i_2 - 1] [i_1] = ((/* implicit */int) 3958767517U);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_12 [i_3] [13U] [i_4 - 1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2088177692)) ? (((/* implicit */long long int) 3958767518U)) : (0LL)));
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3)))))));
                                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) 17912888172941496103ULL)) ? (min((((((/* implicit */_Bool) var_14)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 336199791U)) ? (arr_11 [i_3] [i_1] [i_2 + 1] [i_3] [(unsigned char)4] [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 3958767513U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (336199783U))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (~(3833343521U)))) ? (((arr_1 [i_0 + 3]) ^ (3958767504U))) : (var_0))));
                    arr_13 [i_0] [i_1] [i_2 - 1] = ((/* implicit */short) arr_5 [i_0 + 2] [i_1 + 3] [i_2 - 1] [i_2]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_12);
}
