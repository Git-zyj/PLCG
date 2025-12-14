/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33299
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) min(((!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)31))))))), (((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) var_3)))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (signed char)-1))))));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_8)) * (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-3)))))));
        var_15 *= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) arr_0 [i_0])))));
        var_16 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(-1834864718)))) ? (16777215LL) : (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) / ((-2147483647 - 1)))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 8; i_1 += 4) 
    {
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (+(((((/* implicit */long long int) var_1)) - (16777215LL))))))));
        var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_10)) : (-16777197LL))) ^ (((/* implicit */long long int) ((/* implicit */int) var_3)))));
        arr_7 [i_1] = ((/* implicit */int) (+(var_4)));
    }
    var_19 = ((/* implicit */_Bool) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_8)))) < (min((528482304U), (((/* implicit */unsigned int) var_7)))))));
}
