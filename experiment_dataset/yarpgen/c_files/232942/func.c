/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232942
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) min((var_16), (var_8)));
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) arr_0 [(_Bool)1]))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [(short)12] [i_1] [i_2 + 1] [i_3] [i_3]))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_3])) ? (arr_8 [i_3] [i_1] [i_1] [i_0]) : (((/* implicit */long long int) -1329620817)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_6 [i_3] [i_1] [i_2] [i_3]))))))))));
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1] [i_2 + 1] [i_2 + 1])) ? (arr_7 [i_2] [i_2 + 1] [i_2]) : (arr_7 [i_1] [i_2 - 1] [i_3]))))));
                        var_20 += ((/* implicit */signed char) arr_1 [i_3]);
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((unsigned int) (unsigned char)1)))));
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1329620808)) ? (72057594037927935ULL) : (14373658374008000212ULL)))) || (((/* implicit */_Bool) -4746913223595694176LL)))))));
                    }
                    var_23 |= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-30))))) ? (((((/* implicit */int) (signed char)109)) * (((/* implicit */int) (unsigned char)12)))) : ((+((-(((/* implicit */int) (short)-8))))))));
                }
            } 
        } 
        var_24 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1329620819)) ? (((/* implicit */int) ((signed char) arr_3 [i_0] [i_0]))) : ((-(((/* implicit */int) arr_11 [i_0]))))))) : (min((-3062968284782146512LL), (((/* implicit */long long int) 883112547))))));
    }
    var_25 += ((/* implicit */unsigned char) var_7);
}
