/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192465
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
    var_15 = ((/* implicit */unsigned long long int) (short)-5625);
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_8))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min(((-(-4288766190177459612LL))), (((((/* implicit */_Bool) var_4)) ? (4288766190177459622LL) : (4288766190177459611LL)))))) ? (((long long int) (short)21622)) : (((((/* implicit */long long int) ((/* implicit */int) var_2))) / (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (4288766190177459601LL)))))));
        arr_2 [i_0 + 2] [i_0] = ((/* implicit */signed char) max(((~(((/* implicit */int) arr_1 [i_0] [i_0])))), (var_9)));
    }
    for (long long int i_1 = 3; i_1 < 23; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                {
                    arr_12 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((9187343239835811840LL) != (-4288766190177459612LL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2]))))) : (((/* implicit */int) arr_3 [i_1 - 3] [i_1 + 2]))));
                    var_18 = max((4288766190177459599LL), (4288766190177459611LL));
                    arr_13 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) arr_8 [i_2]);
                    var_19 = ((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_2] [22]);
                }
            } 
        } 
        arr_14 [i_1] [i_1 - 2] = ((/* implicit */long long int) ((((((/* implicit */int) arr_5 [i_1 + 2] [i_1 - 1])) != (((/* implicit */int) arr_5 [i_1 + 1] [i_1])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_1 - 1] [i_1]))))) : (((((/* implicit */unsigned long long int) (~(var_13)))) | (((unsigned long long int) (_Bool)0))))));
        arr_15 [i_1 - 3] = ((/* implicit */short) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 1]))) != (min((((/* implicit */long long int) arr_4 [i_1 - 2])), (var_7))))));
    }
    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) var_2);
        var_21 = ((/* implicit */long long int) ((_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4] [i_4]))) | (12053786014393793263ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)125)))))));
        arr_18 [i_4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_4] [i_4]))))) && (((/* implicit */_Bool) ((arr_4 [i_4]) + (((/* implicit */int) arr_17 [i_4]))))))) ? (((/* implicit */int) arr_3 [i_4] [i_4])) : (((((/* implicit */_Bool) arr_9 [i_4] [i_4] [(_Bool)1] [i_4])) ? (((((/* implicit */_Bool) arr_7 [22ULL])) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) arr_1 [(short)13] [(short)13])))) : (((/* implicit */int) arr_3 [i_4] [i_4]))))));
    }
}
