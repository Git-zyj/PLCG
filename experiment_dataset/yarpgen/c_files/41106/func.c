/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41106
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
    var_10 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_0)), (((max((((/* implicit */long long int) var_9)), (var_4))) >> (((((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) var_3))))) - (65472)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 1])) < (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 1])) : (((/* implicit */int) (unsigned short)3))))));
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((_Bool) (unsigned char)192)))));
        var_13 = ((/* implicit */long long int) arr_0 [i_0] [i_0 + 1]);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            var_14 = ((/* implicit */int) var_7);
            var_15 = ((/* implicit */short) ((long long int) arr_4 [i_2 + 1] [i_2 + 2]));
            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_1 [i_2 + 1] [i_2 - 1])) : (((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */int) arr_1 [i_1] [i_2 - 1])) : (812909787)))));
            var_17 = ((/* implicit */signed char) ((_Bool) arr_4 [i_1] [i_1]));
        }
        var_18 |= ((/* implicit */unsigned int) ((arr_5 [i_1] [i_1]) ? (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)11267)))))));
        var_19 ^= ((/* implicit */signed char) ((arr_5 [i_1] [i_1]) ? (((/* implicit */long long int) 985662027)) : (arr_3 [i_1])));
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned short) arr_4 [i_1] [i_1]));
    }
    var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_5))));
    var_21 |= ((/* implicit */short) var_9);
    var_22 = ((/* implicit */short) var_6);
}
