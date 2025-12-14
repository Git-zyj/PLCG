/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206746
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_13))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_13))));
        var_15 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_4)) & (((/* implicit */int) var_7)))) | (var_5)));
        arr_4 [i_0 - 1] = ((/* implicit */short) (-(var_3)));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) < (((/* implicit */int) var_8))));
        var_17 = ((/* implicit */long long int) (+(((/* implicit */int) var_13))));
    }
    for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        var_18 = ((/* implicit */_Bool) (((+(((/* implicit */int) (signed char)98)))) / (((((((/* implicit */int) var_9)) + (2147483647))) >> (((var_5) + (702159463)))))));
        var_19 = ((/* implicit */unsigned char) ((4044539258053709975LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-99)))));
        arr_10 [i_2] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_9)) | (var_5)))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_10)) >> (((((/* implicit */int) var_0)) + (2390)))))));
        arr_13 [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_8)) % (var_5))) * (((/* implicit */int) var_10))));
        arr_14 [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)3)) != (((/* implicit */int) (signed char)97))));
    }
}
