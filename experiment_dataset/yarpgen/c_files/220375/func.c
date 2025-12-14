/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220375
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
    var_11 = ((/* implicit */short) var_4);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        var_12 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 + 2])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 16; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (!(((((/* implicit */long long int) ((/* implicit */int) (signed char)101))) == (687483623109934265LL))))))));
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) (unsigned short)0)))))));
                    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) -1321641221))));
                    var_16 = ((/* implicit */long long int) var_3);
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 2) 
        {
            for (short i_4 = 3; i_4 < 14; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 3) 
                {
                    {
                        arr_15 [i_0] [i_3] [(_Bool)1] [i_4] [i_4] [i_5 + 1] = ((/* implicit */unsigned int) (unsigned char)18);
                        arr_16 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0 + 1] [i_3 - 1] [i_4 + 3])) & (((/* implicit */int) arr_4 [i_0] [i_0]))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_6 = 3; i_6 < 24; i_6 += 1) 
    {
        arr_20 [i_6 - 1] |= ((long long int) ((arr_18 [i_6 - 1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6 - 2] [i_6 + 1])))));
        var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 4194303U))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            for (int i_8 = 2; i_8 < 24; i_8 += 3) 
            {
                for (unsigned char i_9 = 2; i_9 < 22; i_9 += 4) 
                {
                    {
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))))));
                        var_19 = ((/* implicit */long long int) max((max((((((/* implicit */_Bool) -687483623109934276LL)) ? (587312136U) : (587312130U))), (((587312126U) * (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))), ((~(2147483647U)))));
                        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_4)))) ? (arr_24 [i_6 - 2] [(signed char)24] [i_8]) : (((/* implicit */long long int) (+(((/* implicit */int) var_3))))))))));
                        arr_28 [i_8] [i_7] = ((/* implicit */short) max((((/* implicit */unsigned int) var_10)), (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_1)) : (var_2))) - (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
                        var_21 = ((max(((+(((/* implicit */int) (unsigned short)45590)))), ((+(((/* implicit */int) arr_26 [i_6] [i_7] [i_9] [i_9] [i_9 - 2] [6])))))) == (((/* implicit */int) var_7)));
                    }
                } 
            } 
        } 
    }
    for (int i_10 = 3; i_10 < 16; i_10 += 2) 
    {
        arr_33 [i_10] = ((/* implicit */unsigned long long int) 511);
        /* LoopSeq 3 */
        for (int i_11 = 2; i_11 < 13; i_11 += 4) 
        {
            arr_36 [i_10] = ((/* implicit */long long int) 880361428U);
            var_22 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) 1958195923)) ? (3456339292646767168ULL) : (((/* implicit */unsigned long long int) 1688862424U)))) % (((/* implicit */unsigned long long int) 3707655159U))));
            arr_37 [i_10] [i_10] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) == (((arr_23 [i_10 - 3] [i_11] [i_11 - 2] [i_11]) ^ (((/* implicit */long long int) ((/* implicit */int) ((var_2) == (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))))));
        }
        for (unsigned int i_12 = 0; i_12 < 17; i_12 += 2) 
        {
            arr_40 [(short)1] [(short)1] = ((/* implicit */unsigned short) ((long long int) var_5));
            arr_41 [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) & (var_1))))));
            arr_42 [14ULL] [i_12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) arr_26 [i_10] [i_10 - 2] [i_10] [i_10] [2U] [i_10 + 1])))));
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 16; i_13 += 2) 
            {
                for (unsigned short i_14 = 3; i_14 < 16; i_14 += 2) 
                {
                    {
                        var_23 = ((((((/* implicit */_Bool) max((((/* implicit */int) arr_44 [(signed char)3] [i_10 + 1] [i_10] [i_10 - 3])), (arr_43 [2U] [(unsigned short)9] [2U])))) ? (((((/* implicit */_Bool) arr_11 [(unsigned short)0] [i_12])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((((/* implicit */_Bool) 587312129U)) || (((/* implicit */_Bool) 280354933))))))) * (((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_34 [12U] [12U]))) < (((/* implicit */long long int) (-(var_0))))))));
                        arr_51 [(short)4] [i_12] [i_12] [i_14 - 3] = ((/* implicit */short) ((((/* implicit */_Bool) (((-(arr_14 [i_10 - 2] [i_12] [i_12] [i_14]))) << (((/* implicit */int) ((unsigned short) arr_39 [i_10])))))) ? ((-(1688862424U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_14]))))) >> (((3707655148U) - (3707655130U))))))));
                        arr_52 [14LL] = ((/* implicit */unsigned int) (((-(arr_13 [i_10 - 3] [i_10 - 3] [i_10 - 2] [i_12] [i_10 - 3]))) ^ (((/* implicit */unsigned long long int) ((((arr_24 [i_12] [i_12] [i_12]) + (9223372036854775807LL))) >> (((((/* implicit */int) ((short) 1239329944))) + (21415))))))));
                        var_24 -= ((((((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))) >> (((/* implicit */int) (_Bool)0)))) == (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */unsigned long long int) -8006237386296641897LL)) : (arr_31 [i_10 - 3] [i_13]))))))));
                        arr_53 [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */signed char) 4294967291U);
                    }
                } 
            } 
        }
        for (unsigned long long int i_15 = 1; i_15 < 15; i_15 += 2) 
        {
            var_25 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_31 [i_10 - 1] [i_15 + 1])) ? (max((var_2), (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1913861167U)) || (((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) 2792942418U)))))))))));
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((max((((/* implicit */int) (_Bool)1)), (0))) * (((/* implicit */int) ((unsigned short) arr_35 [(short)5] [i_10 - 1]))))))));
            /* LoopNest 2 */
            for (int i_16 = 1; i_16 < 16; i_16 += 2) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    {
                        var_27 = ((/* implicit */long long int) max(((!(((/* implicit */_Bool) (signed char)14)))), ((!(((/* implicit */_Bool) arr_62 [i_17] [i_10 - 2] [i_16 + 1] [i_17]))))));
                        arr_63 [9U] = ((/* implicit */signed char) arr_29 [i_15]);
                        arr_64 [11U] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_16])) % (arr_7 [i_10] [i_16])));
                        var_28 = ((/* implicit */signed char) max((((/* implicit */int) max((((/* implicit */short) var_3)), (var_9)))), ((+(((/* implicit */int) arr_58 [i_10] [i_15 + 2] [i_16]))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned char i_18 = 2; i_18 < 15; i_18 += 1) 
        {
            for (unsigned short i_19 = 2; i_19 < 15; i_19 += 4) 
            {
                {
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)19972)) && ((_Bool)1)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_20 = 2; i_20 < 13; i_20 += 2) 
                    {
                        for (signed char i_21 = 3; i_21 < 15; i_21 += 2) 
                        {
                            {
                                arr_74 [i_21] = ((/* implicit */unsigned char) 18446744073709551615ULL);
                                arr_75 [i_10 - 1] [(signed char)9] [i_10] [i_10 - 3] [(signed char)12] [i_21] [i_10] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_6)) < (((arr_31 [i_10 - 3] [i_18 - 1]) * (((/* implicit */unsigned long long int) -1388700509))))));
                                var_30 = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned char) (-(arr_57 [(unsigned short)5] [(unsigned short)5] [i_19 + 1] [i_19])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned short) 2147483648U);
        arr_76 [i_10] = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) arr_24 [i_10 - 2] [i_10 - 2] [(short)2])))));
    }
}
