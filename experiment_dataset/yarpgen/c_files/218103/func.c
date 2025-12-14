/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218103
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
    var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))) != (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (signed char)-54))) && (((/* implicit */_Bool) var_6)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */long long int) var_10);
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_11))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_18 = ((/* implicit */short) (+(((/* implicit */int) arr_4 [i_2] [i_2]))));
        arr_7 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))) | (536870911U)));
    }
    for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        arr_11 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_3])) << (((((/* implicit */int) var_11)) - (76)))))) ? (((((arr_10 [i_3]) ? (((/* implicit */int) (short)1023)) : (((/* implicit */int) arr_1 [i_3])))) - (((((((/* implicit */int) arr_1 [i_3])) + (2147483647))) << (((((((/* implicit */int) (short)-22333)) + (22348))) - (15))))))) : (max((((/* implicit */int) arr_2 [i_3] [8U] [7LL])), ((~(((/* implicit */int) var_8))))))));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_4 [(unsigned char)2] [10LL])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))))) || (((/* implicit */_Bool) var_4))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((unsigned char) var_8)))));
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_13)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))))))));
        arr_13 [i_3] = (unsigned char)13;
    }
    var_21 = ((/* implicit */short) var_10);
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) var_13))));
}
