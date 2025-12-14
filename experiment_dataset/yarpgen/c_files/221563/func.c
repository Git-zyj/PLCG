/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221563
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
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_13 = ((((/* implicit */_Bool) arr_4 [i_0])) ? (min((var_0), (((/* implicit */unsigned int) arr_2 [i_0] [i_2])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))));
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((arr_4 [i_0]) + (2147483647))) << (((((/* implicit */int) arr_6 [i_0])) - (1))))) ^ (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)170)) : (((/* implicit */int) (_Bool)0)))))))));
                        arr_12 [2LL] [2LL] [i_2] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_8 [i_0] [i_1] [i_2] [i_3]), (((/* implicit */signed char) arr_6 [i_0])))))));
                    }
                    for (long long int i_4 = 1; i_4 < 18; i_4 += 1) 
                    {
                        var_14 ^= ((/* implicit */long long int) var_10);
                        arr_16 [i_0] [i_0] [i_2] [i_4] [i_4 + 1] [i_4] = ((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)170)) ^ (((/* implicit */int) (signed char)-84))))));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            arr_19 [i_0] [i_0] [(signed char)4] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-76)), (arr_3 [i_0])))) ? (((((/* implicit */_Bool) var_4)) ? (arr_7 [i_0]) : (((((/* implicit */int) var_4)) + (((/* implicit */int) var_4)))))) : (((((/* implicit */int) arr_9 [i_0] [(unsigned short)6] [(unsigned char)1] [i_0])) * (((/* implicit */int) arr_9 [i_0] [i_5] [i_5] [i_0]))))));
                            var_15 = ((/* implicit */long long int) (~(min(((~(((/* implicit */int) var_12)))), (((/* implicit */int) var_5))))));
                        }
                        arr_20 [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12))))) : (((((/* implicit */unsigned int) min((((/* implicit */int) var_2)), (arr_13 [i_0] [i_0] [i_2] [i_4 + 1])))) * (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (var_0)))))));
                        var_16 = ((/* implicit */_Bool) var_2);
                    }
                    for (long long int i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        var_17 = min((min((min((var_0), (((/* implicit */unsigned int) (unsigned char)170)))), (((/* implicit */unsigned int) arr_14 [(_Bool)1] [(unsigned short)12] [i_2] [i_0])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? ((-(arr_7 [i_0]))) : ((~(((/* implicit */int) var_5))))))));
                        arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)72))))), (((((/* implicit */_Bool) var_10)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-89)))))))) ? (max((((((/* implicit */_Bool) arr_22 [i_6] [i_6] [(_Bool)1] [i_1] [i_0])) ? (268435455LL) : (((/* implicit */long long int) arr_4 [i_0])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))))) : (min((((/* implicit */long long int) var_12)), (-3181801049427184716LL)))));
                        arr_24 [i_0] [i_1] [i_1] [i_1] [i_1] [5] = ((/* implicit */unsigned short) (_Bool)1);
                    }
                    for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        arr_27 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_13 [8] [i_0] [i_2] [i_2]) : (((/* implicit */int) arr_17 [(signed char)9] [15ULL] [15ULL] [i_2] [15ULL]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((arr_10 [i_0] [7] [i_0] [i_0] [i_2] [i_7]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [(signed char)8] [(signed char)8] [i_0] [(signed char)8])))))))) && (var_7)));
                        arr_28 [i_0] [i_0] [i_7] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((var_10) < (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) << (((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_14 [i_1] [i_1] [i_1] [i_0])))) - (230))))) * ((-(((((/* implicit */int) (signed char)-93)) - (((/* implicit */int) arr_25 [i_0] [i_1] [1LL] [i_2] [i_7] [i_0]))))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_9 = 1; i_9 < 17; i_9 += 1) 
                        {
                            arr_35 [i_0] = ((/* implicit */unsigned int) ((var_12) ? ((-(((/* implicit */int) (unsigned char)96)))) : (((/* implicit */int) (unsigned char)86))));
                            arr_36 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_31 [i_9 + 2]))));
                        }
                        for (int i_10 = 0; i_10 < 19; i_10 += 4) 
                        {
                            arr_39 [i_0] = ((/* implicit */unsigned short) arr_15 [i_0] [12ULL] [i_1] [i_1] [i_1] [i_0]);
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_10])) + (((/* implicit */int) (unsigned char)255)))))));
                        }
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (arr_3 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)160)))));
                    }
                    arr_40 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */signed char) var_11);
                    arr_41 [i_1] [i_1] [i_2] &= ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) << ((((~(((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])))) - (60)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 19; i_11 += 4) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 4) 
            {
                {
                    arr_47 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */int) arr_21 [i_0] [i_12])) : (arr_0 [i_0] [i_12]))) - (((/* implicit */int) min((arr_43 [i_0] [i_12]), (((/* implicit */short) arr_31 [i_12])))))))), (min((((((/* implicit */long long int) ((/* implicit */int) var_4))) / (-268435458LL))), (((/* implicit */long long int) min((var_8), (((/* implicit */int) var_9)))))))));
                    arr_48 [i_0] [i_11] [i_0] = ((/* implicit */unsigned char) (signed char)-88);
                    arr_49 [i_0] [i_11] [i_12] &= max(((-(((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_11] [i_12])))), (((/* implicit */int) (signed char)-37)));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_13 = 2; i_13 < 16; i_13 += 1) 
        {
            arr_54 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_13]);
            var_20 = ((/* implicit */unsigned short) arr_52 [i_0] [i_0] [i_13]);
            arr_55 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [14U])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3))))), (min((arr_46 [i_0] [i_0]), (((/* implicit */unsigned int) arr_42 [i_0]))))))) ? (((/* implicit */unsigned int) min(((-(((/* implicit */int) var_3)))), (((/* implicit */int) arr_21 [i_13 - 1] [i_13 - 1]))))) : (((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned int) arr_21 [i_0] [i_13]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_13] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (arr_30 [i_0] [i_0] [i_0])))) : (((unsigned int) var_5))))));
            arr_56 [i_0] [i_13] = ((/* implicit */unsigned short) (((+(((/* implicit */int) max((arr_43 [i_0] [i_0]), (((/* implicit */short) var_9))))))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_53 [i_0])))))));
        }
        arr_57 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_1)), (arr_5 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((arr_6 [i_0]) && (((/* implicit */_Bool) arr_21 [i_0] [i_0])))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_38 [i_0] [i_0] [(signed char)16] [i_0] [i_0] [i_0]))));
    }
    for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 4) 
    {
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 23; i_15 += 4) 
        {
            for (int i_16 = 0; i_16 < 23; i_16 += 1) 
            {
                for (int i_17 = 1; i_17 < 21; i_17 += 4) 
                {
                    {
                        arr_70 [i_14] [i_14] [i_14] [i_14] [5U] = ((/* implicit */unsigned char) var_0);
                        var_21 = ((/* implicit */long long int) min((arr_69 [i_14] [i_17 - 1] [i_17] [i_17]), (((((/* implicit */_Bool) arr_69 [i_15] [i_17 + 1] [i_17] [i_17])) ? (arr_69 [i_15] [i_17 + 1] [16LL] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)109)))))));
                    }
                } 
            } 
        } 
        arr_71 [i_14] [(signed char)13] = arr_69 [i_14] [i_14] [i_14] [(unsigned char)21];
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_18 = 2; i_18 < 22; i_18 += 1) /* same iter space */
        {
            arr_76 [i_14] [(signed char)21] = ((/* implicit */short) 5831797591548068282ULL);
            var_22 = ((/* implicit */unsigned int) var_12);
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))));
        }
        for (unsigned char i_19 = 2; i_19 < 22; i_19 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned int) var_6);
            /* LoopNest 2 */
            for (int i_20 = 2; i_20 < 21; i_20 += 4) 
            {
                for (int i_21 = 0; i_21 < 23; i_21 += 3) 
                {
                    {
                        var_25 = ((/* implicit */_Bool) arr_60 [(unsigned short)3]);
                        var_26 = ((/* implicit */signed char) arr_69 [i_21] [i_20 + 1] [i_14] [i_14]);
                    }
                } 
            } 
        }
        arr_83 [i_14] [20U] = ((/* implicit */long long int) var_10);
    }
    var_27 = ((((((/* implicit */_Bool) (signed char)-94)) ? ((+(((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12)))))) << (((var_10) - (2553854012U))));
}
