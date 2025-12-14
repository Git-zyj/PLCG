/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242575
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
    var_13 = ((/* implicit */unsigned short) (-(max(((-(((/* implicit */int) var_11)))), (((/* implicit */int) (unsigned char)207))))));
    var_14 *= (~(((max((((/* implicit */unsigned long long int) var_0)), (15473955794994248074ULL))) << (((var_5) + (2665079008989071674LL))))));
    var_15 = ((/* implicit */unsigned char) (-(((var_4) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_16 = max((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) % (var_5))) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) % (((/* implicit */int) arr_1 [i_0])))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((arr_0 [i_0]) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(2972788278715303541ULL))))))))));
        arr_3 [i_0] = ((/* implicit */long long int) max((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_12))));
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_12))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_1) > (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) << (((((((/* implicit */int) arr_4 [i_1])) << (((((/* implicit */int) arr_1 [i_1])) - (82))))) - (47597)))))) ? (((/* implicit */unsigned long long int) ((var_11) ? (((/* implicit */int) ((((/* implicit */_Bool) -1434612508011911230LL)) && (((/* implicit */_Bool) arr_5 [i_1]))))) : (((/* implicit */int) arr_4 [i_1]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_1])) >= (((/* implicit */int) arr_1 [i_1])))))) ^ ((+(2972788278715303529ULL)))))));
        var_18 = ((/* implicit */unsigned long long int) (short)-3904);
        var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31))) - (var_4)))))))));
        var_20 -= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) > (((/* implicit */int) min((arr_1 [(signed char)15]), (arr_1 [i_1]))))));
        var_21 = ((/* implicit */_Bool) var_5);
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        var_22 &= ((/* implicit */unsigned char) 3108816532U);
        /* LoopSeq 3 */
        for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            arr_12 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((arr_10 [i_3] [i_2] [i_2]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_1 [i_2])) - (91)))));
            /* LoopSeq 1 */
            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                /* LoopSeq 4 */
                for (short i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20861)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8))))) ? ((+(((/* implicit */int) arr_13 [10U] [i_2] [10U] [i_2])))) : ((+(((/* implicit */int) var_8))))));
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (-(((/* implicit */int) var_12)))))));
                    var_25 *= ((/* implicit */unsigned int) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((/* implicit */int) ((short) (unsigned char)5)))));
                }
                for (signed char i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        arr_23 [i_7] [i_6] [i_6] [i_4] [i_3] [i_6] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_12))))) : (((2084223486U) >> (((((/* implicit */int) var_8)) - (53439)))))));
                        arr_24 [i_6] [i_3] = ((/* implicit */int) ((6950096391811496342ULL) >> (((/* implicit */int) arr_14 [i_7] [i_2]))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        arr_27 [i_6] [(signed char)6] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_14 [i_2] [i_3])) : (((/* implicit */int) var_7)))) % (((/* implicit */int) arr_4 [i_2]))));
                        arr_28 [i_2] [(_Bool)1] [(_Bool)1] [i_6] [i_3] |= ((/* implicit */short) (!(arr_15 [(_Bool)1] [(_Bool)1] [i_4] [i_6] [i_8])));
                    }
                    for (unsigned char i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        var_26 = ((/* implicit */long long int) (~(var_3)));
                        var_27 &= ((/* implicit */long long int) ((((/* implicit */int) var_2)) >> (((((((/* implicit */_Bool) arr_5 [18ULL])) ? (12755148911024497895ULL) : (((/* implicit */unsigned long long int) 267911168)))) - (12755148911024497892ULL)))));
                        var_28 = ((/* implicit */int) 2972788278715303536ULL);
                        var_29 *= ((/* implicit */short) ((arr_14 [i_2] [i_4]) ? (229739815U) : (arr_20 [i_2] [i_3] [i_3] [i_4] [i_6] [i_9])));
                        var_30 = ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) -15299697)))));
                    }
                    arr_33 [i_6] [i_3] [i_4] [(signed char)6] [(signed char)6] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_21 [i_6] [i_4] [(short)1] [i_6] [i_6]))) - (((/* implicit */int) var_11))));
                }
                for (unsigned int i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    var_31 *= ((/* implicit */short) (((-(((/* implicit */int) (unsigned char)0)))) << (((-438903748) + (438903758)))));
                    var_32 = ((/* implicit */_Bool) var_8);
                    var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) arr_20 [i_2] [i_2] [i_10] [i_10] [i_3] [i_10]))));
                }
                for (unsigned char i_11 = 0; i_11 < 12; i_11 += 2) 
                {
                    var_34 = ((/* implicit */int) (short)2125);
                    arr_39 [i_2] [i_4] [i_2] [i_11] [i_4] = ((/* implicit */unsigned int) ((((arr_21 [i_3] [i_11] [i_3] [i_3] [i_3]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3890))))) >> (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [i_3]))) * (9881393857421414467ULL)))));
                    var_35 = (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_11] [i_4] [i_3] [i_2]))) % (arr_37 [i_11] [i_2] [i_3] [i_2]))));
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 12; i_12 += 3) 
                {
                    for (unsigned char i_13 = 0; i_13 < 12; i_13 += 1) 
                    {
                        {
                            var_36 -= ((/* implicit */long long int) ((arr_19 [i_2] [i_12] [i_12] [i_2] [i_2] [i_2]) * (arr_19 [i_2] [i_3] [i_4] [(unsigned char)3] [i_12] [i_13])));
                            var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_2] [i_3] [i_4] [i_3] [0] [i_13])) ? (arr_26 [i_2] [i_2] [i_3] [i_4] [i_12] [i_13]) : (arr_26 [i_3] [i_3] [i_4] [i_3] [i_3] [i_2]))))));
                            var_38 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)5))))) ? ((+(((/* implicit */int) (unsigned char)234)))) : ((-(((/* implicit */int) (unsigned short)43254))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (int i_14 = 1; i_14 < 11; i_14 += 3) 
                {
                    var_39 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_44 [(unsigned char)11] [i_4] [i_3] [i_3] [i_2])) ? (1186150763U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) > (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) 1627355807)) : (arr_30 [i_2] [i_2] [i_4] [i_2] [i_14] [(short)8] [i_14 + 1])))));
                    var_40 = ((/* implicit */unsigned long long int) ((signed char) 3338121111U));
                }
                for (signed char i_15 = 1; i_15 < 10; i_15 += 4) 
                {
                    var_41 = ((/* implicit */int) arr_48 [i_2] [i_2] [i_2] [i_2]);
                    var_42 -= 3108816503U;
                }
                for (int i_16 = 0; i_16 < 12; i_16 += 4) 
                {
                    var_43 *= ((/* implicit */_Bool) ((2702763110U) & (((/* implicit */unsigned int) 1127353422))));
                    arr_52 [6] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(1164012964333751414ULL)))) ? (((((/* implicit */_Bool) 8472915086344421595ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_17 [11LL] [i_4] [(signed char)3] [i_3] [(signed char)5] [11U])))) : (((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_8)))))));
                    var_44 = ((/* implicit */short) -321568773);
                }
                var_45 = ((/* implicit */unsigned int) var_7);
            }
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            arr_55 [i_2] = ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned char)26)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : ((~(4294967293U)))));
            var_46 = ((/* implicit */unsigned char) min((var_46), (((unsigned char) arr_30 [i_17] [(unsigned char)2] [(unsigned char)2] [i_17] [i_2] [i_2] [(unsigned char)2]))));
            var_47 &= ((/* implicit */int) var_8);
            var_48 = ((/* implicit */unsigned char) ((int) (~(((/* implicit */int) (unsigned char)61)))));
        }
        for (long long int i_18 = 0; i_18 < 12; i_18 += 2) 
        {
            arr_58 [i_2] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_2] [i_2] [i_18] [i_2])) ? (arr_45 [i_2] [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */unsigned int) ((int) 1164012964333751413ULL)))));
            var_49 = ((/* implicit */unsigned long long int) min((var_49), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_11) ? (arr_29 [(unsigned char)2] [i_2] [i_2] [i_2] [0ULL] [i_18] [(unsigned char)2]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))))));
        }
    }
    var_50 = ((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))) || (((/* implicit */_Bool) var_5))))), ((short)-10963)));
}
