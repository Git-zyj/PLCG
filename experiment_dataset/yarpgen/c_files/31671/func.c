/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31671
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
    var_18 &= ((/* implicit */long long int) ((unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)0)))) > (((/* implicit */int) var_8)))));
    var_19 = ((/* implicit */unsigned long long int) ((int) var_6));
    var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) ((long long int) var_16))))))) : (var_7)));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((short) arr_0 [i_0]))) ? (((((/* implicit */long long int) ((/* implicit */int) var_9))) % (var_6))) : (min((var_6), (((/* implicit */long long int) arr_1 [i_0])))))))))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_0 [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(((/* implicit */int) var_10)))) >= (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_0])))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))) ? (((var_14) ^ (((/* implicit */unsigned long long int) 4155936006U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (arr_3 [i_1]))))));
        var_24 = ((/* implicit */short) arr_2 [i_1]);
        arr_4 [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) arr_2 [i_1])) * (((/* implicit */int) ((139031295U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))))))) != ((+(((/* implicit */int) arr_2 [i_1]))))));
        var_25 = ((((/* implicit */_Bool) (((~(var_2))) + (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0)))))))) ? (max((((/* implicit */long long int) (_Bool)1)), (min((var_6), (arr_3 [i_1]))))) : (((/* implicit */long long int) ((max((var_1), (((/* implicit */unsigned int) arr_2 [i_1])))) / (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_1])))))))));
    }
}
