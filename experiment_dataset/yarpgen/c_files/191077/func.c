/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191077
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) -13213002)) : (-9223372036854775807LL)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) var_10))))) ? ((((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) var_6)) : (max((((/* implicit */long long int) var_10)), (var_4))))) : (min((((((/* implicit */long long int) var_14)) / (var_4))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */unsigned int) var_6)))))))));
    var_17 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */short) (((-(((((/* implicit */_Bool) arr_8 [2ULL] [i_1] [i_2] [i_0])) ? (var_1) : (((/* implicit */long long int) arr_1 [i_0])))))) == (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)35505)) % (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) arr_3 [i_3 - 2])))))))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) + (((((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) arr_8 [i_3] [i_2] [i_1] [3ULL]))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0 - 3] [(short)1] [(short)4] [i_0])) ? (((/* implicit */unsigned long long int) min(((+(arr_2 [i_0] [i_1] [i_1]))), (max((var_13), (var_13)))))) : ((-(var_3))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) -9223372036854775798LL)) ? (var_14) : (var_15))) + (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
}
