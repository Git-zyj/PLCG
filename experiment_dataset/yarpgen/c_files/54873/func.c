/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54873
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned char i_2 = 2; i_2 < 19; i_2 += 2) 
                {
                    arr_7 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (4294967290U))))), (((arr_4 [i_1 + 1]) ? (((/* implicit */int) arr_1 [i_1 + 1] [i_2 + 1])) : (((/* implicit */int) arr_1 [i_1 + 2] [i_2 - 1]))))));
                    var_15 = ((/* implicit */unsigned long long int) ((unsigned char) (+(((((/* implicit */_Bool) 1953401531U)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) var_1)))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        for (int i_5 = 1; i_5 < 18; i_5 += 2) 
                        {
                            {
                                arr_15 [8U] [i_1] [i_5] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)0)), (-1420930491)));
                                arr_16 [i_5] = ((((/* implicit */_Bool) ((arr_13 [i_5] [(signed char)3] [i_5] [i_5] [i_4] [i_4]) & (arr_13 [6LL] [i_4] [i_5] [i_5] [i_3] [i_0])))) ? (((((/* implicit */_Bool) var_0)) ? (arr_13 [i_5 + 1] [i_5] [i_5] [i_5] [i_5 + 1] [i_5]) : (arr_13 [i_3] [9LL] [i_5] [i_5] [11ULL] [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))), (((((/* implicit */int) min((arr_9 [i_0] [i_1 + 1] [i_1 - 1]), (((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) ^ (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)127))))))));
                    arr_17 [i_0] [8] [8] = ((/* implicit */short) ((((/* implicit */_Bool) (~(min((var_4), (((/* implicit */long long int) (unsigned char)210))))))) ? ((~(min((4250363058083973064LL), (((/* implicit */long long int) 3138383638U)))))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_0])))));
                }
                for (int i_6 = 1; i_6 < 18; i_6 += 3) 
                {
                    arr_20 [i_0] [i_6] = ((/* implicit */short) var_14);
                    var_17 = ((/* implicit */signed char) -2993452798416459414LL);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        for (int i_8 = 2; i_8 < 19; i_8 += 1) 
                        {
                            {
                                arr_26 [i_6] [i_6] [i_6] [i_6] [i_8] [i_1] = ((/* implicit */unsigned char) ((int) (signed char)-9));
                                arr_27 [i_0] [i_6] [(signed char)6] = ((/* implicit */unsigned int) ((((arr_23 [i_6 + 2] [i_6 + 2] [i_6 + 2]) | (arr_23 [i_6 + 1] [i_6 - 1] [i_6]))) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-11229)))))));
                            }
                        } 
                    } 
                    var_18 = ((signed char) min(((~(((/* implicit */int) (unsigned char)2)))), (((/* implicit */int) arr_4 [i_0]))));
                }
                for (unsigned short i_9 = 3; i_9 < 19; i_9 += 2) 
                {
                    var_19 -= ((/* implicit */unsigned int) var_1);
                    arr_30 [i_0] [i_0] [17] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (short)-1024))) ? (((/* implicit */int) ((short) (unsigned short)3799))) : (((/* implicit */int) (unsigned short)32049))))) ? (((((/* implicit */_Bool) arr_18 [i_1 - 2] [i_1 - 2] [i_9 + 1])) ? (arr_18 [i_1 - 2] [i_1] [i_9 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_0)), ((unsigned short)33491)))))))));
                    arr_31 [i_9] [i_1] [i_9] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-1))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        for (signed char i_11 = 2; i_11 < 17; i_11 += 2) 
                        {
                            {
                                var_20 ^= ((/* implicit */short) ((((/* implicit */int) min((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) arr_24 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11 - 2]))))) % (((((/* implicit */_Bool) arr_24 [2U] [i_1 + 2] [2U] [2U] [i_9] [i_0])) ? (((/* implicit */int) arr_21 [i_0] [i_1 - 1] [i_9 - 2] [i_10] [i_11] [i_10])) : (((/* implicit */int) arr_24 [i_0] [(unsigned char)11] [(unsigned char)11] [i_0] [i_0] [i_0]))))));
                                var_21 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_28 [i_0] [i_0] [i_0]))))) ? (((/* implicit */long long int) var_3)) : ((-(1682561269151584653LL))))));
                            }
                        } 
                    } 
                }
                arr_38 [i_0] [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)56))))), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1 + 2])) ? (var_13) : (((/* implicit */int) arr_35 [i_1] [i_1]))))) | (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_0] [i_1] [i_1] [i_0] [i_0])))))))));
                /* LoopNest 3 */
                for (int i_12 = 2; i_12 < 18; i_12 += 3) 
                {
                    for (signed char i_13 = 0; i_13 < 20; i_13 += 2) 
                    {
                        for (long long int i_14 = 0; i_14 < 20; i_14 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_12 - 2] [i_13] [i_14])) ? (arr_8 [i_0] [i_1]) : (arr_12 [i_0] [(signed char)18])))), (min((2198956146688ULL), (((/* implicit */unsigned long long int) max(((signed char)-9), ((signed char)-115))))))));
                                arr_46 [i_13] [i_1] [i_12] [i_13] [i_1] [i_0] [i_14] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((min((((/* implicit */unsigned int) arr_8 [(unsigned char)1] [i_1 + 1])), (220060234U))) >> (((((/* implicit */_Bool) 65528U)) ? (((/* implicit */int) (_Bool)0)) : (var_3))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_15 = 0; i_15 < 12; i_15 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_16 = 0; i_16 < 12; i_16 += 2) 
        {
            for (short i_17 = 0; i_17 < 12; i_17 += 1) 
            {
                for (int i_18 = 0; i_18 < 12; i_18 += 2) 
                {
                    {
                        arr_56 [i_15] [1ULL] [i_15] [i_17] [i_17] [i_15] = min((((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) var_8))) - (((/* implicit */int) ((short) arr_25 [i_18] [i_18] [i_18] [i_18] [i_18])))))), (((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_39 [i_15] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (_Bool)1)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_19 = 2; i_19 < 10; i_19 += 2) 
                        {
                            arr_60 [i_15] [i_16] [i_17] [i_18] [i_19] = var_7;
                            arr_61 [i_15] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)252))) ? (((/* implicit */int) arr_24 [i_19] [i_19 + 2] [i_19] [i_19 - 1] [i_19] [i_19 + 2])) : (((/* implicit */int) var_12))));
                        }
                        for (unsigned long long int i_20 = 1; i_20 < 11; i_20 += 2) 
                        {
                            arr_64 [i_15] [i_15] [11] [i_15] [i_15] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)842), (((/* implicit */unsigned short) (unsigned char)209))))))))));
                            var_23 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) arr_57 [i_15])) : (((/* implicit */int) (unsigned short)224))))) ? (((/* implicit */int) ((signed char) var_1))) : (((/* implicit */int) ((((/* implicit */int) arr_44 [i_16] [i_16] [i_20])) != (((/* implicit */int) arr_1 [i_18] [i_15])))))))));
                        }
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)84)) ^ (((/* implicit */int) arr_0 [i_15]))))) ? (((/* implicit */long long int) var_3)) : (var_4))), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_9 [i_15] [i_15] [(short)3])) == (((/* implicit */int) (_Bool)1)))))))))))));
    }
    /* LoopNest 2 */
    for (signed char i_21 = 2; i_21 < 20; i_21 += 4) 
    {
        for (unsigned short i_22 = 3; i_22 < 20; i_22 += 4) 
        {
            {
                arr_70 [i_21] = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) ((short) arr_66 [i_21])))) >= (((/* implicit */int) var_12))));
                var_25 = ((/* implicit */unsigned char) ((((int) ((((/* implicit */_Bool) var_13)) ? (48791196) : (((/* implicit */int) (short)447))))) & ((+(((/* implicit */int) ((((/* implicit */int) var_0)) >= (var_3))))))));
                var_26 = ((/* implicit */unsigned short) ((unsigned long long int) min((arr_68 [i_22 + 1] [i_22 + 1] [i_22 - 1]), (arr_68 [i_22 + 1] [i_22 + 1] [i_22 - 1]))));
                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_69 [i_21 - 1] [i_21 - 2] [i_21 + 1])) / (((/* implicit */int) (short)-30267))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_68 [i_21] [i_22] [i_22]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)65530), (((/* implicit */unsigned short) arr_66 [i_22]))))))))));
                var_28 += ((/* implicit */long long int) max((((arr_69 [(short)6] [i_21 - 1] [i_21 - 1]) ? ((-(((/* implicit */int) (unsigned char)183)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_14))))))), (min(((-(((/* implicit */int) (short)16352)))), (min((((/* implicit */int) (_Bool)1)), (arr_68 [i_21 - 2] [i_22] [i_21 - 2])))))));
            }
        } 
    } 
}
