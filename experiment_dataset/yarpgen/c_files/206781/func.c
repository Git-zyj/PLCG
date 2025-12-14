/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206781
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
    var_16 &= ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) var_3)), (var_6))) - (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) - (((/* implicit */int) (unsigned char)119)))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    arr_9 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) ((short) arr_6 [i_0] [i_0] [i_0] [i_0]))), ((-(var_8)))))) || (((/* implicit */_Bool) ((unsigned short) arr_4 [i_1] [i_1])))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((arr_3 [(signed char)13] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [(short)2]))) : ((+(((unsigned long long int) arr_6 [i_2] [i_1] [i_1] [i_0]))))));
                    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_2])), (131064U))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_17 [i_1] [i_3] [i_3] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */signed char) var_2);
                                arr_18 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12978260485482056575ULL)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -1LL)) || (((/* implicit */_Bool) 5468483588227495041ULL))))))))) ? (((/* implicit */int) ((_Bool) arr_11 [i_1]))) : (((var_13) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4]))))));
                            }
                        } 
                    } 
                    arr_19 [i_1] = ((/* implicit */int) max((((_Bool) arr_2 [(unsigned short)14] [(unsigned short)14])), ((!(((/* implicit */_Bool) arr_2 [i_2] [i_1]))))));
                }
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_18 *= ((/* implicit */short) arr_0 [i_0]);
                    var_19 = ((/* implicit */long long int) min((var_19), (((((/* implicit */_Bool) arr_11 [i_1])) ? (-25LL) : (((/* implicit */long long int) var_6))))));
                    var_20 = ((/* implicit */unsigned short) arr_15 [i_0] [i_1] [i_1] [i_5] [i_5]);
                }
                /* LoopNest 2 */
                for (short i_6 = 3; i_6 < 12; i_6 += 2) 
                {
                    for (short i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (-(((/* implicit */int) var_15)))))));
                            arr_27 [i_1] = (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_6 - 2] [i_1] [i_6 - 1] [i_6 - 1] [i_6 + 1]))) * (var_6))));
                            var_22 ^= ((/* implicit */int) max((((((/* implicit */unsigned int) (+(((/* implicit */int) (short)-848))))) & (((4040228628U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_0]))))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_15)))))));
                            arr_28 [i_0] [i_1] [i_7] = ((/* implicit */short) ((((((/* implicit */int) var_11)) | (((/* implicit */int) var_1)))) - (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) 12978260485482056575ULL))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_8 = 0; i_8 < 14; i_8 += 3) 
    {
        var_23 = ((/* implicit */unsigned char) (!(((_Bool) (_Bool)1))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_9 = 1; i_9 < 10; i_9 += 1) 
        {
            var_24 += ((/* implicit */short) ((signed char) 254738667U));
            /* LoopSeq 2 */
            for (unsigned short i_10 = 4; i_10 < 13; i_10 += 2) 
            {
                var_25 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_9 - 1] [i_10] [i_10] [i_10 - 4]))) : (((((/* implicit */_Bool) (short)-5185)) ? (var_6) : (((/* implicit */unsigned int) -255977636))))));
                var_26 = 3284197406205571890LL;
                var_27 |= ((/* implicit */_Bool) (((_Bool)1) ? (var_4) : (((/* implicit */int) (unsigned short)30213))));
            }
            for (unsigned int i_11 = 1; i_11 < 12; i_11 += 3) 
            {
                arr_41 [i_8] [i_8] = ((/* implicit */int) ((_Bool) 0U));
                var_28 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_7))) > (1LL)));
                /* LoopNest 2 */
                for (long long int i_12 = 1; i_12 < 13; i_12 += 3) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) arr_32 [i_8] [i_9])))));
                            arr_50 [i_8] [i_12] [i_11 + 1] [i_9] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((-45295843453150138LL) * (((/* implicit */long long int) ((/* implicit */int) (signed char)-117)))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_9] [i_12])))))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned short) arr_12 [i_11 + 1] [(_Bool)1] [i_9] [i_9] [i_8] [i_8]);
                arr_51 [i_11] [i_8] [i_8] [i_8] = ((/* implicit */signed char) ((arr_14 [i_11 + 1] [i_11 - 1] [i_11 - 1] [i_9 + 4]) & (((/* implicit */long long int) ((/* implicit */int) var_15)))));
            }
            var_31 = ((((/* implicit */_Bool) (signed char)-117)) ? ((+(var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_9 - 1] [i_9 + 4] [i_9 - 1] [i_9 + 4] [i_9] [i_9 + 3]))));
            var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_31 [i_8] [i_9 + 4])) >> (((/* implicit */int) var_10))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_14 = 2; i_14 < 13; i_14 += 3) 
        {
            var_33 = ((/* implicit */short) ((((/* implicit */int) arr_25 [i_14 - 2] [i_14 + 1] [i_14] [i_14 + 1] [i_14 - 2])) > (((/* implicit */int) arr_25 [i_14 + 1] [i_14 - 2] [i_14 - 2] [(short)2] [i_14]))));
            /* LoopNest 2 */
            for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
            {
                for (int i_16 = 2; i_16 < 11; i_16 += 3) 
                {
                    {
                        var_34 = ((/* implicit */_Bool) arr_59 [i_14 - 1] [i_8] [i_8] [i_8]);
                        var_35 = ((unsigned short) var_15);
                        /* LoopSeq 3 */
                        for (short i_17 = 0; i_17 < 14; i_17 += 4) 
                        {
                            var_36 = ((/* implicit */_Bool) ((long long int) var_8));
                            arr_63 [i_8] [i_17] [i_15] [(signed char)7] [i_17] = ((((/* implicit */int) var_5)) - (((/* implicit */int) arr_58 [i_15 - 1])));
                            var_37 = ((/* implicit */unsigned short) ((int) ((var_12) + (((/* implicit */long long int) arr_33 [i_8])))));
                        }
                        for (short i_18 = 1; i_18 < 11; i_18 += 3) 
                        {
                            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) / (3593604950859226997LL)))) ? (((/* implicit */unsigned int) arr_64 [(unsigned char)11] [(unsigned char)11] [i_14 + 1] [i_8])) : (2919632675U)));
                            var_39 = ((/* implicit */unsigned short) var_1);
                        }
                        for (unsigned short i_19 = 1; i_19 < 13; i_19 += 3) 
                        {
                            var_40 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_47 [i_14 - 2] [i_14 - 2] [i_14 - 2])) >> (((arr_16 [i_14 - 2] [i_19 + 1] [i_19] [i_19] [i_19 + 1]) + (129398128471343428LL)))));
                            var_41 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-117))));
                            var_42 = ((/* implicit */long long int) ((((/* implicit */int) arr_49 [i_8] [i_14 - 2] [i_14 - 2] [i_14 - 2] [i_14 + 1] [i_8])) / (((/* implicit */int) arr_49 [i_8] [i_14 - 2] [i_14 - 2] [i_14 - 2] [i_14 + 1] [i_14 + 1]))));
                        }
                        var_43 = ((/* implicit */unsigned long long int) (unsigned short)0);
                    }
                } 
            } 
            var_44 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) var_15))) | (((/* implicit */int) arr_46 [i_14 - 2] [i_14 + 1] [(unsigned char)8] [i_14 - 1]))));
        }
        /* vectorizable */
        for (signed char i_20 = 2; i_20 < 12; i_20 += 3) 
        {
            var_45 &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) -1LL)))) - (var_12)));
            arr_73 [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_70 [i_20] [i_20] [i_20] [i_20 - 1] [i_20 - 2] [i_20 - 1] [9LL])) ? (((/* implicit */int) arr_70 [i_20] [10ULL] [13U] [i_20] [i_20 - 2] [i_20 - 1] [i_20 - 1])) : (((/* implicit */int) arr_70 [(_Bool)1] [8LL] [i_20] [(unsigned short)2] [i_20 - 2] [i_20 - 1] [i_20]))));
        }
        var_46 = min((var_14), ((-(arr_11 [i_8]))));
        var_47 = ((/* implicit */signed char) arr_49 [i_8] [i_8] [i_8] [12ULL] [i_8] [i_8]);
    }
    /* vectorizable */
    for (int i_21 = 1; i_21 < 12; i_21 += 3) 
    {
        arr_76 [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_49 [(unsigned short)4] [i_21] [i_21] [i_21] [i_21] [i_21])) ? (((/* implicit */int) arr_53 [i_21] [i_21 - 1])) : (var_4)));
        var_48 = ((/* implicit */long long int) arr_29 [i_21] [i_21]);
    }
    /* vectorizable */
    for (signed char i_22 = 0; i_22 < 19; i_22 += 1) 
    {
        var_49 = ((/* implicit */long long int) var_13);
        arr_80 [i_22] [i_22] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_79 [i_22])) || (((/* implicit */_Bool) (+(var_0))))));
    }
}
