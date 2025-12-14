/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51722
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 8; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)54)), (var_15)));
                            var_17 = ((/* implicit */unsigned char) var_0);
                        }
                    } 
                } 
                var_18 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) (signed char)54)) - (38)))))), (((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)55))) : (arr_1 [i_0])))));
                var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1])) : (var_6)))) ? (((((/* implicit */int) var_3)) % (var_5))) : (67108608))) >= ((-(((/* implicit */int) var_7))))));
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (max((((arr_1 [i_0]) % (((/* implicit */long long int) ((/* implicit */int) (short)32702))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32687)) ? (((/* implicit */int) (signed char)-82)) : (arr_8 [i_0])))))) : (((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */short) arr_5 [i_0])), (var_3)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */int) var_1)) << (((((((/* implicit */int) var_14)) + (130))) - (16))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (var_8)))))))));
}
