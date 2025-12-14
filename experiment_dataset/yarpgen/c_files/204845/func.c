/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204845
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
    var_20 = ((/* implicit */unsigned long long int) var_7);
    var_21 = ((/* implicit */_Bool) min((((unsigned short) ((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))), (((/* implicit */unsigned short) var_0))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) ((short) min((min((arr_9 [i_0] [i_1 + 2]), (((/* implicit */long long int) var_18)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
                            arr_11 [i_3 + 1] [i_3 + 1] [i_2] [i_1 + 2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_7 [i_3]) : (arr_7 [i_0])))) - (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)32765)), (0ULL)))) ? (((/* implicit */unsigned long long int) var_9)) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_7 [i_3]))))))));
                            arr_12 [i_0] [i_2] [i_0] [i_0] |= ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [10U] [i_1 - 2]))))), (((arr_0 [i_1 + 2] [i_1 - 2]) - (arr_0 [i_1 + 2] [(unsigned char)4])))));
                            arr_13 [i_1 - 2] [i_2] [i_1] [i_1 - 2] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (var_3))) != (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 1] [i_1] [i_3 + 1])))))) != (min((((((/* implicit */int) var_6)) >> (((arr_0 [i_0] [10U]) + (3997469917051994726LL))))), (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_2])) >= (((/* implicit */int) var_15)))))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)24685))));
            }
        } 
    } 
    var_24 += ((/* implicit */int) ((var_16) & (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) >> (((((/* implicit */int) var_14)) - (172))))))));
}
