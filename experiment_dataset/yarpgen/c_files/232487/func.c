/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232487
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
    var_13 = ((((/* implicit */_Bool) (-((+(var_10)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) (+(5728971314990175051LL))))) : (var_3));
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_14 = var_7;
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) 2702723699553280909LL)))))) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (unsigned char)248))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) arr_9 [i_4] [i_4]);
                                arr_16 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) (unsigned char)78))));
                            }
                        } 
                    } 
                    var_16 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) ((unsigned int) arr_7 [i_2] [i_1] [i_0]))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 1] [(signed char)15])))));
                    var_17 = ((/* implicit */signed char) (unsigned short)65513);
                }
            } 
        } 
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */int) (signed char)124)) * (((((/* implicit */int) arr_12 [i_0] [i_0] [i_0 - 1] [i_0])) / (((/* implicit */int) arr_1 [i_0 + 1])))))))));
    }
    for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) (((~(((/* implicit */int) ((unsigned short) arr_12 [9U] [(signed char)7] [i_5] [i_5]))))) & (((/* implicit */int) arr_4 [i_5] [i_5]))));
        arr_19 [i_5] = ((/* implicit */_Bool) arr_5 [i_5]);
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 3; i_7 < 17; i_7 += 4) 
            {
                {
                    arr_25 [i_5] [i_7 + 2] [i_7] = ((/* implicit */unsigned int) var_4);
                    /* LoopNest 2 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 21; i_9 += 4) 
                        {
                            {
                                var_20 *= ((/* implicit */signed char) ((unsigned long long int) min((((arr_30 [i_5] [i_6] [i_7] [i_6] [i_5] [i_5]) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)93))))), (((/* implicit */unsigned int) ((var_8) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)78)))))))));
                                arr_32 [i_6] [i_8 - 1] [i_7] [i_6] [i_6] &= (-(((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_7 - 3]))) | (arr_3 [i_7 - 3] [i_7 + 1]))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((arr_22 [i_5]) << (((((/* implicit */int) arr_4 [i_5] [(signed char)12])) - (65269)))))) | (((((/* implicit */long long int) -1209665063)) ^ (arr_28 [i_7])))))) ? (((((/* implicit */_Bool) arr_26 [i_7] [i_8] [i_8 - 1] [i_8] [i_8] [i_8 - 1])) ? (((/* implicit */long long int) 2989470472U)) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_6 [i_6] [i_8]))))));
                                var_22 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_6] [i_8]))) + ((+(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_5) : (var_5)))))));
                                var_23 = ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned short) var_2))), ((+(((/* implicit */int) arr_15 [i_5] [i_5]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (short i_10 = 0; i_10 < 24; i_10 += 2) 
    {
        arr_35 [i_10] [i_10] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (unsigned short)15621)), (var_3)));
        /* LoopNest 3 */
        for (long long int i_11 = 0; i_11 < 24; i_11 += 2) 
        {
            for (signed char i_12 = 4; i_12 < 23; i_12 += 4) 
            {
                for (unsigned long long int i_13 = 4; i_13 < 23; i_13 += 4) 
                {
                    {
                        var_24 = ((/* implicit */_Bool) var_0);
                        var_25 = ((/* implicit */unsigned long long int) 813659676U);
                        var_26 = ((/* implicit */signed char) var_2);
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_14 = 4; i_14 < 17; i_14 += 2) 
    {
        var_27 = ((/* implicit */signed char) 9223372036854775807LL);
        /* LoopSeq 1 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_28 = ((/* implicit */long long int) min((((/* implicit */unsigned short) (((-(var_3))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (4294967283U))))))), ((unsigned short)10382)));
            /* LoopNest 2 */
            for (long long int i_16 = 3; i_16 < 17; i_16 += 4) 
            {
                for (signed char i_17 = 0; i_17 < 18; i_17 += 4) 
                {
                    {
                        var_29 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((max((var_8), (((/* implicit */long long int) 2289966595U)))) <= (((/* implicit */long long int) max((((/* implicit */int) var_12)), (var_6)))))))) / ((+(((var_7) ? (3403112755U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_15] [i_17])))))))));
                        var_30 -= ((/* implicit */unsigned short) arr_23 [i_14] [i_17]);
                        var_31 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) 1157359394)), (((unsigned long long int) arr_18 [i_16 - 3]))));
                        var_32 = ((/* implicit */long long int) var_2);
                        var_33 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_9))));
                    }
                } 
            } 
            arr_55 [i_15] = ((/* implicit */_Bool) var_1);
            /* LoopNest 2 */
            for (unsigned int i_18 = 0; i_18 < 18; i_18 += 4) 
            {
                for (int i_19 = 2; i_19 < 14; i_19 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_20 = 0; i_20 < 18; i_20 += 2) 
                        {
                            var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((min((((/* implicit */long long int) var_12)), (6606194330075609782LL))) & (((/* implicit */long long int) ((unsigned int) (+(((/* implicit */int) (signed char)-91)))))))))));
                            var_35 += ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) 4294967292U)) > (8287073334752899773ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_6) < (((/* implicit */int) arr_57 [i_18] [i_18] [i_20])))))) : (2157191331U)));
                        }
                        /* vectorizable */
                        for (unsigned int i_21 = 0; i_21 < 18; i_21 += 4) 
                        {
                            var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)189))) : (arr_40 [i_21] [i_18] [(signed char)1] [i_14 - 3])))) ? (((((/* implicit */_Bool) arr_10 [i_21] [i_19 + 3] [i_18] [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_15] [i_19 - 1] [i_18] [i_15] [i_15]))) : (var_10))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) / (1710771194))))));
                            var_37 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [6U])) ? (((/* implicit */int) (signed char)7)) : (var_1))) | (((/* implicit */int) (signed char)-103))));
                        }
                        for (long long int i_22 = 1; i_22 < 16; i_22 += 2) 
                        {
                            var_38 = (unsigned char)79;
                            var_39 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7960334698212459518LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_17 [i_18] [i_14]))))) ? (((/* implicit */int) (signed char)-127)) : (((((/* implicit */_Bool) 3282150339U)) ? (((/* implicit */int) arr_42 [i_19] [i_19] [i_18])) : (((/* implicit */int) var_2)))))))));
                        }
                        var_40 = ((/* implicit */unsigned char) ((911491964U) * (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((unsigned int) -1309125809941141226LL)))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (signed char i_23 = 3; i_23 < 16; i_23 += 4) 
        {
            for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
            {
                {
                    var_41 = ((/* implicit */unsigned char) min(((-(14259212903756572736ULL))), (((/* implicit */unsigned long long int) 1309125809941141216LL))));
                    /* LoopNest 2 */
                    for (signed char i_25 = 0; i_25 < 18; i_25 += 4) 
                    {
                        for (signed char i_26 = 0; i_26 < 18; i_26 += 4) 
                        {
                            {
                                var_42 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-24))));
                                arr_87 [i_24] [i_24] [i_24 - 1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((/* implicit */int) arr_11 [(unsigned short)12] [i_25] [i_24] [i_23 - 2] [i_14]))))), ((+(-3804387146514405465LL)))));
                                arr_88 [i_14 - 1] [i_23] [i_24 - 1] [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3738545425162212676LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)11256))) : (-5972329838818309684LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_24] [i_25] [i_24] [i_24] [i_23 + 1] [i_24]))) : (arr_83 [i_14] [i_24] [i_14] [i_14])));
                                arr_89 [i_24] = min((((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)26683)))))))), (((((/* implicit */_Bool) -8476430600292511392LL)) ? (-2862254261357882684LL) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_24] [i_25] [i_25] [i_24 - 1] [i_23] [i_24]))))));
                                var_43 += ((/* implicit */unsigned int) ((var_10) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_14] [i_14] [i_24] [i_14 - 3] [i_26])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
        {
            var_44 = ((/* implicit */unsigned short) var_4);
            /* LoopNest 2 */
            for (long long int i_28 = 2; i_28 < 17; i_28 += 4) 
            {
                for (signed char i_29 = 0; i_29 < 18; i_29 += 4) 
                {
                    {
                        var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) arr_10 [i_29] [i_29] [i_28 + 1] [i_27]))));
                        var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) var_9))));
                        var_47 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_36 [i_27 - 1] [i_27 - 1])) : (((/* implicit */int) arr_36 [i_27 - 1] [i_27 - 1])))));
                    }
                } 
            } 
            var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) var_2)))))))))));
        }
    }
}
