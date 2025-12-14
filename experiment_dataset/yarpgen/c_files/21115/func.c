/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21115
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
    var_15 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_13))) : (((/* implicit */unsigned long long int) var_9))));
    var_16 = ((/* implicit */long long int) (short)-18822);
    var_17 = ((/* implicit */signed char) min((((/* implicit */long long int) var_6)), (-937735521846442505LL)));
    var_18 = ((/* implicit */_Bool) ((unsigned char) (short)4064));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        var_19 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_2 [i_0 + 2]) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (var_0)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0 + 2]))) : (arr_0 [i_0]));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) (short)-25414)) | (((/* implicit */int) arr_1 [i_0 + 3] [i_0 + 2]))))) | (((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)66), (((/* implicit */unsigned char) (_Bool)1)))))))))))));
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-18822))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2] [i_0]))) : ((~(550453122U)))))) : ((-(-6312936115054911301LL))))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_12)) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) arr_4 [i_0])))), (max((((((/* implicit */int) var_8)) << (0LL))), (((/* implicit */int) (unsigned char)122))))));
            var_23 = ((/* implicit */unsigned int) ((unsigned char) (+(((/* implicit */int) arr_4 [i_0 - 1])))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                var_24 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0 + 1] [(unsigned char)5])) - (((/* implicit */int) var_7))));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 20; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0] [(unsigned char)20] [i_4 - 1] [i_4] [i_4 - 2] [16])) ? (((/* implicit */int) arr_9 [i_0] [16LL] [i_4 - 1] [i_4] [16LL] [(unsigned char)12])) : (((/* implicit */int) var_10)))))));
                            arr_13 [i_4] [i_3] [i_1] [(signed char)8] [i_1] [i_0] [i_0] = ((/* implicit */long long int) 6516456075868111ULL);
                            var_26 = ((/* implicit */signed char) ((short) (_Bool)1));
                            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0 - 1])) - (((/* implicit */int) (signed char)-32)))))));
                        }
                    } 
                } 
            }
            for (short i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                var_28 -= ((/* implicit */unsigned int) (unsigned char)134);
                arr_16 [i_0 - 1] [i_1] [12] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [(signed char)20] [i_1] [i_1] [i_1] [i_5] [i_5] [i_5])))))));
                arr_17 [i_1] = var_3;
            }
        }
        for (short i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            arr_22 [i_0] [(_Bool)0] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)83))));
            /* LoopSeq 2 */
            for (signed char i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 2; i_8 < 18; i_8 += 1) 
                {
                    for (unsigned char i_9 = 1; i_9 < 20; i_9 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-45))))), (4180048824U)))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (short)28672))))))) : (((/* implicit */int) arr_30 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0])))))));
                            arr_32 [i_0] [i_6] [i_8 + 1] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) << (((((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_8 + 1])) + (16610)))))) ? (((/* implicit */int) arr_10 [i_0 + 3] [i_0 + 3] [i_8 + 3])) : (((/* implicit */int) max((arr_10 [i_0 + 2] [i_0 + 1] [i_8 + 1]), (arr_10 [i_0 + 2] [i_0 + 2] [i_8 + 2]))))));
                            var_30 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)77))) : (min((var_5), (((/* implicit */long long int) (_Bool)1)))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) -7870881708034691610LL)) ? (((((/* implicit */_Bool) 2305772640469516288LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_7 [i_0] [i_0] [i_0] [i_0] [i_7] [i_9]))) : ((-(arr_25 [i_0] [i_6] [i_7]))))))));
                        }
                    } 
                } 
                arr_33 [i_0] [i_6] [i_0] = ((/* implicit */unsigned short) ((arr_30 [i_6] [i_6] [i_7] [i_0] [i_7] [i_7] [i_6]) ? (((/* implicit */int) min((arr_27 [i_0 + 3] [i_7]), (((/* implicit */unsigned char) var_2))))) : (((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)25))))));
            }
            for (signed char i_10 = 0; i_10 < 21; i_10 += 1) 
            {
                var_31 -= ((/* implicit */unsigned char) arr_26 [i_0] [i_0] [i_0] [i_0 + 2] [i_0 + 3] [i_0 + 1]);
                arr_37 [i_10] [i_6] [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_7 [i_0 + 3] [i_6] [(_Bool)1] [i_0 + 3] [i_6] [i_10])) ? (((((/* implicit */_Bool) (short)15334)) ? (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_6] [i_6] [i_6] [i_10])) : (-8948879360532487183LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0 + 3]))))), (((/* implicit */long long int) var_1))));
                var_32 = ((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) arr_36 [i_0 - 1] [i_0 + 2] [i_0] [i_0 - 1])))), ((+(((/* implicit */int) arr_36 [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_11 = 0; i_11 < 21; i_11 += 1) /* same iter space */
            {
                var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) (short)-4039))));
                var_34 = ((/* implicit */unsigned char) max((var_34), (var_10)));
                /* LoopSeq 2 */
                for (unsigned short i_12 = 3; i_12 < 20; i_12 += 4) 
                {
                    var_35 -= ((/* implicit */signed char) arr_41 [i_0] [i_6] [i_11] [i_12 - 1]);
                    var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_12] [i_11] [i_6] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_12 [i_0 + 1] [i_11] [i_11] [i_0 + 1] [i_12 + 1] [i_0] [8ULL])));
                }
                for (unsigned char i_13 = 0; i_13 < 21; i_13 += 2) 
                {
                    var_37 = ((/* implicit */long long int) (+(arr_35 [i_0 + 2])));
                    arr_46 [i_11] [i_11] [i_11] = ((/* implicit */short) ((unsigned char) 66060288));
                }
                arr_47 [i_0 + 2] [i_11] [i_0 + 2] [i_11] = ((/* implicit */_Bool) ((short) arr_43 [(_Bool)1] [(short)16] [i_11] [i_0 + 1] [i_11]));
            }
            for (long long int i_14 = 0; i_14 < 21; i_14 += 1) /* same iter space */
            {
                var_38 = ((/* implicit */_Bool) min((var_38), (var_3)));
                arr_51 [i_14] [i_6] [i_14] [i_14] &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_35 [i_0 - 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_38 [i_0 - 1] [i_0 + 2] [i_0 + 1])))) ^ (min((((/* implicit */int) var_8)), (arr_44 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1])))));
            }
            arr_52 [i_0 + 1] &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_28 [i_0] [i_0 - 1])) && (((/* implicit */_Bool) arr_28 [(unsigned char)16] [i_0 - 1])))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_18 [i_6])) ? (((/* implicit */int) (unsigned short)42492)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_14))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_15 = 1; i_15 < 8; i_15 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_16 = 0; i_16 < 11; i_16 += 3) 
        {
            var_39 = ((/* implicit */unsigned long long int) min((var_39), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) (unsigned short)46026)) : (((/* implicit */int) (signed char)-64))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_13)))))));
            arr_60 [(unsigned char)0] &= ((/* implicit */int) (!((_Bool)1)));
            var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)201)) * (((/* implicit */int) arr_43 [3LL] [i_16] [i_15] [i_15 + 3] [3LL]))))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) (short)-4039)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)32)))))))));
        }
        var_41 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_15] [i_15 + 1] [i_15] [i_15] [i_15])) ? (12828814046334160276ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((long long int) (unsigned char)64)) : (((/* implicit */long long int) 33521664))));
        arr_61 [i_15] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_15 - 1] [i_15 + 3] [i_15 + 2] [(short)10] [i_15] [i_15])) ? (arr_44 [i_15] [i_15] [i_15 + 3] [i_15 - 1]) : (((/* implicit */int) (signed char)0))));
        var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [i_15 + 3] [i_15 + 1] [i_15 + 1])))))));
        var_43 = ((/* implicit */int) (unsigned char)190);
    }
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        var_44 ^= ((/* implicit */short) 17592186040320LL);
        arr_65 [i_17] [(unsigned char)0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-32)) ? (arr_63 [i_17]) : (((/* implicit */long long int) ((/* implicit */int) arr_62 [(short)8])))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)0))))) : (min((((/* implicit */long long int) (short)4088)), (arr_63 [i_17])))))) ? (((/* implicit */int) (unsigned char)250)) : (((((/* implicit */_Bool) (unsigned char)190)) ? (((/* implicit */int) (short)4038)) : (((/* implicit */int) (unsigned char)234))))));
    }
    for (unsigned short i_18 = 0; i_18 < 21; i_18 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_19 = 0; i_19 < 21; i_19 += 3) 
        {
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                {
                    var_45 = ((/* implicit */long long int) max(((~(arr_8 [i_20]))), (((((/* implicit */_Bool) arr_8 [i_20])) ? (arr_8 [i_20]) : (arr_8 [i_20])))));
                    var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) arr_6 [i_18] [i_19] [i_20]))));
                    var_47 ^= ((/* implicit */unsigned char) 2135594997U);
                }
            } 
        } 
        var_48 = ((((((/* implicit */_Bool) arr_2 [i_18])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) - (((/* implicit */long long int) (+(((((/* implicit */_Bool) 4194303)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)28))))))));
    }
}
