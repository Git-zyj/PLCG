/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198185
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
    var_15 = ((/* implicit */int) var_13);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_0 [i_0 + 1])))) || (((/* implicit */_Bool) var_0))));
                var_16 ^= ((/* implicit */int) 1123700883587072LL);
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1]))))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)44008))) + (-1123700883587072LL)))) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) var_4))))));
                                var_18 = min((((arr_13 [i_0 + 1] [i_1] [i_0]) - (arr_13 [i_0] [i_0 + 2] [i_0]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [i_4] [i_1] [i_0]))))));
                                arr_14 [i_0] [i_1] [(unsigned char)2] [i_2] [i_0] [i_3 + 2] [i_4] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-12))))) ? (((/* implicit */int) ((short) 862661401))) : (((/* implicit */int) var_5))))));
                            }
                        } 
                    } 
                } 
                var_19 *= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_3 [i_1] [i_0 - 2])))) ? ((+(1123700883587072LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0 - 2] [i_0] [i_1])) - (((/* implicit */int) arr_1 [i_0])))))));
            }
        } 
    } 
    var_20 = var_3;
    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(max((var_10), (((/* implicit */unsigned long long int) var_8)))))))));
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (min((((/* implicit */unsigned long long int) 641419389U)), (var_10)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))));
}
