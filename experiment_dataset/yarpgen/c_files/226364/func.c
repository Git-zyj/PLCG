/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226364
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_9))));
    var_12 = ((/* implicit */signed char) ((unsigned char) ((var_6) >> (((((/* implicit */int) var_1)) + (67))))));
    var_13 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_8))));
    var_14 = ((/* implicit */unsigned int) (unsigned short)65535);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((unsigned short) (-(max((((/* implicit */long long int) var_9)), ((-9223372036854775807LL - 1LL)))))));
        var_15 = ((/* implicit */signed char) ((max((((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0])), ((unsigned short)10000)))), ((~(((/* implicit */int) arr_0 [i_0])))))) * (((/* implicit */int) var_9))));
        var_16 = min(((!(((/* implicit */_Bool) arr_0 [i_0])))), (((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) (unsigned short)55535)))));
        var_17 = min((((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))))) < (((/* implicit */int) ((signed char) arr_1 [i_0] [i_0])))))), (((signed char) arr_1 [i_0] [i_0])));
        arr_3 [i_0] = ((/* implicit */unsigned char) var_4);
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [i_1]))))));
        arr_7 [i_1] = ((/* implicit */unsigned char) (((-(((/* implicit */int) var_9)))) >= (((((/* implicit */int) ((_Bool) (unsigned short)9988))) << (((((int) arr_4 [(unsigned char)6])) - (56932)))))));
        arr_8 [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (max((arr_4 [i_1]), (arr_4 [i_1]))))))));
    }
}
