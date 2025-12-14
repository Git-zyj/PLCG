/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194011
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
    for (int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((((arr_0 [i_0]) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)49152)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)16384))))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) | (264241152)))))))));
        var_16 ^= ((/* implicit */signed char) min((max(((-(((/* implicit */int) (unsigned char)209)))), (((/* implicit */int) var_12)))), (((((/* implicit */int) (!(((/* implicit */_Bool) 15178494343237393108ULL))))) * (((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */int) arr_0 [4])) : (((/* implicit */int) var_5))))))));
        var_17 = ((_Bool) var_8);
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(unsigned short)4])))))) + (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [8])), (arr_1 [(_Bool)1])))) ? (3268249730472158507ULL) : (((((/* implicit */_Bool) -264241152)) ? (12033545799166287039ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) arr_3 [i_1]);
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 1) 
            {
                {
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1]))) ^ (var_6)));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 3; i_4 < 19; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            {
                                var_20 -= ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (1800112399U))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_1] [i_4 + 1])))));
                                var_21 = ((((/* implicit */_Bool) arr_13 [i_3] [i_3 - 1] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1] [i_2] [i_3 - 1] [i_4] [i_5] [i_5] [i_1]))) : (((((/* implicit */_Bool) var_14)) ? (var_6) : (((/* implicit */unsigned int) arr_11 [i_4] [i_4 + 2] [i_1] [i_4 + 2])))));
                                var_22 *= ((/* implicit */short) (+(var_6)));
                                var_23 = (!(((/* implicit */_Bool) arr_12 [i_3 + 2] [i_3] [i_3])));
                            }
                        } 
                    } 
                    arr_18 [i_1] = ((/* implicit */unsigned short) 2691349775813957022LL);
                    var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_3 + 1] [i_3 + 1] [i_3 + 3])) * (((/* implicit */int) arr_7 [i_3 + 1] [i_3 + 1] [i_3 + 3]))));
                }
            } 
        } 
    }
    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) /* same iter space */
    {
        arr_22 [i_6] [i_6] |= ((/* implicit */_Bool) (~((((+(((/* implicit */int) (short)32740)))) & ((-(arr_11 [i_6] [i_6] [(signed char)4] [i_6])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 2) 
        {
            for (unsigned char i_8 = 2; i_8 < 19; i_8 += 2) 
            {
                {
                    var_25 = ((/* implicit */short) (-((+(((/* implicit */int) (short)(-32767 - 1)))))));
                    /* LoopNest 2 */
                    for (short i_9 = 2; i_9 < 20; i_9 += 1) 
                    {
                        for (short i_10 = 0; i_10 < 21; i_10 += 1) 
                        {
                            {
                                arr_38 [i_6] [i_6] [i_7] = arr_24 [i_6] [i_7] [i_8];
                                arr_39 [i_8] |= ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_35 [i_9 + 1] [i_9 - 1] [i_9 + 1] [(short)3] [(short)3] [i_9 + 1])))), (((/* implicit */int) (unsigned short)16374))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 21; i_11 += 2) 
                    {
                        for (unsigned long long int i_12 = 1; i_12 < 18; i_12 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (-(((((/* implicit */_Bool) arr_28 [i_6] [i_7 - 1] [i_8 + 1] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_6] [i_6] [i_8 - 2] [i_11]))) : (-2691349775813957023LL))))))));
                                var_27 = ((/* implicit */long long int) ((((/* implicit */int) arr_43 [i_6] [i_6] [i_7] [i_6])) != (((/* implicit */int) (unsigned char)255))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) min((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_4 [i_6] [i_6])) : (((/* implicit */int) (unsigned char)184))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (min((((/* implicit */unsigned long long int) (unsigned short)124)), (2124619935816428236ULL))))), (((/* implicit */unsigned long long int) (short)-1)))))));
                    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_40 [i_6] [i_6])) ? (((/* implicit */int) arr_24 [i_7] [i_7] [i_6])) : ((+(((/* implicit */int) arr_46 [i_8 + 1] [i_8]))))));
                }
            } 
        } 
        arr_47 [i_6] = ((/* implicit */_Bool) arr_26 [i_6] [i_6]);
        arr_48 [7U] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 901225998U)) ? (((/* implicit */int) arr_23 [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_36 [(_Bool)1] [i_6] [12LL] [i_6] [i_6] [i_6] [i_6]))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((arr_12 [i_6] [i_6] [i_6]) != (((/* implicit */long long int) ((arr_15 [i_6] [i_6] [i_6]) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))))));
        var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))));
    }
    /* vectorizable */
    for (unsigned short i_13 = 0; i_13 < 21; i_13 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_14 = 0; i_14 < 21; i_14 += 2) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (long long int i_16 = 0; i_16 < 21; i_16 += 2) 
                {
                    {
                        var_31 = ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_8 [i_13])) : (((/* implicit */int) var_4))));
                        var_32 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */int) (unsigned short)34678)) : (((/* implicit */int) (unsigned short)8))))));
                        arr_57 [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (var_3)));
                        var_33 = ((/* implicit */int) 11103415461300997130ULL);
                        arr_58 [i_13] [i_13] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_14 [i_16] [i_15] [i_14] [i_14] [i_13]))));
                    }
                } 
            } 
        } 
        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_13] [i_13] [i_13] [i_13])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_28 [i_13] [i_13] [i_13] [i_13]))));
        /* LoopNest 3 */
        for (signed char i_17 = 2; i_17 < 18; i_17 += 4) 
        {
            for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 3) 
            {
                for (short i_19 = 1; i_19 < 17; i_19 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_20 = 1; i_20 < 18; i_20 += 2) 
                        {
                            var_35 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_6)) ? (3268249730472158508ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                            var_36 = ((/* implicit */unsigned char) ((var_3) != (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32111)))))));
                        }
                        for (short i_21 = 0; i_21 < 21; i_21 += 3) 
                        {
                            arr_71 [i_13] [i_13] [i_18] [19U] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)37703)) ? (((/* implicit */int) (short)32754)) : (((/* implicit */int) (signed char)-109))));
                            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))) ? ((+(((/* implicit */int) arr_29 [i_13] [i_21])))) : (((/* implicit */int) arr_9 [i_13] [i_13] [i_13]))));
                        }
                        arr_72 [i_19 + 3] [i_19] [i_13] [i_17 + 2] [i_13] = ((/* implicit */_Bool) var_8);
                        var_38 *= ((/* implicit */unsigned long long int) (unsigned char)157);
                    }
                } 
            } 
        } 
        var_39 -= ((/* implicit */unsigned char) arr_52 [i_13]);
    }
    var_40 = ((/* implicit */short) ((15178494343237393095ULL) | (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))) * (((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))))))));
    var_41 = ((/* implicit */unsigned short) (unsigned char)249);
}
