/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39077
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_19 += ((/* implicit */signed char) (~(((/* implicit */int) ((arr_0 [i_0]) || (((/* implicit */_Bool) (signed char)-56)))))));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) / (((/* implicit */int) (short)8192))))))))));
        var_21 *= ((/* implicit */_Bool) (short)-1);
        arr_4 [i_0] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)8192))))) ? (((/* implicit */long long int) ((2479398212U) << (((/* implicit */int) arr_0 [i_0]))))) : (((arr_0 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_1))))));
    }
    for (long long int i_1 = 3; i_1 < 22; i_1 += 1) 
    {
        var_22 = (!(((/* implicit */_Bool) (short)-1)));
        arr_9 [i_1] [(short)19] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_5 [i_1 + 3]))) ? (((/* implicit */int) (((~(((/* implicit */int) (_Bool)1)))) >= (((var_16) / (((/* implicit */int) var_6))))))) : ((~((~(((/* implicit */int) arr_5 [i_1]))))))));
        var_23 = ((/* implicit */unsigned short) var_3);
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)29758))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_2]))) == (arr_10 [i_2] [i_2]))))) : (var_18)));
        var_25 = ((/* implicit */short) arr_8 [i_2]);
    }
    /* LoopNest 2 */
    for (signed char i_3 = 1; i_3 < 17; i_3 += 2) 
    {
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            {
                arr_20 [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_8 [i_3 - 1])))) <= (((((((/* implicit */_Bool) arr_18 [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-4180))) : (var_1))) / (((((/* implicit */_Bool) var_7)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))))));
                arr_21 [i_3] [i_3] = ((/* implicit */signed char) min((((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (unsigned short)5110)) ? (((/* implicit */int) (short)8192)) : (((/* implicit */int) (_Bool)0)))))), ((short)-1)));
                var_26 = ((/* implicit */short) (!(var_12)));
                arr_22 [i_3] [i_4 - 1] = ((/* implicit */long long int) var_7);
            }
        } 
    } 
    var_27 *= ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) (short)8171))))) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) min((min((var_10), (((/* implicit */short) var_13)))), (((/* implicit */short) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_11)))))))) : (((/* implicit */int) min((((((/* implicit */int) var_11)) > (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) 894865398)) || (((/* implicit */_Bool) -118564654)))))))));
}
