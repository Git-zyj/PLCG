/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225314
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (min((((/* implicit */long long int) var_6)), (2898706958707535685LL))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) var_10);
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 &= ((-2898706958707535664LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                        var_19 = ((/* implicit */unsigned long long int) var_6);
                        var_20 = ((/* implicit */_Bool) -2898706958707535674LL);
                    }
                    for (signed char i_4 = 1; i_4 < 21; i_4 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            arr_16 [i_0] [i_1] [i_5] = ((((/* implicit */_Bool) max((min((3807106058498826141LL), (((/* implicit */long long int) 0U)))), (((/* implicit */long long int) (signed char)-7))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_11 [i_1] [i_1] [i_4 + 1] [(signed char)10])), (var_16)))) : (((max((((/* implicit */unsigned long long int) 2898706958707535673LL)), (15715445009420890895ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3329044828U)))))))));
                            var_21 &= ((14274544148016436910ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_13 [i_2] [i_4] [i_4])) : (((/* implicit */int) (signed char)7))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned char) arr_3 [i_0 - 1])))))));
                            arr_17 [i_0 - 1] [19LL] [19LL] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_3)) | (arr_4 [i_0] [i_1])));
                            var_22 |= (signed char)93;
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_23 &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) 1487451566U)))) ? ((~(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4))) & (789161905U))))) : (789161905U)));
                            var_24 *= ((/* implicit */_Bool) arr_9 [i_0 + 2] [i_1] [i_1 - 1] [i_4 + 1]);
                            arr_21 [i_1] [i_1] [18ULL] = ((/* implicit */unsigned int) (~(((arr_13 [i_0 - 1] [i_4 + 1] [i_4 - 1]) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                        }
                        var_25 += arr_20 [i_0] [i_0] [(signed char)0] [i_0];
                        arr_22 [i_0] [i_0] [i_0] [(_Bool)1] [i_1] = ((/* implicit */unsigned long long int) (short)-19075);
                    }
                    for (int i_7 = 1; i_7 < 21; i_7 += 2) 
                    {
                        var_26 = (~(((/* implicit */int) ((unsigned short) 4170446130U))));
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)768))) == (min((((/* implicit */unsigned int) arr_18 [i_1 - 3] [i_7 - 1])), (702077599U)))));
                        arr_26 [i_1] [i_2] [i_1] [i_1] = (!((_Bool)0));
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_28 &= ((/* implicit */short) ((((/* implicit */_Bool) ((4294967277U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1)))))) ? (((/* implicit */int) (unsigned char)5)) : (((((/* implicit */int) var_14)) / (var_15)))));
                        var_29 = (i_1 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)112)) << (((arr_12 [i_1 - 3] [i_1] [i_1 + 2] [i_1 + 2]) - (2907281951449991414LL)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)112)) << (((((arr_12 [i_1 - 3] [i_1] [i_1 + 2] [i_1 + 2]) - (2907281951449991414LL))) + (9178343073203612138LL))))));
                        var_30 = ((/* implicit */signed char) max((var_30), (arr_3 [i_0])));
                        arr_29 [i_0] &= ((/* implicit */unsigned char) var_16);
                    }
                }
            } 
        } 
        arr_30 [i_0] [(_Bool)1] = ((/* implicit */unsigned int) var_8);
    }
    for (unsigned int i_9 = 0; i_9 < 13; i_9 += 2) 
    {
        arr_33 [i_9] = ((/* implicit */int) arr_6 [i_9] [i_9] [i_9]);
        var_31 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_10 [i_9] [i_9] [i_9] [i_9] [i_9])) || (((/* implicit */_Bool) var_1)))));
        var_32 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((2261574790U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) arr_11 [i_9] [i_9] [i_9] [i_9])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)251)))))));
    }
    for (unsigned short i_10 = 0; i_10 < 19; i_10 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_11 = 0; i_11 < 19; i_11 += 4) 
        {
            var_33 ^= ((/* implicit */short) 18ULL);
            var_34 = (signed char)-64;
            arr_39 [i_10] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64745)) ? (arr_12 [i_10] [i_10] [i_11] [i_11]) : (((/* implicit */long long int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_10] [i_10] [i_10]))) : (max((((/* implicit */unsigned long long int) var_6)), (var_11)))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_12 = 0; i_12 < 19; i_12 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 19; i_13 += 2) 
                {
                    for (long long int i_14 = 0; i_14 < 19; i_14 += 4) 
                    {
                        {
                            arr_50 [i_10] [i_11] [i_10] = ((/* implicit */long long int) (-(((/* implicit */int) var_12))));
                            var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)64733)) << (((789161888U) - (789161884U))))))));
                            var_36 |= ((/* implicit */short) (_Bool)1);
                        }
                    } 
                } 
                var_37 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_10] [i_10] [i_12] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_12 [i_12] [i_10] [i_10] [i_10])));
                arr_51 [i_10] [i_11] [i_12] = ((/* implicit */int) var_2);
            }
            for (short i_15 = 0; i_15 < 19; i_15 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (unsigned long long int i_17 = 2; i_17 < 16; i_17 += 2) 
                    {
                        {
                            arr_59 [i_17] [i_15] [5LL] [i_15] [5LL] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (signed char)118)), (arr_4 [10ULL] [i_15])));
                            var_38 ^= ((/* implicit */signed char) min((min((min((((/* implicit */unsigned long long int) (short)-17827)), (5723087169721719007ULL))), (((/* implicit */unsigned long long int) (short)-11856)))), (((/* implicit */unsigned long long int) (unsigned short)30842))));
                        }
                    } 
                } 
                var_39 = ((/* implicit */signed char) ((((((/* implicit */_Bool) -9223372036854775800LL)) && (((/* implicit */_Bool) 1143012076U)))) && (((((/* implicit */_Bool) arr_43 [i_15] [i_11] [i_10] [(_Bool)1])) || (((/* implicit */_Bool) 2872137230U))))));
            }
            for (short i_18 = 0; i_18 < 19; i_18 += 3) /* same iter space */
            {
                arr_63 [i_10] [i_10] [i_11] [i_18] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (524287U)))) || (((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) (short)-17822)))));
                var_40 = ((/* implicit */_Bool) min((234468339U), (((/* implicit */unsigned int) (!(arr_18 [i_10] [i_11]))))));
                arr_64 [11] [i_11] [i_11] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((397348407) - (((/* implicit */int) var_7)))))) ? (((long long int) ((9223372036854775807LL) ^ (var_0)))) : (((/* implicit */long long int) max((((/* implicit */int) (short)18514)), ((((_Bool)1) ? (((/* implicit */int) var_2)) : (1473538993))))))));
                /* LoopNest 2 */
                for (unsigned int i_19 = 0; i_19 < 19; i_19 += 3) 
                {
                    for (long long int i_20 = 0; i_20 < 19; i_20 += 2) 
                    {
                        {
                            var_41 ^= (!(((/* implicit */_Bool) arr_11 [i_11] [i_11] [i_18] [i_11])));
                            arr_70 [i_10] [(signed char)16] = var_7;
                            arr_71 [i_20] [i_19] = ((((/* implicit */_Bool) 912620326U)) ? ((~((~(arr_2 [i_11] [i_18] [i_20]))))) : ((+(912620322U))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_21 = 0; i_21 < 19; i_21 += 3) 
                {
                    var_42 = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_10] [i_18] [i_11])) | (((/* implicit */int) arr_5 [i_10] [i_10] [i_11]))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_22 = 0; i_22 < 19; i_22 += 2) 
                    {
                        var_43 = ((arr_43 [i_10] [i_18] [i_18] [i_22]) | (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_10] [i_11] [i_10]))))));
                        var_44 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_22] [i_18] [i_18])) ? (((((/* implicit */_Bool) (unsigned short)12237)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_36 [i_10] [i_18] [i_22]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14U)) ? (arr_10 [i_10] [(_Bool)1] [i_18] [i_22] [i_22]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-102)))))) ? (((/* implicit */int) arr_44 [i_10] [i_10] [i_10] [i_22])) : (((/* implicit */int) (unsigned short)15691)))))));
                    }
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        arr_84 [i_10] [i_10] [i_10] [i_10] [i_10] [(_Bool)1] = max((arr_14 [i_10]), (((/* implicit */short) (signed char)93)));
                        var_45 = ((/* implicit */int) (((_Bool)1) ? (-9223372036854775784LL) : (((/* implicit */long long int) 3026960048U))));
                        var_46 = ((/* implicit */long long int) arr_60 [i_10] [i_11] [i_21]);
                    }
                    /* vectorizable */
                    for (long long int i_24 = 1; i_24 < 17; i_24 += 3) 
                    {
                        arr_87 [i_24] [i_18] [i_18] [0] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-106)) <= (-478285127)));
                        arr_88 [i_10] [i_11] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(arr_24 [i_11]))))));
                        var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)49019))))) ? (arr_2 [i_10] [i_21] [i_24]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53315)))));
                        var_48 = ((/* implicit */int) var_2);
                        arr_89 [i_10] [i_10] [14LL] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)12237)) >> (((((/* implicit */int) arr_57 [i_24 + 1] [(_Bool)1] [i_24 - 1] [(signed char)4] [(_Bool)1])) - (26779)))));
                    }
                    var_49 *= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) 13U)))) != (((var_14) ? (var_13) : (((/* implicit */long long int) arr_19 [i_11] [i_18] [i_11] [i_11] [i_10]))))));
                    var_50 = ((/* implicit */int) min((var_50), (((/* implicit */int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 478285137)) ? (var_4) : (((/* implicit */int) (unsigned short)16516)))))) ? (((/* implicit */unsigned int) var_4)) : (min((arr_24 [i_10]), (arr_24 [i_10]))))))));
                }
            }
        }
        for (long long int i_25 = 0; i_25 < 19; i_25 += 4) 
        {
            var_51 |= ((/* implicit */long long int) (~(((/* implicit */int) min((arr_13 [i_10] [i_10] [i_25]), (arr_13 [i_10] [i_10] [i_10]))))));
            var_52 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((int) max(((unsigned short)0), (((/* implicit */unsigned short) (signed char)(-127 - 1))))))), (max((((/* implicit */long long int) arr_18 [i_25] [i_10])), (var_8)))));
            var_53 &= ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
        }
        arr_94 [8U] |= ((max((((/* implicit */int) arr_74 [i_10] [i_10])), (258048))) ^ (((/* implicit */int) (_Bool)1)));
        var_54 &= ((min((((/* implicit */long long int) arr_25 [i_10] [i_10] [i_10])), (826440901269573585LL))) == (((/* implicit */long long int) arr_2 [i_10] [i_10] [i_10])));
        arr_95 [i_10] = ((/* implicit */long long int) (unsigned char)8);
    }
    var_55 -= ((/* implicit */unsigned int) min((2117653545829913539LL), (min((var_8), (((/* implicit */long long int) var_12))))));
}
