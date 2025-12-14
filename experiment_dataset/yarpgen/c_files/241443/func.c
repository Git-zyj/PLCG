/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241443
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (-(((/* implicit */int) var_3)))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) - (arr_12 [i_4 + 1] [i_1] [i_1])));
                            var_22 = ((long long int) ((unsigned char) arr_11 [i_1] [i_2] [i_2] [i_1]));
                            arr_15 [i_0] [i_1] [(signed char)7] [i_3] [i_1] = ((/* implicit */unsigned char) ((unsigned short) (!(var_18))));
                        }
                        var_23 = ((/* implicit */signed char) arr_2 [i_0] [i_0 + 3]);
                    }
                } 
            } 
        } 
    }
    for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        var_24 = ((/* implicit */long long int) (~(((/* implicit */int) var_12))));
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((var_4) < (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5]))))))))) ? (((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */int) arr_17 [i_5] [i_5])) : (((/* implicit */int) arr_17 [i_5] [i_5])))) : (((/* implicit */int) arr_17 [i_5] [i_5]))));
        arr_19 [i_5] = ((/* implicit */unsigned int) ((short) ((((((/* implicit */_Bool) arr_18 [i_5])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_19))))) != (((/* implicit */unsigned int) (-(((/* implicit */int) arr_16 [i_5]))))))));
        var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_18) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_17 [i_5] [22U]))))) : ((-(var_16)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [(unsigned char)16])) ? ((+(((/* implicit */int) arr_17 [i_5] [(signed char)8])))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_16 [i_5]))))))) : (((((/* implicit */_Bool) ((arr_16 [i_5]) ? (((/* implicit */int) arr_18 [(unsigned short)10])) : (((/* implicit */int) arr_17 [i_5] [(unsigned char)16]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))) : (var_4)))));
    }
    var_27 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_15)))) ? (((var_1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_19))))))));
    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_17)))))) ? (((unsigned int) (~(((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) (-((~(((/* implicit */int) var_6)))))))));
    /* LoopSeq 1 */
    for (short i_6 = 4; i_6 < 16; i_6 += 3) 
    {
        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((var_16) != (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_6 - 1]))))) ? ((-(var_15))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_20 [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_6]))))))))) ? ((+(min((((/* implicit */unsigned int) arr_16 [i_6])), (arr_20 [i_6] [i_6]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_6]))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_18 [i_6])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_21 [i_6])))))));
        var_30 = (i_6 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_6])) ? (((/* implicit */int) arr_18 [i_6])) : (((/* implicit */int) arr_18 [i_6]))))) ? (((((((/* implicit */int) arr_18 [i_6])) + (2147483647))) << (((((((/* implicit */int) arr_18 [i_6])) + (10506))) - (22))))) : (((((/* implicit */int) var_14)) % (((/* implicit */int) var_9))))))) : (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_6])) ? (((/* implicit */int) arr_18 [i_6])) : (((/* implicit */int) arr_18 [i_6]))))) ? (((((((/* implicit */int) arr_18 [i_6])) + (2147483647))) << (((((((((((/* implicit */int) arr_18 [i_6])) + (10506))) - (22))) + (14669))) - (26))))) : (((((/* implicit */int) var_14)) % (((/* implicit */int) var_9)))))));
        var_31 = ((/* implicit */unsigned char) var_10);
        arr_22 [i_6] [i_6] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-84)) ? (3954096075U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) arr_18 [i_6]))))));
    }
}
