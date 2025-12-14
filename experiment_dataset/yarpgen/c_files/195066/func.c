/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195066
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_17 = ((/* implicit */signed char) (short)18615);
            arr_5 [i_0] [i_0] [(_Bool)1] &= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_0)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (short)17482))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_18 *= ((/* implicit */short) var_0);
            var_19 = ((/* implicit */signed char) ((unsigned int) (short)-17498));
            var_20 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned char)61)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0])))))));
            var_21 = ((/* implicit */unsigned long long int) (_Bool)1);
        }
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [3LL] [(unsigned short)8] [i_0])) || (((/* implicit */_Bool) (unsigned char)110)))))) - (((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) arr_7 [i_0] [(short)8] [i_0]))))));
    }
    var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-17481)) : (((/* implicit */int) (short)-10313))))) && (((/* implicit */_Bool) (~(var_1)))))) ? (((/* implicit */int) ((short) min(((unsigned short)11157), (((/* implicit */unsigned short) var_10)))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_10)))))))));
    var_24 = ((/* implicit */unsigned short) max((var_11), (((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)253))))) > (var_12)))));
}
