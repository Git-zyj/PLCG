/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20270
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
    var_19 += ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_16)), ((unsigned short)46093)))) && (((/* implicit */_Bool) ((unsigned short) (unsigned short)65535)))))), ((+(((/* implicit */int) (unsigned char)89))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) 3479996953U);
        var_21 ^= ((/* implicit */unsigned short) min((min((arr_0 [i_0 - 1]), (arr_0 [i_0 - 2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_0)))) : (arr_1 [i_0 - 1]))))));
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) 945068830)), (3479996953U)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_2 = 1; i_2 < 19; i_2 += 4) 
        {
            var_22 &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_2] [5ULL])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))));
            var_23 ^= ((/* implicit */long long int) ((arr_8 [13U] [i_2]) ^ (arr_8 [i_2 + 1] [i_2])));
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) var_17))));
        }
    }
    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_11)) ? (arr_10 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 945068830))))))))) ? ((+(814970342U))) : (min((((/* implicit */unsigned int) ((_Bool) (unsigned short)65535))), (3479996954U)))));
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) max((arr_11 [(signed char)7]), (arr_11 [i_4]))))));
            var_27 = ((/* implicit */unsigned int) arr_10 [i_3]);
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_5 = 2; i_5 < 19; i_5 += 4) 
        {
            var_28 = ((/* implicit */unsigned char) ((((var_0) ^ (var_3))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) 484330412U))))))));
            /* LoopSeq 2 */
            for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                var_29 = ((/* implicit */short) (-(((/* implicit */int) arr_16 [i_5] [i_5 + 2] [i_5]))));
                /* LoopSeq 1 */
                for (int i_7 = 0; i_7 < 22; i_7 += 4) 
                {
                    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((_Bool) var_14)))));
                    arr_19 [4] [i_6] [i_5] [4] [3U] = ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) 814970342U)))));
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 3; i_8 < 21; i_8 += 4) /* same iter space */
                    {
                        arr_22 [7U] [i_8 - 1] [i_6] [i_5] = ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) - (arr_14 [i_3] [i_8 - 1]));
                        var_31 = ((/* implicit */unsigned int) max((var_31), (((((/* implicit */_Bool) var_0)) ? (arr_14 [i_8] [i_8 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_8 + 1] [i_5 - 2] [i_6] [i_5 - 2] [i_8])))))));
                        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) 3479996953U))));
                    }
                    for (unsigned int i_9 = 3; i_9 < 21; i_9 += 4) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) (short)-9))));
                        var_34 ^= ((arr_12 [i_3] [i_5 + 1] [i_9]) / (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5 + 1]))));
                        var_35 = ((/* implicit */long long int) ((unsigned int) ((arr_12 [i_9] [i_6] [i_6]) / (((/* implicit */long long int) var_7)))));
                    }
                    arr_27 [i_3] [i_5 + 2] [i_6] [14U] &= ((/* implicit */_Bool) arr_14 [(short)3] [i_5]);
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        var_36 += ((/* implicit */_Bool) var_17);
                        var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) var_14))));
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 484330412U)) ? (4838254792909936926LL) : (((/* implicit */long long int) -945068830))));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        arr_34 [i_3] [i_5] [i_7] [(_Bool)0] [i_6] = ((/* implicit */long long int) 945068849);
                        var_39 ^= ((/* implicit */long long int) ((short) ((unsigned long long int) var_18)));
                        var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (arr_32 [i_7] [(unsigned short)2] [i_5] [(unsigned short)2] [(signed char)15]) : (((/* implicit */long long int) var_17)))) / (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                    }
                }
                /* LoopSeq 2 */
                for (signed char i_12 = 0; i_12 < 22; i_12 += 4) /* same iter space */
                {
                    var_41 = ((/* implicit */unsigned char) var_9);
                    /* LoopSeq 2 */
                    for (long long int i_13 = 2; i_13 < 21; i_13 += 4) 
                    {
                        var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_13 - 1] [i_5 - 1])) ? (arr_14 [i_13 + 1] [i_5 + 3]) : (arr_14 [i_13 - 1] [i_5 - 1])));
                        var_43 += ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
                        arr_40 [i_3] [i_5] [i_3] [i_12] [i_13] &= ((/* implicit */unsigned short) ((unsigned char) (unsigned char)193));
                    }
                    for (unsigned short i_14 = 0; i_14 < 22; i_14 += 4) 
                    {
                        var_44 += ((/* implicit */_Bool) (-(((/* implicit */int) arr_26 [i_3] [i_3] [i_14]))));
                        var_45 += ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))) : (((arr_35 [7U] [i_14]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_9))));
                    }
                }
                for (signed char i_15 = 0; i_15 < 22; i_15 += 4) /* same iter space */
                {
                    var_46 = ((/* implicit */unsigned long long int) var_13);
                    /* LoopSeq 2 */
                    for (signed char i_16 = 0; i_16 < 22; i_16 += 4) 
                    {
                        arr_48 [i_3] = ((/* implicit */unsigned char) var_4);
                        var_47 = ((/* implicit */unsigned long long int) var_1);
                    }
                    for (signed char i_17 = 0; i_17 < 22; i_17 += 4) 
                    {
                        var_48 += ((unsigned int) (unsigned char)134);
                        var_49 = ((/* implicit */signed char) max((var_49), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_15] [18LL] [i_5] [i_17])) ^ (((/* implicit */int) arr_38 [i_3] [i_17] [i_17]))))) ? (18431137587937531629ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
                        var_50 = ((((((/* implicit */_Bool) arr_49 [i_3] [i_3] [(_Bool)1] [i_3] [(_Bool)1])) ? (((/* implicit */int) arr_31 [i_3] [i_3] [i_15] [i_3])) : (((/* implicit */int) var_12)))) > (((/* implicit */int) arr_49 [i_5 + 1] [17LL] [i_6] [i_6] [i_5])));
                    }
                }
                arr_52 [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) - (((/* implicit */long long int) (-(945068839))))));
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                arr_56 [i_3] [i_3] [i_18] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_15))));
                var_51 = ((/* implicit */unsigned short) max((var_51), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (-19LL)))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_5] [(unsigned short)4] [i_18] [i_3])))))))))));
                var_52 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3285411931896761512LL))));
                /* LoopSeq 3 */
                for (unsigned char i_19 = 1; i_19 < 18; i_19 += 4) 
                {
                    arr_61 [i_18] [i_18] = ((((/* implicit */_Bool) arr_29 [i_5 - 1] [i_19 + 4] [i_19 + 4])) ? (((/* implicit */unsigned int) var_17)) : (arr_29 [i_5 - 1] [i_19 + 4] [i_19 + 4]));
                    var_53 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_19 + 4] [i_3] [i_18])) ? (((((/* implicit */_Bool) var_6)) ? (arr_42 [(unsigned short)2] [i_19] [i_18] [i_19 + 1] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) / (-945068839))))));
                }
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    var_54 = ((((((/* implicit */_Bool) 945068832)) && (((/* implicit */_Bool) var_7)))) || (((/* implicit */_Bool) var_18)));
                    arr_64 [(unsigned short)8] [i_5] [i_5] [i_20] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_3] [i_5] [i_5] [i_5 - 1] [i_5 + 3])) ? ((+(arr_60 [i_5] [i_18] [i_18]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [(_Bool)1] [(_Bool)1] [i_5] [i_5] [i_5])))));
                    var_55 = ((/* implicit */signed char) max((var_55), (((/* implicit */signed char) ((((/* implicit */int) ((_Bool) var_10))) << (((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) arr_20 [i_3] [i_3] [i_5 + 2] [i_18] [i_20]))))))))));
                    var_56 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_54 [i_5 + 2])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
                }
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    var_57 = ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (arr_30 [i_3] [i_3] [i_5] [i_5] [i_3] [i_21] [i_21])));
                    arr_69 [i_3] [i_5] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8)) ? (((/* implicit */int) (short)-9)) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) var_5))));
                }
            }
        }
    }
    /* LoopSeq 2 */
    for (unsigned int i_22 = 4; i_22 < 13; i_22 += 4) 
    {
        var_58 = ((/* implicit */long long int) min((var_58), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_53 [i_22] [(short)4] [i_22])))))));
        var_59 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_22] [i_22 + 3] [i_22] [i_22 - 2] [i_22] [i_22] [i_22])) ? (((/* implicit */int) arr_26 [i_22] [i_22] [i_22])) : (((/* implicit */int) ((unsigned char) max((((/* implicit */long long int) var_9)), (var_3)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_23 = 2; i_23 < 18; i_23 += 4) 
    {
        arr_74 [i_23] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_63 [i_23] [i_23 - 1] [i_23 + 1] [i_23] [i_23 + 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_63 [i_23] [i_23 - 1] [i_23 + 1] [i_23 + 2] [i_23 + 1]))));
        var_60 += ((/* implicit */unsigned int) arr_44 [i_23] [(unsigned char)0]);
        var_61 &= ((arr_37 [(_Bool)1] [i_23] [i_23 + 1] [i_23] [i_23 - 1] [i_23]) ? (((/* implicit */int) arr_45 [i_23 - 2])) : (((/* implicit */int) arr_59 [i_23] [i_23 - 1])));
        var_62 = ((/* implicit */unsigned short) min((var_62), (((/* implicit */unsigned short) arr_15 [i_23]))));
    }
}
