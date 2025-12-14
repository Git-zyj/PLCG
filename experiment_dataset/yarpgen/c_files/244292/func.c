/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244292
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_16)), (var_13)))) && (((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) var_16))))))));
        var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) var_3))));
        arr_4 [i_0] = ((/* implicit */short) ((((max((14514960054180582292ULL), (((/* implicit */unsigned long long int) var_9)))) >> ((((-(var_15))) - (1721880571))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
    }
    for (unsigned int i_1 = 1; i_1 < 9; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_1))));
        var_21 -= ((/* implicit */int) (-(((((var_18) / (((/* implicit */long long int) var_15)))) / (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((long long int) (+(var_15)))))));
            arr_12 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
        }
    }
    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_4 = 2; i_4 < 10; i_4 += 4) 
        {
            /* LoopSeq 2 */
            for (int i_5 = 2; i_5 < 9; i_5 += 2) 
            {
                arr_23 [i_3] [i_3] [i_3] [i_5] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((((/* implicit */int) var_5)) | (var_10)))))) && (((/* implicit */_Bool) var_16))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 2; i_6 < 10; i_6 += 1) 
                {
                    for (unsigned char i_7 = 2; i_7 < 9; i_7 += 4) 
                    {
                        {
                            arr_29 [i_3 + 1] [i_3] [i_5 + 2] [i_3] = ((/* implicit */unsigned char) max((((/* implicit */short) ((unsigned char) var_11))), ((short)-6708)));
                            arr_30 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) (-(max(((+(((/* implicit */int) var_3)))), (((/* implicit */int) max((var_8), (((/* implicit */short) var_1)))))))));
                            arr_31 [i_3 - 1] [i_4 - 2] [i_6] [i_3] = ((var_9) | (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))));
                            arr_32 [i_3] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_18)) >= (18446744073709551604ULL)))))) >= (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)35)) | (((/* implicit */int) var_16))))) && (((/* implicit */_Bool) var_13)))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) (signed char)9);
                var_24 = ((/* implicit */signed char) ((max((var_10), (((/* implicit */int) ((signed char) var_10))))) | (((((((/* implicit */int) var_0)) | (((/* implicit */int) var_6)))) & (((var_9) | (((/* implicit */int) var_5))))))));
                arr_33 [i_3 - 1] [i_3 - 1] [i_3] = ((/* implicit */unsigned char) ((1297404386) | (((((/* implicit */int) ((var_18) >= (((/* implicit */long long int) ((/* implicit */int) var_5)))))) + ((-(((/* implicit */int) var_4))))))));
            }
            for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                var_25 = ((/* implicit */signed char) (-((-((+(((/* implicit */int) var_1))))))));
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 11; i_9 += 2) 
                {
                    for (signed char i_10 = 3; i_10 < 9; i_10 += 4) 
                    {
                        {
                            arr_40 [i_3 + 1] [i_3] [i_3 + 1] = ((/* implicit */short) ((signed char) var_4));
                            var_26 &= ((/* implicit */unsigned char) (-((~(((((/* implicit */int) var_3)) | (((/* implicit */int) var_0))))))));
                        }
                    } 
                } 
            }
            var_27 = ((/* implicit */unsigned char) ((min((((((/* implicit */int) var_11)) << (((((/* implicit */int) (unsigned char)97)) - (79))))), (((((/* implicit */int) var_12)) & (((/* implicit */int) (signed char)35)))))) == (max((var_10), ((~(((/* implicit */int) var_4))))))));
            /* LoopSeq 4 */
            for (unsigned short i_11 = 0; i_11 < 11; i_11 += 4) 
            {
                arr_45 [i_3] [i_11] [2LL] = ((/* implicit */unsigned short) var_1);
                arr_46 [i_3 - 1] [i_3] [i_11] = ((/* implicit */signed char) (+((+(((3828676972U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                var_28 -= ((/* implicit */int) (((+((+(10407886374667810140ULL))))) & (((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_16)) / (((/* implicit */int) var_16)))))))));
            }
            for (int i_12 = 0; i_12 < 11; i_12 += 3) 
            {
                arr_51 [i_3] [i_12] [i_3] [i_3] = ((/* implicit */short) (~((~(((((/* implicit */int) var_14)) | (((/* implicit */int) var_8))))))));
                var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) (unsigned short)14943))));
            }
            for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 3) 
            {
                arr_54 [i_4] [i_4] [i_3] [i_4] = ((/* implicit */long long int) var_8);
                var_30 = ((/* implicit */signed char) ((short) ((((/* implicit */long long int) (+(((/* implicit */int) var_0))))) / (max((var_18), (((/* implicit */long long int) var_16)))))));
                arr_55 [i_3] [i_3 + 1] [i_3] = (-((~(((/* implicit */int) ((((/* implicit */int) (signed char)-30)) >= (((/* implicit */int) var_12))))))));
            }
            /* vectorizable */
            for (unsigned char i_14 = 0; i_14 < 11; i_14 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_15 = 2; i_15 < 10; i_15 += 1) /* same iter space */
                {
                    arr_61 [i_3] [(unsigned char)10] [i_4 - 1] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) var_17))));
                    var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
                }
                for (unsigned int i_16 = 2; i_16 < 10; i_16 += 1) /* same iter space */
                {
                    var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (+(((/* implicit */int) var_1)))))));
                    var_33 = ((/* implicit */short) max((var_33), (var_2)));
                    arr_65 [(unsigned char)4] [7LL] [i_14] [i_3] = ((/* implicit */_Bool) (+(((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_16))))));
                }
                for (short i_17 = 0; i_17 < 11; i_17 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_18 = 0; i_18 < 11; i_18 += 4) 
                    {
                        arr_72 [i_3] [i_3] [i_3] [i_3] [i_18] [(unsigned short)5] [i_17] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_8)))) && ((!(((/* implicit */_Bool) var_12))))));
                        arr_73 [(signed char)2] [(signed char)2] [i_3] [(unsigned short)4] [(short)9] = (-(((/* implicit */int) ((((/* implicit */int) var_16)) != (var_15)))));
                    }
                    /* LoopSeq 1 */
                    for (short i_19 = 2; i_19 < 10; i_19 += 3) 
                    {
                        arr_76 [i_3] [(unsigned char)2] [i_14] [i_3] [i_19 - 2] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_5))))) == (-1218736881)));
                        arr_77 [i_3 + 2] [i_3] [(unsigned short)5] [i_14] [(unsigned short)5] [(unsigned char)4] = (((~(((/* implicit */int) var_16)))) > (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (var_17)))));
                        var_34 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))) & ((-(212521586U)))));
                    }
                }
                var_35 = ((/* implicit */short) ((((/* implicit */int) ((signed char) var_15))) + ((~(((/* implicit */int) (short)20041))))));
                /* LoopSeq 2 */
                for (unsigned short i_20 = 0; i_20 < 11; i_20 += 1) 
                {
                    var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_0)))))) & (((long long int) var_5)))))));
                    arr_81 [i_4] |= ((/* implicit */signed char) (+((+(((/* implicit */int) var_7))))));
                }
                for (unsigned char i_21 = 0; i_21 < 11; i_21 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_22 = 0; i_22 < 11; i_22 += 1) 
                    {
                        var_37 ^= ((/* implicit */long long int) ((((/* implicit */int) var_8)) + (((((/* implicit */int) (unsigned char)176)) + (((/* implicit */int) var_1))))));
                        var_38 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) var_15)))));
                        var_39 -= ((/* implicit */short) (-(((/* implicit */int) var_4))));
                        arr_87 [i_3] [i_3] [i_3] [i_21] [i_22] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_8))));
                    }
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        arr_90 [i_3] = ((/* implicit */long long int) ((unsigned short) ((-4234196383112026402LL) != (((/* implicit */long long int) var_15)))));
                        arr_91 [i_21] [i_4 - 2] [8ULL] [10LL] [i_4] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) < ((+(((/* implicit */int) var_3))))));
                    }
                    for (long long int i_24 = 0; i_24 < 11; i_24 += 3) 
                    {
                        arr_94 [i_3] [i_3 + 1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (_Bool)1))))));
                        arr_95 [i_3] [i_3] [i_3] = ((/* implicit */short) (+(((/* implicit */int) var_0))));
                    }
                    for (short i_25 = 1; i_25 < 10; i_25 += 1) 
                    {
                        arr_98 [i_3] = ((/* implicit */short) ((signed char) ((unsigned short) var_12)));
                        arr_99 [i_3] [i_3] [(_Bool)0] [i_3] [5ULL] = ((/* implicit */unsigned char) var_1);
                    }
                    var_40 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_11)))))));
                    arr_100 [(signed char)2] [i_4] [i_14] [i_21] [i_4 + 1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) var_12)) & (var_13)));
                }
                var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)83)) | (((/* implicit */int) (signed char)124)))))));
                var_42 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) var_7))))) < (((var_18) | (((/* implicit */long long int) ((/* implicit */int) var_16)))))));
            }
        }
        /* LoopSeq 2 */
        for (short i_26 = 0; i_26 < 11; i_26 += 3) 
        {
            var_43 = ((/* implicit */unsigned char) ((short) (-(var_15))));
            /* LoopNest 2 */
            for (short i_27 = 1; i_27 < 9; i_27 += 2) 
            {
                for (int i_28 = 0; i_28 < 11; i_28 += 1) 
                {
                    {
                        arr_110 [i_3] [i_26] [i_3] [i_26] = ((/* implicit */short) ((((/* implicit */long long int) min(((~(var_13))), (((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_17))))))) & ((~((~(-4324090588399044649LL)))))));
                        arr_111 [i_3] [i_3 - 1] [i_3 - 1] [i_28] [i_3 - 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((_Bool) var_15))) & (((/* implicit */int) var_17)))) & ((~(((/* implicit */int) var_5))))));
                        arr_112 [6] [i_3] [i_27] [i_27] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) == ((-(max((-1297121592), (((/* implicit */int) var_14))))))));
                    }
                } 
            } 
            arr_113 [i_3 + 1] [i_3] = ((/* implicit */short) max((((/* implicit */int) (((~(-2974166651094276196LL))) != (((/* implicit */long long int) ((/* implicit */int) (short)-30926)))))), ((~(((/* implicit */int) var_3))))));
            arr_114 [i_3 - 1] [i_3] [i_3 - 1] = ((/* implicit */unsigned long long int) (unsigned char)232);
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_29 = 2; i_29 < 10; i_29 += 1) 
            {
                var_44 = ((/* implicit */int) (unsigned short)6465);
                var_45 ^= ((/* implicit */short) ((((/* implicit */int) ((short) 7279059977536578241LL))) & (((((/* implicit */int) var_1)) * (((/* implicit */int) var_1))))));
                /* LoopNest 2 */
                for (unsigned long long int i_30 = 0; i_30 < 11; i_30 += 3) 
                {
                    for (unsigned char i_31 = 0; i_31 < 11; i_31 += 3) 
                    {
                        {
                            var_46 = ((/* implicit */_Bool) ((var_13) - (((var_10) ^ (((/* implicit */int) var_4))))));
                            var_47 ^= ((/* implicit */_Bool) (-((-(((/* implicit */int) (short)21555))))));
                            var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) ((unsigned long long int) ((signed char) (short)-20041))))));
                            arr_125 [i_31] [(unsigned short)0] [i_29] |= ((/* implicit */unsigned long long int) ((unsigned int) var_14));
                            var_49 -= ((/* implicit */signed char) (+(-27750316)));
                        }
                    } 
                } 
            }
            for (signed char i_32 = 0; i_32 < 11; i_32 += 3) 
            {
                arr_128 [i_3 - 1] [i_3] [i_32] [i_3] = ((/* implicit */short) ((unsigned char) min((((1852357898) | (((/* implicit */int) var_8)))), (((/* implicit */int) ((((/* implicit */long long int) var_10)) <= (var_18)))))));
                arr_129 [i_26] [(unsigned char)6] &= ((/* implicit */unsigned char) (-((~((+(((/* implicit */int) (signed char)-28))))))));
            }
        }
        for (signed char i_33 = 0; i_33 < 11; i_33 += 4) 
        {
            var_50 ^= ((/* implicit */short) (((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-6682))) != (4082445709U)))))) != ((~(var_13)))));
            var_51 = ((/* implicit */short) min((var_51), (((/* implicit */short) var_15))));
            /* LoopNest 2 */
            for (short i_34 = 1; i_34 < 9; i_34 += 3) 
            {
                for (unsigned short i_35 = 1; i_35 < 10; i_35 += 1) 
                {
                    {
                        arr_136 [i_3] = ((((/* implicit */int) var_4)) ^ ((-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)81)) && (((/* implicit */_Bool) var_4))))))));
                        arr_137 [i_3 - 1] [i_33] [i_34] [i_33] |= ((/* implicit */unsigned char) max((17399122773500345048ULL), (((/* implicit */unsigned long long int) (unsigned short)13229))));
                    }
                } 
            } 
        }
    }
    var_52 = (-(((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_4)))))));
    var_53 -= ((/* implicit */unsigned short) var_10);
    var_54 = ((/* implicit */unsigned char) (signed char)5);
}
