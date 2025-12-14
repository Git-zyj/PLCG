/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53197
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
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (+(((/* implicit */int) var_0)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (+(5662558101370465107LL)));
        arr_3 [(signed char)10] = ((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : ((~(((/* implicit */int) (unsigned char)248))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22943)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)15)))) : (arr_4 [i_1])));
        arr_8 [i_1] [9LL] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_4 [i_1 + 3])) ? (arr_4 [i_1 - 1]) : (arr_4 [i_1 - 2])))));
        arr_9 [i_1] [i_1] = ((/* implicit */long long int) ((short) arr_6 [i_1 - 1]));
    }
    var_16 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22935)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) : (var_2)))) ? (((((/* implicit */int) (short)30887)) * (((/* implicit */int) (signed char)-17)))) : (((/* implicit */int) var_7))))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) var_1)) / (((/* implicit */int) ((signed char) ((var_14) == (var_14)))))));
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)11)) ? (4007460593U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))))));
}
