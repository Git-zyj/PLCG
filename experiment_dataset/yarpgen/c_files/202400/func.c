/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202400
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-18075)))) : (((((/* implicit */int) (short)2048)) % (((/* implicit */int) (unsigned char)108))))))) != (max((min((((/* implicit */long long int) var_4)), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-64)))))))));
    var_20 = ((/* implicit */short) min((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)33))))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)109)))))))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (min((589332145702393097ULL), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)54)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) var_0)) + (((/* implicit */int) var_17)))) : (((/* implicit */int) var_18)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)104)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6589))) : (5792187606279353984ULL))))));
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) max((min((7843828110429643125ULL), (((/* implicit */unsigned long long int) 1129513687U)))), (((/* implicit */unsigned long long int) 538928739)))))));
                    var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) ((arr_1 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? ((+(arr_4 [11ULL] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_2 + 3] [i_1 - 2]))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (((/* implicit */int) (short)32756)) : (((((/* implicit */int) (unsigned char)104)) * (((/* implicit */int) arr_2 [8] [8])))))))));
                    arr_9 [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-98))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */int) var_15);
}
