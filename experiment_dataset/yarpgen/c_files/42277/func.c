/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42277
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
    var_13 = ((/* implicit */_Bool) ((unsigned long long int) var_11));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) max((1562353248U), (((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_0) : (1562353248U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)135)) > (((/* implicit */int) (_Bool)1))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((4294967295U), (arr_1 [i_0] [i_0])))) ? (max((var_4), (((/* implicit */long long int) ((((/* implicit */long long int) arr_2 [(_Bool)1])) > (8358426815082648667LL)))))) : (((/* implicit */long long int) arr_1 [i_0] [i_0]))));
        var_15 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)172)))))) ? (((/* implicit */unsigned int) var_3)) : (var_5))));
        var_16 = max((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)17991)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1754))) : (2812700913U)))) ? (((((/* implicit */_Bool) var_11)) ? (var_5) : (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)41117), ((unsigned short)41117))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) /* same iter space */
    {
        var_17 *= ((/* implicit */unsigned int) (+(max((((/* implicit */long long int) (~(var_3)))), (var_9)))));
        arr_8 [i_1] = ((/* implicit */_Bool) var_11);
    }
    var_18 ^= ((/* implicit */long long int) 18446744073709551600ULL);
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            {
                var_19 = ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) != (var_6));
                arr_13 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (short)25748)) ? ((+(arr_7 [i_2] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (1U)))))));
            }
        } 
    } 
}
