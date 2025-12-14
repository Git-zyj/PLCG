/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42132
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
    var_10 = ((/* implicit */short) max((var_7), (var_5)));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((min((1LL), (arr_0 [i_0]))) - (((/* implicit */long long int) (+((-(((/* implicit */int) var_8)))))))));
        var_11 = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) var_1)), (arr_0 [i_0]))) >= (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) var_0))))), ((-(((/* implicit */int) var_4)))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 16; i_1 += 2) 
    {
        var_12 = ((/* implicit */long long int) var_4);
        var_13 = ((/* implicit */unsigned short) (+((+(arr_3 [i_1 - 1])))));
    }
    for (short i_2 = 4; i_2 < 12; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 4) 
        {
            arr_9 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (var_6)));
            var_14 = ((/* implicit */_Bool) (-((~(((arr_1 [i_3 - 1]) ^ (((/* implicit */unsigned long long int) 4294967295U))))))));
        }
        arr_10 [i_2 - 4] = ((/* implicit */unsigned int) ((min(((~(arr_1 [i_2]))), (((/* implicit */unsigned long long int) var_8)))) / (((/* implicit */unsigned long long int) var_6))));
        arr_11 [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((1U) >= (arr_4 [i_2] [i_2 - 4]))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
    {
        var_15 += ((/* implicit */unsigned short) (~((-(((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) -551319336)) : (var_5)))))));
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((((/* implicit */_Bool) max((arr_4 [i_4] [i_4]), (2097088U)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */unsigned long long int) arr_3 [i_4])) : (arr_1 [i_4])))) ? (((/* implicit */long long int) ((unsigned int) (unsigned short)55007))) : (arr_0 [i_4]))) - (55004LL))))))));
        arr_14 [i_4] [(unsigned short)15] = ((/* implicit */unsigned int) arr_3 [i_4]);
        var_17 += (-(((((/* implicit */_Bool) var_4)) ? (4294967295U) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))))));
    }
}
