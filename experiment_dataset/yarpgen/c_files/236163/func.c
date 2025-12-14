/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236163
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
    var_14 = (signed char)-11;
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) (signed char)11)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        var_16 = ((((/* implicit */_Bool) (unsigned short)33759)) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) (_Bool)0)));
        arr_4 [i_0] = ((/* implicit */short) 3017173848U);
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [i_0 + 1]))));
    }
    for (unsigned int i_1 = 3; i_1 < 18; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */long long int) (unsigned short)65535);
        var_18 = ((/* implicit */int) (unsigned short)20219);
        var_19 = ((/* implicit */_Bool) ((var_5) * (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_2)), ((unsigned char)255)))))));
        arr_8 [i_1] = ((/* implicit */int) var_10);
    }
    for (short i_2 = 3; i_2 < 18; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) (unsigned short)45954);
        var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) min((var_0), (var_0)))), (4294967276U)));
    }
    /* LoopSeq 2 */
    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        arr_13 [1] [(unsigned short)6] = ((/* implicit */unsigned char) ((max(((~(-8415725878425410972LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3017173848U)) && (((/* implicit */_Bool) (unsigned short)47513))))))));
        arr_14 [8U] = ((/* implicit */unsigned int) max((min((((/* implicit */int) (short)8802)), ((+(((/* implicit */int) (short)14376)))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */unsigned int) -1938564870)) == (4294967295U)))) : (((/* implicit */int) min((((/* implicit */unsigned char) var_2)), (var_7))))))));
        var_22 = ((/* implicit */short) (~(max((var_13), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65533)))))))));
    }
    for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
    {
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) arr_16 [i_4]))));
        var_24 = ((/* implicit */signed char) ((((((/* implicit */long long int) -1)) | ((((_Bool)0) ? (((/* implicit */long long int) 1U)) : (-1LL))))) ^ (min((var_5), (((/* implicit */long long int) var_0))))));
    }
}
