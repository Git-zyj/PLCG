/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19320
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)229))))) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] |= ((7475166412442524224LL) | (((/* implicit */long long int) -262144)));
        arr_4 [(short)6] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_0 + 1]))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 4; i_1 < 23; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 2; i_2 < 23; i_2 += 2) 
        {
            for (int i_3 = 1; i_3 < 23; i_3 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_4 = 1; i_4 < 24; i_4 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned char) min((var_14), ((unsigned char)16)));
                        arr_17 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) ((short) arr_7 [(short)21]))) : (((/* implicit */int) (unsigned char)34))));
                    }
                    arr_18 [i_1] [i_2] [(short)23] = (~(((/* implicit */int) (unsigned char)32)));
                }
            } 
        } 
        arr_19 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) arr_15 [i_1 + 2])) : (((/* implicit */int) var_13))));
        arr_20 [i_1] = 8070450532247928832LL;
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_23 [(unsigned char)2] = ((/* implicit */_Bool) ((short) (short)-17874));
        var_15 = ((/* implicit */int) max((((max((((/* implicit */long long int) (short)18170)), (arr_11 [(_Bool)1]))) + (((/* implicit */long long int) arr_9 [i_5] [i_5])))), (((/* implicit */long long int) -72825398))));
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) arr_21 [i_5]))));
        var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned char)148)))), (((/* implicit */int) arr_15 [i_5]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_5] [i_5])))))) : ((((-(3739863074U))) << ((((~(arr_13 [i_5] [(short)9] [i_5]))) - (293565378)))))));
    }
    for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (((-(((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(short)13] [12U]))) * (var_6))))) * ((-(((unsigned int) (unsigned char)232)))))))));
        arr_28 [9U] = ((/* implicit */int) arr_9 [i_6] [5U]);
    }
    var_19 = (-(max((((/* implicit */long long int) ((((/* implicit */int) var_1)) + (((/* implicit */int) (short)-11583))))), (var_8))));
}
