/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209571
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
    var_15 ^= ((/* implicit */unsigned char) var_1);
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_6)) / ((~((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) var_14))))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0 + 1] = (!(((/* implicit */_Bool) 4294967283U)));
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned char)254)))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_18 -= ((/* implicit */unsigned short) (short)-7625);
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_5 [i_1] [i_1]))) > (((/* implicit */int) var_2)))))));
        var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) 1168207893)) : (4294967291U))) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-24543)))));
    }
    /* LoopSeq 2 */
    for (short i_2 = 2; i_2 < 20; i_2 += 2) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned short) arr_4 [i_2]);
        var_21 = ((/* implicit */_Bool) min((((max((arr_6 [i_2] [i_2]), (((/* implicit */long long int) var_2)))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)1))))))), (((/* implicit */long long int) max(((short)6872), ((short)7644))))));
        var_22 ^= ((/* implicit */int) ((((/* implicit */_Bool) (-(4294967278U)))) || ((!(((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2 + 1]))))));
    }
    for (int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        var_23 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))), (max((var_9), (((/* implicit */unsigned long long int) arr_9 [i_3]))))));
        var_24 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))) != (4294967289U)));
    }
}
