/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245553
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
    var_17 &= ((/* implicit */long long int) var_12);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [(unsigned char)4] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        var_18 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        var_19 = ((/* implicit */long long int) ((unsigned int) arr_2 [i_0]));
        var_20 &= ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_2 [i_0])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 13LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (arr_2 [(unsigned short)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) ((arr_0 [i_1]) && (((/* implicit */_Bool) arr_8 [i_1] [i_1]))))) : ((+(((/* implicit */int) arr_1 [i_1]))))))) : (((((/* implicit */_Bool) var_16)) ? (arr_8 [i_1] [i_1]) : (arr_8 [i_1] [i_1])))));
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) arr_6 [(unsigned char)0]);
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) arr_9 [i_4] [i_3]))));
                        /* LoopSeq 2 */
                        for (long long int i_5 = 2; i_5 < 11; i_5 += 1) 
                        {
                            var_24 &= ((/* implicit */signed char) arr_16 [i_4] [i_5 + 3] [i_5 + 3] [i_5 + 4] [i_5 + 2] [i_4]);
                            var_25 = arr_13 [i_2] [i_2] [i_5 + 3];
                            var_26 &= ((/* implicit */long long int) arr_11 [i_4] [i_4] [i_4]);
                            var_27 = ((/* implicit */_Bool) arr_2 [(_Bool)1]);
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-1)) : ((-2147483647 - 1))))) ? (((((/* implicit */unsigned long long int) 2147483643)) + (9002532455746861714ULL))) : (arr_2 [i_2])))) ? (((/* implicit */long long int) arr_16 [i_4] [(_Bool)1] [10ULL] [i_4] [10ULL] [12])) : (((((/* implicit */_Bool) max((((/* implicit */short) arr_19 [i_4] [i_4] [i_4] [i_4] [i_4])), (arr_1 [i_3])))) ? (((((/* implicit */_Bool) var_6)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1] [i_2] [i_4] [i_6]))))) : (((/* implicit */long long int) ((arr_16 [i_3] [i_3] [i_3] [12] [i_3] [i_3]) * (arr_16 [i_4] [i_2] [i_3] [(_Bool)0] [i_4] [8])))))))))));
                            var_29 = ((/* implicit */int) arr_5 [i_1]);
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 15; i_7 += 1) 
        {
            for (int i_8 = 0; i_8 < 15; i_8 += 4) 
            {
                {
                    var_30 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_29 [i_8] [i_7] [i_7] [i_1])) ? (((/* implicit */int) arr_29 [i_1] [i_7] [i_1] [i_1])) : (((/* implicit */int) arr_29 [i_1] [i_1] [i_1] [i_1])))), (((/* implicit */int) var_11))));
                    arr_30 [(unsigned short)12] [i_7] [i_8] = ((/* implicit */unsigned int) arr_26 [(short)14] [i_7]);
                    /* LoopNest 2 */
                    for (int i_9 = 4; i_9 < 14; i_9 += 2) 
                    {
                        for (int i_10 = 0; i_10 < 15; i_10 += 2) 
                        {
                            {
                                var_31 &= ((/* implicit */long long int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_31 [i_10] [i_10] [i_10] [(unsigned char)7] [i_10])), (arr_16 [i_8] [i_7] [i_7] [i_7] [i_7] [i_10])))) != (((((/* implicit */_Bool) min((arr_16 [i_10] [i_10] [i_8] [i_9] [i_10] [i_10]), (((/* implicit */unsigned int) (_Bool)1))))) ? (arr_18 [i_9 - 4] [i_9] [i_9 + 1] [i_9 - 3] [(short)10]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (var_14) : (((/* implicit */int) arr_15 [i_9] [14LL] [i_9] [i_9 - 1])))))))));
                                var_32 &= (-(((/* implicit */int) (_Bool)1)));
                                var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14ULL))))));
                                var_34 = ((/* implicit */_Bool) var_4);
                                arr_35 [i_1] [i_1] [i_8] [i_9 - 1] [i_1] [i_9 - 1] [i_7] = arr_1 [(short)14];
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) 2358861553U))), ((-(((/* implicit */int) (short)(-32767 - 1)))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_31 [(_Bool)1] [i_1] [(_Bool)1] [i_8] [(_Bool)1]))))) ? (((/* implicit */int) ((unsigned char) 7036680000028440372ULL))) : (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_1 [i_1]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 1; i_11 < 14; i_11 += 2) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 2) 
                        {
                            {
                                var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) arr_19 [i_11 - 1] [i_11] [i_11 + 1] [i_11 + 1] [i_12]))));
                                arr_42 [(signed char)13] [i_11] [i_8] [i_11] [i_12] = ((/* implicit */unsigned int) var_0);
                                var_37 = ((/* implicit */int) ((min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [7ULL] [i_12] [4] [i_11 - 1]))) : (arr_21 [i_7] [(unsigned char)11] [i_7] [i_7] [i_7] [i_7] [9LL]))), (((/* implicit */unsigned long long int) var_3)))) + (((/* implicit */unsigned long long int) ((arr_17 [i_11]) ? (((/* implicit */int) arr_40 [i_11] [i_11])) : (((/* implicit */int) arr_0 [i_11 - 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (int i_13 = 0; i_13 < 11; i_13 += 2) 
    {
        var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_16 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])) ? (arr_16 [i_13] [i_13] [10U] [10U] [i_13] [(_Bool)1]) : (var_1)))))));
        /* LoopNest 3 */
        for (long long int i_14 = 3; i_14 < 9; i_14 += 2) 
        {
            for (unsigned char i_15 = 0; i_15 < 11; i_15 += 2) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 4) 
                {
                    {
                        arr_54 [i_13] [i_16] &= ((/* implicit */unsigned long long int) arr_5 [i_14]);
                        arr_55 [i_16] [i_14 - 2] [i_14] [i_16] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_14] [i_14 + 1])) ? (((/* implicit */int) (!(arr_23 [i_13])))) : (((arr_17 [i_14]) ? (((/* implicit */int) arr_1 [i_14])) : (((/* implicit */int) var_15)))))))));
                        var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)2046)) ? (((/* implicit */int) (unsigned short)0)) : (48)));
                    }
                } 
            } 
        } 
        var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_45 [i_13])))) ? ((~(((arr_23 [i_13]) ? (var_2) : (((/* implicit */int) var_8)))))) : (((arr_10 [i_13]) + (arr_10 [i_13])))));
        /* LoopSeq 2 */
        for (short i_17 = 2; i_17 < 9; i_17 += 4) 
        {
            arr_58 [i_13] [i_13] &= ((/* implicit */unsigned char) ((arr_34 [i_13] [i_17] [i_17] [i_13] [i_17] [i_17]) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_25 [i_13] [i_13] [i_13])))) : (((((/* implicit */_Bool) arr_57 [i_17 + 1] [i_17 + 1])) ? (((/* implicit */int) arr_29 [i_17 - 1] [i_17] [i_17 - 1] [i_17])) : (((/* implicit */int) arr_27 [i_17] [i_17 - 1] [(unsigned char)0]))))));
            /* LoopNest 3 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                for (long long int i_19 = 1; i_19 < 10; i_19 += 3) 
                {
                    for (unsigned long long int i_20 = 1; i_20 < 8; i_20 += 2) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned long long int) arr_64 [i_13] [i_17 + 2] [i_13] [i_19 + 1] [(short)9]);
                            var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) ((_Bool) ((((/* implicit */int) var_15)) != (arr_9 [i_17] [i_17])))))));
                        }
                    } 
                } 
            } 
            var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_17 - 2] [i_17 - 1] [i_17 - 2] [i_17 + 2] [i_17 - 1])) ? (arr_39 [i_17 + 1] [i_17 + 1] [i_17 + 1] [i_17 - 1] [i_17 + 1]) : (arr_39 [i_17 + 1] [i_17 - 1] [i_17 - 2] [i_17 - 2] [i_17 - 1])))) ? (((((/* implicit */_Bool) arr_39 [i_17 + 1] [i_17 - 2] [i_17 + 2] [i_17 + 2] [i_17 + 1])) ? (arr_39 [i_17 + 2] [i_17 + 1] [i_17 + 2] [i_17 - 2] [i_17 + 2]) : (var_14))) : (((((/* implicit */_Bool) arr_39 [i_17 + 1] [i_17 + 2] [i_17 - 2] [i_17 + 2] [i_17 + 2])) ? (arr_39 [i_17 - 2] [i_17 - 1] [i_17 - 2] [i_17 - 1] [i_17 + 1]) : (arr_39 [i_17 + 1] [i_17 - 1] [i_17 - 1] [i_17 + 2] [i_17 + 2])))));
        }
        for (unsigned long long int i_21 = 0; i_21 < 11; i_21 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_22 = 1; i_22 < 10; i_22 += 3) 
            {
                for (long long int i_23 = 2; i_23 < 10; i_23 += 2) 
                {
                    {
                        arr_74 [i_22 + 1] [i_21] [i_22 - 1] [i_22] = ((/* implicit */long long int) arr_8 [1ULL] [3]);
                        var_44 = (i_21 % 2 == 0) ? (((/* implicit */signed char) ((min((((/* implicit */int) (unsigned char)3)), (((((/* implicit */int) arr_22 [i_21] [i_21])) << (((arr_18 [i_13] [i_21] [i_21] [i_23 + 1] [i_23 + 1]) + (3728311470742687051LL))))))) % (((((/* implicit */_Bool) ((unsigned char) arr_15 [(unsigned char)6] [i_22] [i_22] [(unsigned char)6]))) ? (((arr_65 [i_21] [i_21] [i_22 - 1] [7LL] [i_23 - 1]) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_6)))) : (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_33 [i_13] [(short)8])) + (6066)))))))))) : (((/* implicit */signed char) ((min((((/* implicit */int) (unsigned char)3)), (((((/* implicit */int) arr_22 [i_21] [i_21])) << (((((arr_18 [i_13] [i_21] [i_21] [i_23 + 1] [i_23 + 1]) + (3728311470742687051LL))) - (4317448189674557791LL))))))) % (((((/* implicit */_Bool) ((unsigned char) arr_15 [(unsigned char)6] [i_22] [i_22] [(unsigned char)6]))) ? (((arr_65 [i_21] [i_21] [i_22 - 1] [7LL] [i_23 - 1]) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_6)))) : (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_33 [i_13] [(short)8])) + (6066))))))))));
                    }
                } 
            } 
            var_45 = ((/* implicit */unsigned int) max((var_45), (((/* implicit */unsigned int) ((min((63), (((/* implicit */int) (_Bool)0)))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)52105)) ? (var_4) : (((/* implicit */unsigned long long int) arr_20 [i_13] [i_21]))))) ? (((/* implicit */int) ((_Bool) arr_43 [i_21]))) : (((/* implicit */int) arr_34 [i_13] [i_13] [i_13] [i_13] [i_21] [(signed char)5])))))))));
        }
    }
}
