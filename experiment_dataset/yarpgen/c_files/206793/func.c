/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206793
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        var_19 = ((unsigned char) (((_Bool)1) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (signed char)-122))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)43425)) ? (((/* implicit */int) (unsigned short)61812)) : (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (short i_1 = 4; i_1 < 23; i_1 += 1) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) && (((/* implicit */_Bool) 16654905696741475986ULL)))))));
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(2591690569U))) + (((unsigned int) (signed char)-19))))) ? (min((((/* implicit */int) ((signed char) 1791838376968075630ULL))), (arr_3 [(_Bool)1] [(_Bool)1] [(_Bool)1]))) : (((/* implicit */int) ((unsigned char) arr_1 [i_0 + 1])))));
        }
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
    {
        arr_8 [(unsigned short)18] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_2 + 1])) ? (((/* implicit */int) arr_1 [i_2 + 1])) : (((/* implicit */int) var_1)))));
        arr_9 [i_2] = ((/* implicit */unsigned int) (-(((((/* implicit */int) (unsigned short)51001)) / (((/* implicit */int) (_Bool)1))))));
        var_21 *= ((/* implicit */unsigned char) (+(((/* implicit */int) ((arr_6 [i_2 + 1] [i_2 + 1]) >= (arr_6 [i_2 + 1] [i_2 + 1]))))));
        var_22 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) var_11))))));
    }
    for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        var_23 -= ((_Bool) ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_2)))) ? (arr_6 [21U] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3720))))))));
        var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) arr_1 [i_3])))));
        arr_13 [8U] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((int) var_6)))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_6 [i_3] [i_3])) ? (((/* implicit */int) (unsigned char)22)) : (arr_0 [i_3]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 821399106U)) : (arr_6 [i_3] [i_3])))) ? (((/* implicit */int) (_Bool)0)) : ((~(((/* implicit */int) var_2))))))));
    }
    var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (var_0) : (((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */int) (signed char)-103)) + (129)))));
}
