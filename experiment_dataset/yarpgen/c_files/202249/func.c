/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202249
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
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((var_17), (((/* implicit */int) var_6)))), (((/* implicit */int) var_6))))) || (((/* implicit */_Bool) min(((signed char)23), ((signed char)23))))));
            var_19 = ((/* implicit */signed char) max((((/* implicit */int) var_14)), (min((((((((/* implicit */int) var_4)) + (2147483647))) >> (((/* implicit */int) var_14)))), (((/* implicit */int) min((((/* implicit */signed char) var_14)), ((signed char)-24))))))));
            arr_6 [i_0] [i_1] = min(((~(var_1))), (((/* implicit */long long int) max((var_17), (((/* implicit */int) (unsigned short)27383))))));
            var_20 += ((/* implicit */unsigned long long int) var_1);
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (unsigned int i_3 = 3; i_3 < 18; i_3 += 1) 
                {
                    for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_0] [8] [i_3] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_12 [i_3 - 3] [i_1] [i_2] [i_3] [i_1] [i_4]), (((/* implicit */unsigned char) var_6))))) ? (((/* implicit */int) ((signed char) var_4))) : (((/* implicit */int) ((signed char) var_2)))));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((1739879643), (((/* implicit */int) (signed char)-20))))) ? (max((min((((/* implicit */unsigned long long int) var_5)), (var_12))), (min((((/* implicit */unsigned long long int) var_15)), (var_9))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((_Bool) var_15))), (max((var_1), (((/* implicit */long long int) var_10)))))))));
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_11))));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_10 [i_0] [i_2] [(_Bool)1] [i_2])), (337643144U)))) ? (((/* implicit */int) ((var_6) || (((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((signed char) (signed char)-54)))))) && (((/* implicit */_Bool) var_4))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
            /* LoopSeq 3 */
            for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 4) 
            {
                arr_21 [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(arr_7 [i_6] [i_5] [i_0])));
                arr_22 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
            }
            for (unsigned int i_7 = 3; i_7 < 19; i_7 += 1) 
            {
                arr_26 [i_0] [i_5] [i_7] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (short)3643)))) ? ((-(var_1))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_0] [(_Bool)1] [i_7])))))));
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_7 - 3] [14U])) ? (((/* implicit */int) var_4)) : (var_17)));
                /* LoopSeq 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_9 = 1; i_9 < 16; i_9 += 4) 
                    {
                        arr_32 [i_0] [i_0] [i_7] [i_8] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-1))));
                        arr_33 [i_0] [i_7] [i_8] = 2246053845U;
                    }
                    for (int i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        var_25 = ((/* implicit */long long int) var_9);
                        arr_37 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) (signed char)-29));
                    }
                    arr_38 [i_0] = ((/* implicit */long long int) ((signed char) var_11));
                    arr_39 [i_0] = ((((/* implicit */_Bool) 2332694724547843141ULL)) ? (((/* implicit */int) (unsigned char)165)) : (645449631));
                }
                for (signed char i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    arr_42 [i_0] = ((/* implicit */signed char) -1LL);
                    arr_43 [i_0] [(short)10] [i_5] [i_0] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((long long int) 2332694724547843141ULL));
                    /* LoopSeq 2 */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        arr_46 [i_0] [i_7] = ((/* implicit */unsigned char) var_12);
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (signed char)-108))));
                        arr_47 [i_0] [i_0] [i_0 + 3] [i_0] [i_0] [7] [(unsigned short)5] = ((/* implicit */long long int) 2332694724547843141ULL);
                    }
                    for (unsigned int i_13 = 1; i_13 < 18; i_13 += 4) 
                    {
                        arr_50 [i_0] [i_5] [(_Bool)1] = ((/* implicit */long long int) ((int) arr_35 [i_7 - 2] [(unsigned char)8]));
                        var_27 = ((/* implicit */short) var_8);
                        arr_51 [i_0] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)1)) - (((/* implicit */int) (unsigned char)249))));
                    }
                    arr_52 [i_0] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)146))));
                }
                arr_53 [(unsigned char)9] [i_0] [i_7 - 2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))));
            }
            for (long long int i_14 = 1; i_14 < 16; i_14 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_15 = 1; i_15 < 19; i_15 += 2) 
                {
                    for (short i_16 = 1; i_16 < 18; i_16 += 3) 
                    {
                        {
                            arr_62 [i_0] [i_0] [i_14] [6] [i_16] = ((/* implicit */unsigned short) arr_19 [i_15 + 1] [i_0 + 2] [i_0] [i_0]);
                            arr_63 [17] [i_5] [i_5] [i_14] [i_14] [i_15] [i_0] = ((/* implicit */signed char) (+(arr_20 [i_5] [i_5] [i_5] [19])));
                        }
                    } 
                } 
                var_28 = var_1;
                var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (((((/* implicit */_Bool) 323866728U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7499))) : (11ULL)))));
            }
            var_30 *= ((/* implicit */unsigned char) arr_7 [i_0 + 3] [i_0 - 3] [i_5]);
            var_31 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2348884782315151403LL))));
        }
        for (unsigned int i_17 = 4; i_17 < 17; i_17 += 3) 
        {
            arr_66 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((signed char) 3520645565105350398LL))), (((((/* implicit */_Bool) var_17)) ? (arr_27 [i_17] [(unsigned short)11] [i_17 - 2] [i_0 + 2] [i_0 + 1]) : (arr_27 [i_17] [i_17] [i_17] [i_17] [i_0 + 1])))));
            arr_67 [i_0] [i_0] = ((/* implicit */unsigned int) (+(-1)));
            /* LoopNest 3 */
            for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 2) 
            {
                for (short i_19 = 1; i_19 < 17; i_19 += 3) 
                {
                    for (unsigned char i_20 = 0; i_20 < 20; i_20 += 3) 
                    {
                        {
                            arr_77 [i_0] [i_19] [i_18] [i_17] [i_0] = ((/* implicit */unsigned int) (((-(max((9528014212413406371ULL), (((/* implicit */unsigned long long int) var_0)))))) * (((/* implicit */unsigned long long int) var_2))));
                            arr_78 [i_20] [i_0] [i_18] [i_0] [i_0] = (!(((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)15232)))))))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            arr_83 [i_0] = ((/* implicit */int) ((var_16) < (((/* implicit */long long int) min((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) var_8)) ? (arr_59 [(signed char)4] [i_0] [i_0] [i_0] [i_0] [i_21]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
            arr_84 [i_0] [0LL] [(unsigned char)6] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) ((unsigned long long int) var_10)))) * ((-(((/* implicit */int) ((unsigned char) var_6)))))));
            /* LoopSeq 1 */
            for (int i_22 = 0; i_22 < 20; i_22 += 3) 
            {
                var_32 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? ((~(((((/* implicit */int) (unsigned short)20480)) & (((/* implicit */int) (unsigned short)63072)))))) : (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) arr_87 [i_0] [i_21] [i_21] [i_22])) ^ (((/* implicit */int) (signed char)-24)))) : (((/* implicit */int) ((signed char) arr_40 [(_Bool)1] [i_21] [(_Bool)1] [i_0] [i_0 - 1])))))));
                /* LoopNest 2 */
                for (unsigned char i_23 = 2; i_23 < 16; i_23 += 3) 
                {
                    for (unsigned short i_24 = 2; i_24 < 19; i_24 += 2) 
                    {
                        {
                            arr_92 [i_0] [(_Bool)1] [i_22] [i_23] [i_24] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)99)), (arr_41 [i_0 + 3] [i_23 + 2] [i_23 - 1] [i_24 + 1])))) ? (((min((((/* implicit */unsigned long long int) var_3)), (var_12))) ^ ((+(var_12))))) : (min((((/* implicit */unsigned long long int) var_3)), (max((arr_27 [i_0] [i_21] [i_22] [19] [i_24 - 1]), (((/* implicit */unsigned long long int) var_4))))))));
                            arr_93 [i_0] [i_21] [i_21] [i_21] [i_21] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)121))));
                            arr_94 [i_0 + 1] [i_0] = ((/* implicit */_Bool) var_2);
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_74 [i_0] [i_0] [(short)16] [i_22] [i_22]))))));
            }
        }
        arr_95 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), ((-(min((var_2), (var_1)))))));
    }
    var_34 = ((/* implicit */unsigned long long int) var_2);
    var_35 = ((/* implicit */_Bool) var_16);
}
