/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247811
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
    var_14 = ((unsigned short) var_11);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_15 *= ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_2))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (+(((int) var_6))));
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) var_10)))) > (((/* implicit */int) (unsigned short)36008)))))));
    }
    for (signed char i_1 = 2; i_1 < 17; i_1 += 2) 
    {
        var_17 = max((((/* implicit */long long int) (((-(((/* implicit */int) (unsigned short)32552)))) / (((/* implicit */int) ((unsigned char) var_0)))))), (min((8313746794030537903LL), (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))));
        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -8313746794030537903LL))));
        var_19 += ((/* implicit */unsigned short) (-((+(arr_5 [i_1 - 2] [i_1 - 2])))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)26683)) ? (((/* implicit */int) (unsigned short)45087)) : (((/* implicit */int) (unsigned char)162))));
    }
    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
}
