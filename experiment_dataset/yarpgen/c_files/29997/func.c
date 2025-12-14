/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29997
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
    var_18 = ((/* implicit */unsigned int) (!(var_15)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = (-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45653))) / (10U))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [19]))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((-1319125762) > (((/* implicit */int) (_Bool)1)))))));
        var_20 = ((/* implicit */unsigned short) (signed char)92);
        var_21 += ((/* implicit */int) ((unsigned short) (unsigned char)30));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) arr_0 [i_1]);
        var_23 = ((/* implicit */unsigned short) 2047U);
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) 15U)) ? ((+(1835008U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 1) 
    {
        arr_7 [i_2] = ((/* implicit */unsigned short) var_0);
        var_25 = ((/* implicit */signed char) var_13);
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) 16U)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2]))))))));
        arr_8 [i_2] = ((/* implicit */short) var_13);
    }
    var_27 = (-(((unsigned int) (+(((/* implicit */int) (unsigned char)0))))));
}
