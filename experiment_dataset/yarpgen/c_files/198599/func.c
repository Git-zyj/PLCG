/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198599
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((((((long long int) (short)-17754)) + (9223372036854775807LL))) >> (((4191165516098510228LL) - (4191165516098510206LL)))))));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (~(((unsigned int) (short)-17732)))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            for (long long int i_3 = 1; i_3 < 17; i_3 += 3) 
            {
                {
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_15)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3] [i_3 - 1] [i_2]))) : (((long long int) var_7)))))));
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */int) (short)-19187)) : (((/* implicit */int) (unsigned char)213))))) ? (((((/* implicit */_Bool) var_0)) ? (var_15) : (((/* implicit */int) var_1)))) : ((+(((/* implicit */int) var_16)))))))));
                    /* LoopSeq 3 */
                    for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        var_22 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_9 [i_1] [i_3 - 1])) * (var_0)));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-16258)) ? (1021123671U) : (((/* implicit */unsigned int) 724960515))));
                        /* LoopSeq 3 */
                        for (int i_5 = 2; i_5 < 17; i_5 += 2) /* same iter space */
                        {
                            var_24 |= ((/* implicit */short) ((_Bool) ((unsigned short) arr_2 [i_1] [i_2])));
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), ((+(var_0)))));
                        }
                        for (int i_6 = 2; i_6 < 17; i_6 += 2) /* same iter space */
                        {
                            arr_22 [i_1] [i_3] [i_6] [i_1] [i_6] = var_12;
                            arr_23 [i_2] [i_1] [i_4] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_3] [i_2] [i_1])) ? (arr_14 [i_6] [i_3] [i_2] [i_1]) : (((/* implicit */unsigned int) arr_7 [i_6] [i_2] [i_2]))))));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_13 [i_3 + 1] [i_2] [i_6 - 1])) : (((/* implicit */int) arr_13 [i_3 - 1] [i_2] [i_6 + 1]))));
                            var_27 *= ((/* implicit */unsigned int) ((int) (((_Bool)1) ? (((/* implicit */long long int) 1073676288)) : (7541281588807127129LL))));
                        }
                        for (int i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            arr_27 [i_1] [i_1] [i_3] = ((/* implicit */int) ((arr_8 [i_1] [i_1]) < (((/* implicit */long long int) ((/* implicit */int) var_16)))));
                            var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_7]))));
                            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_11 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) arr_11 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1])))))));
                            arr_28 [i_1] [i_1] [i_1] [i_1] [i_7] [i_1] |= ((/* implicit */signed char) ((unsigned long long int) (unsigned char)95));
                        }
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(2047U)))) ? (((/* implicit */int) arr_19 [i_3 - 1] [i_3] [i_3] [i_3] [i_3 - 1])) : ((~(((/* implicit */int) var_16)))))))));
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        arr_32 [i_1] [i_1] [i_1] [i_8] = ((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1));
                        arr_33 [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_3 - 1] [i_3]))));
                        var_31 = ((/* implicit */short) ((int) 9220896013080313447ULL));
                        arr_34 [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-16256)) + (2147483647))) >> (((((/* implicit */int) (short)-19174)) + (19194)))))) ? (((/* implicit */int) ((unsigned short) arr_4 [i_1]))) : (((/* implicit */int) arr_17 [i_3 + 1] [i_3] [i_3] [i_8] [i_8]))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_10 = 2; i_10 < 17; i_10 += 4) 
                        {
                            arr_41 [i_1] [i_9] [i_3] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_19 [i_9] [i_9] [i_9] [i_9] [i_1])) < (var_14)));
                            var_32 ^= ((/* implicit */signed char) var_2);
                            var_33 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) (short)18803))) | (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) > (arr_18 [i_1] [i_2] [i_3] [i_9] [i_1] [i_10]))))));
                        }
                        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (arr_21 [i_1] [i_1] [i_3])))))))));
                        var_35 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (arr_4 [i_1]))) / (((((/* implicit */_Bool) var_1)) ? (var_14) : (((/* implicit */int) arr_19 [i_1] [i_2] [i_3] [i_3] [i_9]))))));
                    }
                }
            } 
        } 
        var_36 += ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_39 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) : (arr_6 [(unsigned short)16] [i_1])))));
        /* LoopSeq 2 */
        for (short i_11 = 0; i_11 < 18; i_11 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_12 = 1; i_12 < 17; i_12 += 2) 
            {
                for (unsigned int i_13 = 0; i_13 < 18; i_13 += 3) 
                {
                    {
                        var_37 ^= ((/* implicit */_Bool) ((arr_47 [i_12 - 1] [i_11] [i_12]) ? (((/* implicit */int) arr_24 [i_12 - 1] [i_11])) : (((/* implicit */int) arr_43 [i_12 + 1] [i_11]))));
                        var_38 = ((/* implicit */_Bool) min((var_38), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_13] [i_11] [i_13])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))) && (((_Bool) -881057252))))));
                        var_39 = ((/* implicit */unsigned int) var_7);
                        var_40 = ((/* implicit */long long int) ((((((/* implicit */int) arr_11 [i_1] [i_11] [i_12] [i_13])) * (((/* implicit */int) var_4)))) << ((((-(((/* implicit */int) var_6)))) - (20145)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_14 = 0; i_14 < 18; i_14 += 3) 
            {
                for (unsigned int i_15 = 0; i_15 < 18; i_15 += 1) 
                {
                    {
                        arr_59 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((var_3) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_1]))))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))));
                        arr_60 [i_15] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (((-(var_10))) << (((((/* implicit */int) var_6)) + (20176)))));
                    }
                } 
            } 
        }
        for (unsigned short i_16 = 1; i_16 < 15; i_16 += 1) 
        {
            arr_63 [i_1] [(signed char)10] [i_1] |= ((/* implicit */unsigned int) var_17);
            var_41 = ((/* implicit */unsigned char) var_3);
        }
    }
    for (long long int i_17 = 1; i_17 < 18; i_17 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_18 = 2; i_18 < 16; i_18 += 2) 
        {
            for (unsigned int i_19 = 0; i_19 < 19; i_19 += 3) 
            {
                {
                    arr_74 [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-6888))))) ? (((/* implicit */int) ((unsigned char) var_12))) : (var_14)));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_20 = 0; i_20 < 19; i_20 += 2) /* same iter space */
                    {
                        arr_78 [i_17] [i_17] [i_18] [i_19] [i_19] [i_20] = ((/* implicit */long long int) arr_0 [i_17]);
                        arr_79 [i_17] [i_18] [i_17] [i_19] [i_20] = ((/* implicit */unsigned char) var_3);
                        var_42 = ((/* implicit */short) (!(((/* implicit */_Bool) var_12))));
                    }
                    for (unsigned long long int i_21 = 0; i_21 < 19; i_21 += 2) /* same iter space */
                    {
                        var_43 ^= ((/* implicit */short) ((((/* implicit */_Bool) (~(min((var_13), (((/* implicit */unsigned long long int) var_6))))))) ? (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_68 [i_17]))))), (((((/* implicit */_Bool) arr_66 [i_19] [i_18])) ? (var_0) : (var_13))))) : (((((_Bool) arr_69 [i_17] [i_17])) ? (max((((/* implicit */unsigned long long int) var_10)), (var_13))) : ((+(var_0)))))));
                        arr_82 [i_17] [i_18] [i_19] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_17 - 1] [i_17 + 1])) ? (((/* implicit */int) arr_2 [i_17 - 1] [i_17 + 1])) : (((/* implicit */int) arr_2 [i_17 - 1] [i_17 - 1]))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_17 - 1] [i_17 + 1])) + (-1))))));
                        arr_83 [i_19] = ((/* implicit */unsigned long long int) ((unsigned short) min((arr_76 [i_17] [i_18 - 1] [i_19] [i_21] [i_21] [i_18]), (((/* implicit */long long int) var_12)))));
                    }
                    /* vectorizable */
                    for (long long int i_22 = 0; i_22 < 19; i_22 += 1) 
                    {
                        var_44 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_81 [i_17 + 1] [i_17 - 1] [i_17 + 1] [i_17 + 1])) ? (((((/* implicit */_Bool) var_12)) ? (arr_84 [i_17] [i_17] [i_19] [i_22]) : (arr_0 [i_17]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_7))))))));
                        arr_87 [i_17] [i_18] [i_19] [i_18] = ((/* implicit */int) ((unsigned long long int) arr_73 [i_17 + 1]));
                    }
                    var_45 ^= (~(((long long int) arr_64 [i_17 + 1])));
                    var_46 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_75 [i_17] [i_18] [i_19])) : (((/* implicit */int) arr_75 [i_17 + 1] [i_18] [i_18 - 1]))))) / (min((((/* implicit */long long int) arr_75 [i_17] [i_18 - 1] [i_19])), (var_10)))));
                    var_47 = ((/* implicit */unsigned long long int) min((((long long int) ((12948291997870392342ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16274)))))), (((/* implicit */long long int) arr_71 [i_17] [i_18] [i_18] [i_19]))));
                }
            } 
        } 
        var_48 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) var_11))))));
    }
    for (unsigned short i_23 = 0; i_23 < 11; i_23 += 2) 
    {
        /* LoopNest 2 */
        for (short i_24 = 1; i_24 < 9; i_24 += 2) 
        {
            for (int i_25 = 0; i_25 < 11; i_25 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_26 = 2; i_26 < 10; i_26 += 1) 
                    {
                        for (unsigned long long int i_27 = 2; i_27 < 9; i_27 += 4) 
                        {
                            {
                                arr_105 [i_24] [i_24] [i_25] [i_27] = ((/* implicit */int) ((unsigned int) (-(arr_31 [i_27] [i_24] [i_24] [i_23]))));
                                arr_106 [i_23] [i_24] [i_25] [i_25] [i_23] [i_26] [i_27] = ((/* implicit */unsigned short) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) * (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_12)))))) + (((/* implicit */int) arr_46 [i_27] [i_24] [i_25]))));
                                arr_107 [i_23] [i_24] [i_24] [i_23] [i_23] [i_27] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_86 [i_26] [i_25] [i_24 - 1] [i_23])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_6)))))));
                            }
                        } 
                    } 
                    arr_108 [i_23] [i_23] [i_24] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) arr_16 [i_25])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -724960510)) ? (((/* implicit */long long int) 3825771718U)) : (-9190578413047540851LL)))) ? (((var_11) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_25] [i_25] [i_25]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_11 [i_23] [i_24] [i_25] [i_23]))))))));
                }
            } 
        } 
        arr_109 [i_23] &= ((/* implicit */unsigned short) arr_53 [i_23]);
    }
    var_49 ^= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((var_14) ^ (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_14))))) : (((/* implicit */int) min((var_9), (var_6)))))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) - (((/* implicit */int) var_7))))));
    var_50 = ((/* implicit */long long int) max((var_50), (((/* implicit */long long int) (((((~(var_15))) / (((int) var_12)))) != (((/* implicit */int) ((var_0) != (((/* implicit */unsigned long long int) 3906115307U))))))))));
    var_51 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((var_14), (var_14)))) > (((unsigned int) var_16))))), ((-(max((((/* implicit */unsigned long long int) var_1)), (var_13)))))));
}
