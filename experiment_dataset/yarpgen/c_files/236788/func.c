/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236788
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
    var_20 ^= ((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */unsigned long long int) var_2)), (((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-111))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) var_17))))) ? (((((/* implicit */int) (short)28454)) + (((/* implicit */int) (short)-1)))) : (((/* implicit */int) min((((/* implicit */unsigned char) var_0)), (arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_10 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) arr_6 [6ULL] [i_1]))))), (((12753463721176274188ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))))));
                    arr_11 [i_0 + 2] [i_1] [i_1] [i_2] = ((/* implicit */short) (+(((4095U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))));
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_1] [i_0 + 3])) ? (((((/* implicit */_Bool) min(((short)0), ((short)-5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (max((((/* implicit */unsigned long long int) arr_4 [i_1])), (var_14))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30936)))));
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */short) ((unsigned long long int) (_Bool)1));
    }
    for (unsigned int i_3 = 2; i_3 < 10; i_3 += 2) /* same iter space */
    {
        var_23 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3] [i_3 - 2])) ? (arr_5 [i_3 + 1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3 - 2])))))) ? (((arr_5 [i_3] [i_3]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3 + 3]))))) : (((/* implicit */unsigned long long int) ((long long int) arr_5 [i_3] [i_3 - 2]))))), (((/* implicit */unsigned long long int) arr_14 [i_3] [i_3 + 3])));
        var_24 *= ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_14 [i_3] [i_3])), (((1795214329U) & (((/* implicit */unsigned int) ((/* implicit */int) (short)32748)))))));
        arr_16 [i_3] [i_3 + 1] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_14 [i_3 + 1] [i_3 + 2])), ((-(((/* implicit */int) arr_14 [i_3 - 2] [i_3 + 3]))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 1) 
        {
            arr_21 [i_4] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3 + 1] [i_4] [i_4 + 1])) ? (((/* implicit */int) arr_17 [i_4])) : (((/* implicit */int) arr_1 [i_3]))))) ? (((((/* implicit */_Bool) arr_9 [i_3 + 3])) ? (arr_13 [i_3 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [i_4 - 1] [i_4] [(_Bool)1]))))) : (((unsigned int) arr_7 [i_3] [i_3] [i_3] [i_4 - 1])))), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)0)))))));
            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_20 [i_3] [i_4]))))), (min((((/* implicit */unsigned long long int) (-(462701327U)))), ((-(12922536207160440022ULL))))))))));
            /* LoopNest 3 */
            for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                for (unsigned int i_6 = 2; i_6 < 9; i_6 += 4) 
                {
                    for (signed char i_7 = 2; i_7 < 11; i_7 += 1) 
                    {
                        {
                            arr_29 [i_3] [(signed char)12] [i_4] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((unsigned int) ((_Bool) (-(((/* implicit */int) arr_14 [i_6 + 2] [i_3 + 1]))))));
                            var_26 *= ((/* implicit */unsigned int) arr_9 [i_6 + 1]);
                            arr_30 [i_5] [i_4] = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-4158)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_4]))) : (arr_25 [i_4] [i_5] [i_4] [i_3])))), (arr_5 [i_6] [i_6]))), (((/* implicit */unsigned long long int) min((min((((/* implicit */short) var_6)), (arr_14 [i_3 - 2] [i_3 + 1]))), ((short)-20))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_8 = 4; i_8 < 10; i_8 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_9 = 2; i_9 < 12; i_9 += 2) 
            {
                for (short i_10 = 0; i_10 < 13; i_10 += 2) 
                {
                    for (long long int i_11 = 2; i_11 < 10; i_11 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */signed char) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) (short)0))))))));
                            var_28 = ((/* implicit */short) min(((-(((((/* implicit */_Bool) arr_6 [i_8] [i_11 + 1])) ? (arr_8 [i_8 + 1] [i_8 + 1]) : (2499752981U))))), (((/* implicit */unsigned int) ((_Bool) min((arr_25 [i_3] [i_8] [i_9] [i_8]), (((/* implicit */long long int) var_15))))))));
                            var_29 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3 + 2] [i_11 + 3])) ? (((/* implicit */int) arr_14 [i_3 + 1] [i_3 - 2])) : (((/* implicit */int) arr_14 [i_9 - 2] [i_10]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_14 [i_3] [i_3 - 1])) > (((/* implicit */int) arr_14 [i_11 - 2] [i_9 - 1]))))) : (((((/* implicit */_Bool) arr_14 [i_8 + 3] [i_8 - 1])) ? (((/* implicit */int) arr_14 [i_8] [i_11])) : (((/* implicit */int) arr_14 [i_3] [i_3 + 2]))))));
                        }
                    } 
                } 
            } 
            arr_40 [i_8] [(short)6] = ((/* implicit */short) ((((/* implicit */int) min((arr_34 [i_3] [i_3] [i_3]), (arr_34 [(signed char)0] [i_8 - 1] [i_8])))) % (((/* implicit */int) (_Bool)1))));
            /* LoopNest 2 */
            for (signed char i_12 = 0; i_12 < 13; i_12 += 1) 
            {
                for (long long int i_13 = 1; i_13 < 12; i_13 += 1) 
                {
                    {
                        arr_47 [i_3] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_25 [i_3] [i_3] [i_3 + 1] [i_8 + 2]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_4 [i_3])), (arr_8 [i_3 + 3] [i_3 + 3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_7))))) : (arr_15 [i_3])))) : (((((var_17) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16))) : (arr_36 [i_3 - 2]))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [(signed char)8])) | (((/* implicit */int) arr_31 [i_12])))))))));
                        arr_48 [i_3] [i_3] [i_8 - 1] [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-4)) + (2147483647))) >> (((((/* implicit */int) arr_14 [i_3 - 1] [i_3])) - (9055)))))) ? (((((/* implicit */_Bool) arr_22 [i_3])) ? (arr_6 [i_8] [i_13]) : (arr_26 [3ULL] [(signed char)4] [(signed char)4] [(signed char)4] [i_12] [(signed char)4] [i_13]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_12]))))))))) ? (((((/* implicit */_Bool) (short)-17)) ? (((/* implicit */long long int) 1040481044U)) : (9223372036854775807LL))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_31 [i_3 - 2])), (((((/* implicit */_Bool) arr_32 [i_3] [i_13])) ? (arr_23 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_3] [i_8] [i_12] [4ULL]))))))))));
                    }
                } 
            } 
            var_30 = ((/* implicit */signed char) max((((/* implicit */int) arr_33 [i_8 - 4] [i_3] [i_3 - 2] [i_3 - 2])), (((((((/* implicit */int) arr_24 [i_3] [(signed char)10] [i_3 + 2] [i_3 + 3])) + (2147483647))) << (((((min((var_16), (((/* implicit */long long int) (short)-17)))) + (43LL))) - (26LL)))))));
        }
        /* vectorizable */
        for (short i_14 = 2; i_14 < 12; i_14 += 1) 
        {
            /* LoopNest 2 */
            for (short i_15 = 0; i_15 < 13; i_15 += 3) 
            {
                for (unsigned int i_16 = 4; i_16 < 10; i_16 += 2) 
                {
                    {
                        arr_58 [i_14] [i_15] [i_16] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_55 [i_3 - 2] [i_15]))));
                        arr_59 [i_15] [i_15] [i_14] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_42 [i_14 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_14 - 1]))) : (var_12)));
                        var_31 = ((/* implicit */signed char) ((((((/* implicit */int) (short)4158)) <= (((/* implicit */int) (short)32767)))) ? (arr_49 [i_14 - 2] [i_16 + 1] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_3 + 1] [i_14 - 1])))));
                    }
                } 
            } 
            arr_60 [i_14 + 1] [i_3] = ((/* implicit */unsigned long long int) arr_1 [i_14 + 1]);
            /* LoopSeq 1 */
            for (long long int i_17 = 0; i_17 < 13; i_17 += 1) 
            {
                /* LoopNest 2 */
                for (short i_18 = 0; i_18 < 13; i_18 += 4) 
                {
                    for (long long int i_19 = 1; i_19 < 10; i_19 += 3) 
                    {
                        {
                            var_32 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_42 [i_19 + 2])) + (((/* implicit */int) arr_42 [i_19 + 3]))));
                            var_33 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 429035462U)) ? (var_15) : (arr_23 [i_3])))) ? (((((/* implicit */_Bool) arr_53 [i_19] [i_18])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_38 [i_3] [i_14 - 2] [i_17] [i_18] [i_19]))) : (arr_54 [i_3 - 2] [i_3 - 2] [i_17] [i_18])));
                            arr_70 [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_3 + 1] [i_19] = ((/* implicit */_Bool) ((unsigned long long int) (short)-30411));
                            var_34 = ((/* implicit */unsigned int) ((arr_18 [i_17] [i_19]) << (((((((((/* implicit */_Bool) arr_1 [12U])) ? (((/* implicit */int) (short)-4158)) : (((/* implicit */int) arr_20 [i_3 - 1] [(short)3])))) + (4202))) - (44)))));
                            var_35 = ((((/* implicit */_Bool) arr_8 [i_17] [i_14 - 2])) ? (arr_46 [i_19] [i_19] [(short)12] [i_14] [i_14] [i_14 + 1]) : (arr_46 [i_19] [i_19] [i_19] [i_19] [i_18] [i_14 - 1]));
                        }
                    } 
                } 
                arr_71 [i_14] [i_14] [(signed char)9] [i_14] = ((/* implicit */unsigned long long int) 3865931819U);
                arr_72 [i_3] [i_14] [i_17] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)-23)) ? (((/* implicit */int) arr_7 [i_3] [(signed char)11] [i_14 + 1] [i_17])) : (((/* implicit */int) (signed char)35)))) / (((/* implicit */int) var_10))));
            }
        }
    }
    for (signed char i_20 = 0; i_20 < 16; i_20 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_21 = 1; i_21 < 15; i_21 += 3) 
        {
            var_36 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_17))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 3121692177U)), (arr_74 [i_20] [i_21 + 1])))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_75 [i_20] [i_20])) : (var_14))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)1))))) ? (((arr_76 [i_20] [i_21]) ? (2499752973U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)4158))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) > (var_12))))))))));
            arr_77 [i_20] [i_20] [i_20] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-70))))) >= (((((/* implicit */_Bool) arr_75 [i_20] [i_21])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_76 [i_21 + 1] [i_21 + 1]))) : (arr_75 [i_20] [i_21])))));
            arr_78 [i_20] [0U] = ((/* implicit */unsigned int) ((short) arr_73 [i_21]));
            var_37 -= ((/* implicit */signed char) ((((/* implicit */int) arr_73 [i_21 - 1])) * ((+(((/* implicit */int) (_Bool)0))))));
            arr_79 [i_20] = ((/* implicit */unsigned int) arr_76 [i_20] [i_20]);
        }
        for (signed char i_22 = 1; i_22 < 15; i_22 += 3) 
        {
            arr_83 [i_20] [i_20] [i_22 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_80 [i_20]))) ? (((/* implicit */int) max((((/* implicit */short) arr_73 [i_20])), (var_4)))) : (((((/* implicit */_Bool) (short)4158)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)117))))))) ? (((/* implicit */int) min((arr_76 [i_22 + 1] [i_22 - 1]), (arr_76 [i_22 - 1] [i_22 - 1])))) : (((/* implicit */int) (short)-32767))));
            arr_84 [i_20] [i_20] [i_20] = arr_75 [i_20] [i_20];
        }
        var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) ((signed char) min((((/* implicit */long long int) arr_76 [i_20] [i_20])), (arr_74 [i_20] [i_20])))))));
        var_39 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_82 [i_20] [i_20])) ? (((/* implicit */unsigned long long int) arr_81 [i_20] [i_20])) : (((((/* implicit */_Bool) arr_82 [13ULL] [13ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_82 [7LL] [i_20]))) : (13164148464013673760ULL))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_75 [i_20] [i_20]))))));
        var_40 = ((/* implicit */short) min((((arr_76 [i_20] [i_20]) ? (((arr_76 [i_20] [i_20]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)85))) : (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) var_19))))), (arr_81 [14ULL] [i_20])));
        arr_85 [i_20] = ((/* implicit */signed char) (((~(arr_74 [i_20] [i_20]))) < (((/* implicit */long long int) ((/* implicit */int) min(((short)-12244), (((/* implicit */short) ((2501787816U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-83))))))))))));
    }
    var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
    var_42 = ((/* implicit */signed char) ((((unsigned int) var_5)) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_19)))));
    var_43 += ((/* implicit */unsigned char) ((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-123)) ? (var_5) : (var_12))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_18)))))))))));
}
