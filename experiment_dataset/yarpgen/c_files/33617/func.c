/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33617
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
    var_18 = ((/* implicit */short) ((int) (!((!(((/* implicit */_Bool) var_1)))))));
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (~(((/* implicit */int) (((-(var_12))) != (((/* implicit */int) (short)-10105))))))))));
    var_20 = ((/* implicit */short) var_0);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */short) (~(((/* implicit */int) var_6))));
        arr_3 [i_0] &= ((/* implicit */unsigned short) arr_1 [i_0] [i_0 - 2]);
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3719920454789663029LL)) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_13)), (var_16))))))) : (min(((+(((/* implicit */int) (short)10105)))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [23U])), (var_11))))))));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_9))));
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) -1508867015))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        arr_8 [i_2] = ((((arr_0 [i_2]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_2])))) | (((((/* implicit */int) arr_0 [i_2])) | ((-(((/* implicit */int) arr_0 [i_2])))))));
        arr_9 [i_2] = ((/* implicit */int) ((var_1) == (((/* implicit */int) (short)10093))));
    }
    var_24 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((long long int) (_Bool)0))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_10))))))));
}
