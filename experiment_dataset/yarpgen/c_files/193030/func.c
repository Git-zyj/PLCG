/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193030
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65532))) : (arr_0 [i_0])))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) (-2147483647 - 1)))) < ((-(((/* implicit */int) ((163595005U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-16030))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1 + 1] [i_0] [i_1] [i_1] [i_1 + 1] = ((/* implicit */unsigned char) ((-690649446409071361LL) + (((/* implicit */long long int) -1560765756))));
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */int) var_9)), (1802898626))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (var_5) : (var_15)))))) : (min((((/* implicit */unsigned long long int) -1802898626)), (((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */unsigned long long int) 15U)) : (8465798332635476304ULL)))))));
                        }
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))), (min((((/* implicit */unsigned long long int) (signed char)11)), (arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 - 1] [i_0 - 1])))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 690649446409071361LL)) ? (((/* implicit */long long int) 428478042)) : (-690649446409071365LL)))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max(((signed char)-104), (var_9))))))));
    var_21 *= ((/* implicit */unsigned short) var_4);
    var_22 = ((/* implicit */int) var_1);
}
