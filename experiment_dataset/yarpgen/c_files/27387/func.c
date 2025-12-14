/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27387
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
    var_12 = min((min((var_1), (((/* implicit */short) var_11)))), (((/* implicit */short) ((((((/* implicit */_Bool) (short)9451)) ? (var_0) : (((/* implicit */int) var_10)))) == (((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_3)))))))));
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) min((((/* implicit */unsigned int) var_10)), (max((((((/* implicit */_Bool) 744372010U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (3546877473U))), (((/* implicit */unsigned int) var_9)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_14 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_0 + 1])));
        var_15 = ((/* implicit */unsigned int) min((var_15), (arr_1 [i_0])));
        var_16 = ((/* implicit */int) arr_1 [i_0 + 1]);
        arr_2 [i_0] [i_0 + 1] = ((((/* implicit */_Bool) (short)9452)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_1 [i_0 + 1]));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_2 = 1; i_2 < 7; i_2 += 1) 
        {
            var_17 = ((/* implicit */short) (+(((((/* implicit */_Bool) 3831744641U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-9453))) : (0U)))));
            var_18 = arr_9 [i_1] [i_2];
            var_19 = ((((var_0) - (((/* implicit */int) arr_7 [i_1] [i_2 + 1])))) > (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1]))) < (2038629444U)))));
        }
        for (unsigned int i_3 = 1; i_3 < 8; i_3 += 4) 
        {
            arr_12 [(_Bool)0] [i_3] &= ((/* implicit */short) (!(((/* implicit */_Bool) 1677339445U))));
            var_20 *= ((/* implicit */short) (_Bool)0);
            arr_13 [i_3] [i_3] = ((/* implicit */long long int) var_11);
            var_21 = ((/* implicit */int) arr_7 [i_3] [i_3]);
        }
        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            var_22 += ((/* implicit */signed char) (!(arr_14 [i_1] [i_4])));
            var_23 &= ((/* implicit */long long int) arr_6 [i_1]);
            var_24 = arr_9 [(short)1] [(short)1];
            var_25 = ((signed char) var_8);
            var_26 = ((/* implicit */short) ((arr_1 [i_4]) % (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_1] [i_4])) | (var_0))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_19 [i_5] = ((/* implicit */int) var_11);
            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) arr_3 [i_5])) : (((unsigned int) var_4)))))));
            var_28 = ((/* implicit */int) (_Bool)1);
            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) var_11))));
            var_30 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)0))));
        }
        var_31 = var_8;
        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1])) * (((/* implicit */int) arr_4 [i_1])))))));
    }
    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 2) 
    {
        arr_22 [i_6] &= min((((/* implicit */unsigned int) min((max((((/* implicit */short) (_Bool)1)), ((short)32767))), (((/* implicit */short) (_Bool)1))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_6] [i_6]))) % (((((/* implicit */_Bool) 1918739058U)) ? (arr_21 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
        arr_23 [i_6] = ((/* implicit */unsigned int) ((arr_21 [i_6]) < (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_6] [i_6]))) : (arr_21 [i_6])))));
        var_33 = ((/* implicit */_Bool) min((((/* implicit */int) ((short) arr_20 [i_6] [i_6]))), ((+(((/* implicit */int) arr_20 [i_6] [i_6]))))));
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                for (short i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    {
                        var_34 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_29 [i_6] [i_7] [i_7] [i_6]))));
                        var_35 ^= ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (signed char)4)) ? (748089822U) : (((/* implicit */unsigned int) 939720726)))));
                        var_36 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((arr_21 [i_9]) - (var_4))), (2182541970U)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_28 [i_6] [i_6] [i_6] [i_6]))))) : (max((((/* implicit */unsigned int) max((arr_28 [i_6] [i_6] [i_6] [i_6]), ((_Bool)1)))), (((unsigned int) 70235608U))))));
                        var_37 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_21 [i_6])), (((long long int) arr_24 [i_6] [i_9]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((max((((/* implicit */signed char) arr_27 [i_6] [(signed char)1])), (arr_29 [i_6] [i_7] [i_8] [i_8]))), (((/* implicit */signed char) (_Bool)1)))))) : (min((min((arr_21 [i_9]), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) arr_20 [21LL] [i_7]))))));
                    }
                } 
            } 
        } 
    }
    var_38 = ((/* implicit */short) (_Bool)1);
}
