/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224523
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [(_Bool)1] [i_2] = ((/* implicit */_Bool) 293166527);
                    var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((_Bool) arr_3 [i_2]))), (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (2220344280U)))));
                }
            } 
        } 
        var_17 *= ((/* implicit */short) min((min((arr_3 [i_0]), (arr_3 [i_0]))), ((!(((/* implicit */_Bool) var_10))))));
        arr_10 [(short)1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (0) : (27))))));
        arr_11 [i_0] [8] = ((/* implicit */short) (((!(((/* implicit */_Bool) -1)))) ? (arr_7 [i_0] [i_0] [(_Bool)0]) : (((((/* implicit */int) arr_4 [i_0])) % (((/* implicit */int) (unsigned char)153))))));
    }
    for (int i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        var_18 = ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_3] [i_3])) ? (-14) : (((/* implicit */int) (_Bool)0))))), (arr_13 [i_3]))) - (((/* implicit */unsigned int) var_3)));
        /* LoopSeq 1 */
        for (unsigned char i_4 = 2; i_4 < 9; i_4 += 1) 
        {
            var_19 *= ((/* implicit */short) ((int) (+(arr_13 [i_3]))));
            var_20 = ((/* implicit */unsigned char) -14);
            var_21 = ((/* implicit */int) var_1);
            var_22 *= ((/* implicit */signed char) (+((+(((/* implicit */int) var_0))))));
        }
        var_23 *= ((short) arr_17 [(unsigned char)12] [3] [i_3]);
    }
    for (unsigned int i_5 = 1; i_5 < 21; i_5 += 4) 
    {
        var_24 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_22 [i_5]))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_21 [i_5] [i_5 - 1]))))) : (((((/* implicit */int) var_0)) - (-1570336021)))));
        arr_23 [i_5] [i_5] = ((/* implicit */signed char) (-((+(((/* implicit */int) ((unsigned char) arr_22 [i_5])))))));
        arr_24 [i_5] = ((/* implicit */int) min((((arr_22 [i_5 - 1]) & (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)-66)), (var_11)))))), (((((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned char)184)))) + (var_13)))));
        var_25 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_3)) ? (8411851168047830242ULL) : (((/* implicit */unsigned long long int) ((int) arr_21 [i_5] [i_5])))))));
    }
    var_26 = ((/* implicit */int) var_4);
}
