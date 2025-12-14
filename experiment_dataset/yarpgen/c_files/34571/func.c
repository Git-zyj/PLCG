/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34571
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((max((arr_0 [i_0]), (((/* implicit */int) var_3)))) & ((-(((/* implicit */int) ((signed char) var_4)))))));
                var_16 = ((/* implicit */_Bool) (+(max(((+(((/* implicit */int) (short)-21217)))), (((/* implicit */int) ((unsigned char) (short)21198)))))));
                arr_6 [i_0] [i_0] [i_1] = (!(((/* implicit */_Bool) (+((-(((/* implicit */int) (signed char)-51))))))));
                var_17 = (+(((/* implicit */int) arr_1 [i_0])));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)-24218)) : ((-(((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_3)))))))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_4 = 3; i_4 < 10; i_4 += 3) 
                {
                    arr_16 [i_2] [i_2] [i_4 + 3] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-68)), (arr_11 [i_2] [i_2])))) ? ((~(((/* implicit */int) (short)-6179)))) : (((((/* implicit */_Bool) var_11)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)67))))))));
                    var_19 = ((/* implicit */short) var_9);
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            {
                                arr_22 [i_5] [i_2] [i_5] [i_5] = ((/* implicit */short) (signed char)50);
                                var_20 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)68)), (var_3)))))) != (((/* implicit */int) arr_3 [i_2] [i_3]))));
                                var_21 = ((/* implicit */unsigned long long int) var_12);
                                arr_23 [i_2] [10ULL] [i_4] [10LL] [i_2] = ((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_2] [i_2]);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) -6641873083777217966LL)))));
                                var_23 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) arr_3 [i_2] [i_3]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 13; i_10 += 3) 
                    {
                        for (unsigned short i_11 = 2; i_11 < 9; i_11 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */int) ((((/* implicit */int) var_3)) == (var_7)));
                                arr_36 [i_2] [(_Bool)1] [9ULL] [i_3] [i_2] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)-68)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-29906))))));
                                arr_37 [i_11] [i_2] [i_7] [i_7] [i_3] [i_2] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-68))));
                            }
                        } 
                    } 
                }
                for (int i_12 = 0; i_12 < 13; i_12 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 13; i_13 += 3) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 13; i_14 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((-269178609), (((/* implicit */int) (_Bool)0))))), (((unsigned long long int) var_0))))) && (((/* implicit */_Bool) min((arr_31 [i_2] [i_12]), (arr_31 [i_2] [i_12])))))))));
                                var_26 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)21217)) ? (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) ((unsigned short) arr_2 [i_3]))))) : (arr_34 [i_2] [i_3] [i_12] [i_13] [i_14])));
                                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (-(arr_24 [i_12] [i_3] [i_2]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_20 [i_2] [i_3] [i_12] [i_3] [(unsigned char)3] [i_14])) <= (((/* implicit */int) arr_20 [i_2] [i_3] [i_3] [i_13] [i_14] [i_3]))))) : ((+(((/* implicit */int) ((unsigned char) arr_38 [i_2] [i_12] [i_12] [i_14])))))));
                                var_28 = ((/* implicit */unsigned char) ((((long long int) arr_11 [i_2] [i_3])) | (((/* implicit */long long int) ((/* implicit */int) max((arr_13 [i_2] [i_2] [i_2]), (arr_13 [i_2] [i_2] [i_2])))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? ((((!(((/* implicit */_Bool) var_11)))) ? (((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_1))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [17] [(signed char)3])))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) (-(arr_27 [(signed char)6] [i_3] [(short)2] [5ULL] [i_12])))) < (((6641873083777217965LL) & (((/* implicit */long long int) ((/* implicit */int) var_3)))))))))));
                    arr_46 [i_2] [i_2] [i_2] [(_Bool)1] = (+((-(((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */long long int) var_12)) : (6641873083777217965LL))))));
                }
                for (short i_15 = 0; i_15 < 13; i_15 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (unsigned char i_17 = 2; i_17 < 12; i_17 += 3) 
                        {
                            {
                                arr_55 [i_17] [i_3] [i_15] [i_16] [i_2] [i_17] = ((/* implicit */unsigned char) ((max((arr_9 [i_17 - 1]), (arr_9 [i_17 + 1]))) < (((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) arr_25 [i_2] [(short)4] [i_2])), (var_5))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)48))))))))));
                                var_30 += ((/* implicit */unsigned long long int) arr_53 [10LL] [10LL] [i_3] [i_15] [i_16] [i_17] [i_17]);
                            }
                        } 
                    } 
                    arr_56 [i_2] [i_3] [i_15] = ((/* implicit */_Bool) arr_49 [i_2] [i_3]);
                    /* LoopNest 2 */
                    for (unsigned short i_18 = 0; i_18 < 13; i_18 += 3) 
                    {
                        for (signed char i_19 = 4; i_19 < 11; i_19 += 2) 
                        {
                            {
                                var_31 += ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned int) (short)21185)))))))) << (((((/* implicit */int) (short)-11633)) + (11650)))));
                                var_32 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) ((unsigned char) var_14))) && (((_Bool) var_4))))));
                                var_33 = (+(((var_10) ? (((/* implicit */long long int) max((arr_33 [i_2] [i_2] [i_2] [4] [i_2]), (((/* implicit */int) (signed char)82))))) : (max((var_1), (((/* implicit */long long int) arr_29 [i_2] [i_2] [i_2] [i_2])))))));
                                var_34 = ((/* implicit */_Bool) min((((((_Bool) 6641873083777217960LL)) ? (max((((/* implicit */unsigned long long int) arr_54 [i_19] [i_2] [i_18] [i_15] [i_3] [i_2] [i_2])), (var_9))) : (((/* implicit */unsigned long long int) ((int) -6641873083777217966LL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_15) % (var_8)))) ? (min((arr_34 [i_2] [i_3] [i_15] [i_18] [i_19]), (((/* implicit */int) (signed char)68)))) : (max((((/* implicit */int) var_0)), (var_7))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_20 = 0; i_20 < 13; i_20 += 3) 
                    {
                        arr_65 [5LL] [i_3] [i_2] [i_20] = ((/* implicit */_Bool) (~(((arr_0 [i_15]) & ((+(((/* implicit */int) arr_51 [i_2] [(unsigned char)1] [i_3] [i_15] [i_20] [i_20]))))))));
                        var_35 += ((/* implicit */short) (~((~(((/* implicit */int) arr_30 [i_2] [i_3] [i_2] [i_20] [(short)7]))))));
                    }
                    /* vectorizable */
                    for (long long int i_21 = 0; i_21 < 13; i_21 += 2) 
                    {
                        arr_69 [(unsigned char)6] [i_3] [i_2] [(signed char)9] [i_21] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 2654967782232319857ULL)))))));
                        var_36 = ((/* implicit */int) (-(var_12)));
                        arr_70 [i_2] [i_2] [i_15] [i_21] [(short)9] [5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-70)) | (((/* implicit */int) arr_57 [i_2] [i_2] [(short)12] [i_2])))))));
                    }
                    /* LoopNest 2 */
                    for (short i_22 = 2; i_22 < 12; i_22 += 2) 
                    {
                        for (long long int i_23 = 0; i_23 < 13; i_23 += 2) 
                        {
                            {
                                arr_75 [i_2] = ((/* implicit */long long int) var_12);
                                arr_76 [i_2] = ((/* implicit */signed char) min((((unsigned long long int) arr_32 [i_2] [i_22 - 1] [i_15] [i_22])), (((/* implicit */unsigned long long int) arr_28 [4ULL] [i_3] [i_15] [i_22] [4LL] [i_23]))));
                            }
                        } 
                    } 
                }
                var_37 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_58 [10LL] [i_2] [i_2] [i_2])) ? (arr_59 [i_3] [i_3] [9] [i_3] [i_2] [i_2]) : (arr_59 [i_2] [i_2] [i_2] [i_2] [i_2] [i_3]))) - (((/* implicit */long long int) (+(((/* implicit */int) (signed char)68)))))));
                var_38 += ((/* implicit */unsigned long long int) var_5);
                var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((((/* implicit */int) arr_21 [i_2] [i_2] [i_2] [i_3])) + (((/* implicit */int) arr_18 [i_3] [i_3] [i_2] [9U])))) + (2147483647))) << (((max((var_11), (((/* implicit */long long int) arr_67 [i_2] [i_2] [i_2] [i_2])))) - (418648463524900440LL)))))) ? (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_3)))))) : (((/* implicit */int) max((var_0), ((short)-8088))))));
            }
        } 
    } 
}
