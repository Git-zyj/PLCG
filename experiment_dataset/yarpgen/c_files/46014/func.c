/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46014
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
    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) min(((unsigned short)27291), ((unsigned short)27273))))));
    var_11 = ((/* implicit */unsigned char) var_7);
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)27264)) ? (((/* implicit */int) (short)224)) : (((/* implicit */int) (unsigned char)17))))))) ? (((long long int) ((((/* implicit */_Bool) (signed char)86)) ? (-6707871691914866118LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)83)))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)80)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [14] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_2))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (short)-5624)) | (((/* implicit */int) (short)32419))))) | (6707871691914866095LL)));
        var_13 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [22]))) >= (var_0)))) : (((((/* implicit */int) var_7)) >> (((((/* implicit */int) arr_1 [i_0] [i_0])) - (49)))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)225)) + (((/* implicit */int) ((signed char) var_3))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 3; i_1 < 11; i_1 += 4) 
    {
        arr_8 [i_1] |= ((/* implicit */unsigned long long int) ((arr_6 [i_1]) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (arr_5 [i_1]))))));
        var_15 &= ((/* implicit */unsigned char) var_4);
    }
}
