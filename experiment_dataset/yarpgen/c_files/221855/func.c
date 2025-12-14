/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221855
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
    var_17 -= ((/* implicit */signed char) ((unsigned char) (unsigned char)186));
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        var_18 = ((/* implicit */short) ((signed char) ((long long int) arr_2 [(short)2] [i_0])));
        arr_3 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        var_19 = ((/* implicit */_Bool) max((var_19), (((((/* implicit */int) ((unsigned char) (signed char)3))) >= (((/* implicit */int) (signed char)-80))))));
        arr_4 [1LL] [(signed char)7] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            arr_7 [i_0] = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) (short)22083)) || (((/* implicit */_Bool) (unsigned char)146))))), ((+(((/* implicit */int) (signed char)-95))))));
            arr_8 [i_0] [i_0] = max((((/* implicit */long long int) (((+(((/* implicit */int) var_7)))) < (((/* implicit */int) (_Bool)1))))), (var_4));
        }
        for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            var_20 = ((/* implicit */signed char) min((((/* implicit */long long int) (-(((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))))), (min((((/* implicit */long long int) ((_Bool) (signed char)-6))), (max((((/* implicit */long long int) (signed char)126)), (arr_2 [i_2] [i_0])))))));
            var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) (~(var_15)))))));
            var_22 = ((/* implicit */_Bool) var_5);
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    {
                        arr_18 [i_4] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (signed char)-54)) * (((/* implicit */int) (signed char)83))))), (((((-9223372036854775801LL) * (((/* implicit */long long int) ((/* implicit */int) arr_11 [(signed char)2] [i_2] [(unsigned char)8] [(unsigned char)8]))))) | (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_11 [i_4] [(_Bool)1] [i_2] [i_0])), (arr_13 [i_4] [i_4] [i_4] [i_4])))))))));
                        var_23 -= ((/* implicit */unsigned char) ((var_14) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) var_7))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                arr_23 [i_5] [i_5] [i_0] = ((/* implicit */signed char) var_16);
                arr_24 [(signed char)2] [i_2] [i_0] |= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) var_12))))) ? (-1371826842176161438LL) : (-1371826842176161447LL)))));
            }
            /* vectorizable */
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                arr_27 [i_0] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 4])) > (((/* implicit */int) arr_5 [i_0 - 2] [i_0 + 1]))));
                var_24 = ((/* implicit */unsigned char) (signed char)-32);
            }
            for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                arr_32 [i_7] [i_2] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) * (9223372036854775801LL));
                /* LoopSeq 3 */
                for (signed char i_8 = 3; i_8 < 10; i_8 += 3) 
                {
                    var_25 = ((/* implicit */signed char) var_8);
                    var_26 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) arr_34 [i_8 - 2] [i_0 + 1] [i_0 + 1] [i_0 - 1])) >= (((/* implicit */int) arr_34 [i_8 + 2] [i_0 - 2] [i_0 - 4] [i_0 - 1])))));
                }
                /* vectorizable */
                for (signed char i_9 = 0; i_9 < 12; i_9 += 1) 
                {
                    var_27 = ((/* implicit */short) 4222204996370774314LL);
                    arr_39 [i_0 - 2] [i_0] [i_0] = (!(var_11));
                }
                for (short i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    var_28 |= ((/* implicit */signed char) ((long long int) ((signed char) arr_5 [i_0 - 4] [i_0 - 3])));
                    var_29 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_0 - 4] [i_0 - 4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_40 [i_0] [i_0 - 4] [5LL] [i_7] [i_10])))))));
                    var_30 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) min((839979612002151196LL), (((/* implicit */long long int) arr_34 [(_Bool)1] [i_2] [(unsigned char)4] [(_Bool)1]))))))));
                }
            }
        }
    }
    for (long long int i_11 = 1; i_11 < 12; i_11 += 3) 
    {
        var_31 = ((min((var_0), (max((((/* implicit */long long int) (signed char)-108)), (-1371826842176161438LL))))) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-32))));
        var_32 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) arr_43 [i_11] [i_11])) & (((/* implicit */int) arr_43 [i_11] [i_11]))))), (min((var_15), (((/* implicit */long long int) (short)-13))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_12 = 4; i_12 < 13; i_12 += 2) 
        {
            var_33 += ((/* implicit */signed char) ((((/* implicit */int) (signed char)-31)) < (((/* implicit */int) (unsigned char)109))));
            var_34 = ((/* implicit */short) (-(-1491689987764572391LL)));
            var_35 = ((/* implicit */unsigned char) ((var_11) ? (((/* implicit */int) (short)13109)) : (((/* implicit */int) arr_46 [i_12 - 1] [i_11 - 1]))));
            var_36 -= ((/* implicit */signed char) (~(((/* implicit */int) arr_43 [i_11] [i_11]))));
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) arr_43 [i_11] [i_11]))));
            arr_51 [i_13] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)236))));
        }
        /* vectorizable */
        for (signed char i_14 = 0; i_14 < 15; i_14 += 3) 
        {
            var_38 += ((/* implicit */long long int) arr_45 [i_11]);
            var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_13)));
        }
    }
}
