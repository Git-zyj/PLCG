/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220852
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
    var_17 = ((/* implicit */long long int) var_15);
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_0)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_13)), (1933333211U)))) ? ((+(((/* implicit */int) var_13)))) : (((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) ((unsigned char) 1933333211U))) ? (((((/* implicit */_Bool) 1933333211U)) ? (((/* implicit */long long int) var_5)) : (-7650954966950870192LL))) : (((/* implicit */long long int) min((2361634085U), (((/* implicit */unsigned int) (signed char)33)))))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_15))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-47)) - (((/* implicit */int) var_8))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 14496203093731193661ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_3 [6U] [16U])))) ? (var_4) : (min((7398718114451835112LL), (9223372036854775807LL)))))));
        var_20 = ((/* implicit */signed char) min(((~(((var_3) % (var_4))))), (((/* implicit */long long int) ((((1933333211U) << (((var_3) + (5883643342661403231LL))))) == ((~(var_5))))))));
        var_21 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (72057594037927424ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0])))) * (((/* implicit */unsigned long long int) ((arr_3 [6LL] [i_0]) * (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_14))))))))));
    }
    for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_22 = ((/* implicit */signed char) (-((+(2485608263704187241LL)))));
        /* LoopSeq 4 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) 1933333211U)) ? (-7398718114451835113LL) : (-7398718114451835112LL))))))));
            var_23 = ((/* implicit */long long int) arr_0 [i_1]);
            var_24 -= ((/* implicit */signed char) ((long long int) min((min((var_3), (((/* implicit */long long int) (signed char)112)))), (arr_2 [i_1]))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) ? (7398718114451835112LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-34))))))));
            /* LoopNest 2 */
            for (long long int i_4 = 1; i_4 < 8; i_4 += 4) 
            {
                for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    {
                        var_26 |= ((/* implicit */long long int) arr_0 [(_Bool)1]);
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7398718114451835112LL)) ? (((/* implicit */int) (short)-6164)) : (((/* implicit */int) arr_20 [i_1] [i_3] [i_4] [i_5]))))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-119))) : (2697728580U))) : (((unsigned int) var_13)))))));
                        arr_21 [i_4] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_3)))) ? (var_7) : (((((/* implicit */long long int) ((/* implicit */int) var_1))) & (-9223372036854775807LL)))));
                        var_28 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-70)) * (((/* implicit */int) (_Bool)0))));
                        var_29 += (!(((/* implicit */_Bool) var_12)));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_6 = 2; i_6 < 7; i_6 += 2) /* same iter space */
        {
            arr_26 [i_1] [i_6] [i_1] = (+((~(arr_3 [i_6] [i_6]))));
            var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) (unsigned short)54719))))))))));
            /* LoopNest 2 */
            for (unsigned short i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 3; i_8 < 6; i_8 += 1) 
                {
                    {
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) 7631540231596261545LL))));
                        var_32 = ((/* implicit */short) arr_20 [i_1] [i_6 + 1] [i_7] [i_8 + 3]);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                for (signed char i_10 = 0; i_10 < 10; i_10 += 1) 
                {
                    for (unsigned int i_11 = 4; i_11 < 9; i_11 += 3) 
                    {
                        {
                            var_33 += ((/* implicit */int) ((((/* implicit */_Bool) 7398718114451835112LL)) && (((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1] [i_1]))));
                            var_34 = ((/* implicit */unsigned char) ((var_7) - (-9223372036854775807LL)));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_12 = 2; i_12 < 7; i_12 += 2) /* same iter space */
        {
            var_35 = ((/* implicit */long long int) ((unsigned char) min(((+(((/* implicit */int) arr_15 [i_12] [i_12] [i_12] [4U])))), ((+(((/* implicit */int) arr_39 [i_12] [i_12] [i_12] [i_12] [i_1] [1])))))));
            var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) ((_Bool) ((((/* implicit */unsigned long long int) (-(var_12)))) + (((var_10) % (var_10)))))))));
            var_37 = ((/* implicit */signed char) ((((min((((/* implicit */long long int) min((arr_3 [i_12] [i_12]), (((/* implicit */unsigned int) var_2))))), ((~(var_16))))) + (9223372036854775807LL))) << ((((~(((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) -7398718114451835112LL)) : (var_10))))) - (7398718114451835111ULL)))));
            var_38 &= ((/* implicit */signed char) max((min((((/* implicit */long long int) (-(((/* implicit */int) var_1))))), (((((/* implicit */_Bool) arr_16 [i_1])) ? (5827309363843718641LL) : (((/* implicit */long long int) arr_3 [i_12] [i_12])))))), (arr_24 [i_12])));
            var_39 = ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 323248557U)) ? (374235430U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ^ (arr_17 [i_1] [i_1] [i_12] [i_12] [i_12] [i_12]))), (((/* implicit */unsigned long long int) -7398718114451835112LL))));
        }
        /* LoopNest 2 */
        for (signed char i_13 = 0; i_13 < 10; i_13 += 3) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 0; i_15 < 10; i_15 += 3) 
                    {
                        for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 1) 
                        {
                            {
                                var_40 = ((/* implicit */signed char) (short)12226);
                                var_41 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))));
                            }
                        } 
                    } 
                    arr_56 [i_13] [i_13] = min((((unsigned long long int) ((arr_12 [(signed char)6] [i_13] [0ULL]) ? (2697728580U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))), ((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 562949952372736LL)) : (9173911393725128872ULL))))));
                    /* LoopNest 2 */
                    for (signed char i_17 = 1; i_17 < 7; i_17 += 2) 
                    {
                        for (long long int i_18 = 0; i_18 < 10; i_18 += 1) 
                        {
                            {
                                arr_64 [i_13] [i_14] [i_14] [i_13] [i_13] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((min((3485942077915925329LL), (((/* implicit */long long int) var_2)))) > (((/* implicit */long long int) 2361634084U))))), (min((min((arr_49 [i_1] [i_13] [2LL] [i_13]), (arr_43 [i_14] [i_13] [i_14]))), (((/* implicit */unsigned char) var_2))))));
                                arr_65 [i_1] [i_13] [i_14] [1LL] [i_1] [i_14] = ((/* implicit */_Bool) 9223372036854775807LL);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_42 = ((/* implicit */int) max((var_42), (((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_51 [i_1] [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) arr_51 [i_1] [i_1] [0ULL] [i_1]))))), (min((((/* implicit */unsigned int) (_Bool)1)), (323248557U))))))));
        /* LoopNest 3 */
        for (unsigned char i_19 = 0; i_19 < 10; i_19 += 3) 
        {
            for (int i_20 = 0; i_20 < 10; i_20 += 1) 
            {
                for (long long int i_21 = 0; i_21 < 10; i_21 += 4) 
                {
                    {
                        var_43 -= var_11;
                        arr_73 [i_1] [i_1] [i_19] = ((/* implicit */signed char) 9007199254740991LL);
                        var_44 = ((/* implicit */unsigned char) var_8);
                        var_45 = ((/* implicit */_Bool) var_3);
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_22 = 0; i_22 < 11; i_22 += 1) 
    {
        var_46 = ((/* implicit */unsigned int) min((var_46), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (6551599778861353625ULL) : (((/* implicit */unsigned long long int) 12931385)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
        var_47 += ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_74 [i_22] [i_22])) > (4503591037435904ULL)))) == (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_75 [i_22])) ? (arr_2 [i_22]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))));
        arr_76 [i_22] [(signed char)7] = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) var_13)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
    }
    for (long long int i_23 = 0; i_23 < 17; i_23 += 1) 
    {
        arr_79 [i_23] = ((/* implicit */signed char) 7398718114451835112LL);
        /* LoopNest 3 */
        for (unsigned int i_24 = 0; i_24 < 17; i_24 += 4) 
        {
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                for (long long int i_26 = 3; i_26 < 15; i_26 += 1) 
                {
                    {
                        var_48 -= ((/* implicit */unsigned char) var_11);
                        var_49 = ((/* implicit */unsigned short) 2361634084U);
                        var_50 = ((/* implicit */int) min((var_50), (((/* implicit */int) min((((/* implicit */long long int) 3971718739U)), (9223372036854775807LL))))));
                        var_51 = ((/* implicit */signed char) 0U);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_27 = 0; i_27 < 17; i_27 += 4) 
        {
            for (unsigned long long int i_28 = 0; i_28 < 17; i_28 += 4) 
            {
                {
                    var_52 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2361634084U)) ? (7439005908980706460LL) : (((/* implicit */long long int) 72030318U))));
                    var_53 = ((/* implicit */unsigned short) (!(((0U) == (((((/* implicit */_Bool) -7398718114451835112LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)32))) : (4294967295U)))))));
                }
            } 
        } 
    }
}
