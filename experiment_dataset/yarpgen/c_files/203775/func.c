/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203775
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
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0 + 2] = (~(((/* implicit */int) ((unsigned short) min((359047818U), (((/* implicit */unsigned int) (unsigned short)65535)))))));
        var_16 = ((/* implicit */short) (+(359047818U)));
        var_17 *= ((/* implicit */unsigned int) (short)-13);
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */short) (!((!(((/* implicit */_Bool) (-(0))))))));
        var_18 *= ((/* implicit */short) (!(((/* implicit */_Bool) 131056U))));
        var_19 = ((/* implicit */signed char) (((-((-(((/* implicit */int) (short)32760)))))) | (arr_3 [i_1])));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_9 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        arr_11 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)255)) ? (4294836250U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)11)))));
        arr_12 [i_2] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)8190))));
        arr_13 [i_2] = ((/* implicit */unsigned short) (-(arr_9 [i_2] [i_2])));
    }
    var_20 = ((/* implicit */long long int) ((short) ((signed char) (unsigned char)0)));
}
