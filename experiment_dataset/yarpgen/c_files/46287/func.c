/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46287
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_14 += ((/* implicit */signed char) ((7607805938368974595LL) >> (((((/* implicit */int) arr_1 [7])) - (32584)))));
        /* LoopNest 2 */
        for (long long int i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_15 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(var_10))))));
                    var_16 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [(unsigned char)2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : ((~(var_11)))));
                    var_17 ^= (-(var_13));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        var_18 -= ((/* implicit */unsigned short) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_5))) == (((/* implicit */long long int) ((var_0) ^ (((/* implicit */int) (unsigned short)32998)))))));
                        var_19 ^= ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) (unsigned short)56985)))));
                    }
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned char) var_8);
        arr_10 [i_0] [i_0] = ((/* implicit */signed char) ((((unsigned long long int) (short)32751)) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((-529694829878767729LL) == (var_5)))))));
        var_21 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) || (((/* implicit */_Bool) var_8))));
    }
    for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 4) 
    {
        /* LoopSeq 4 */
        for (int i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            var_22 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 16U)) : (min((((/* implicit */unsigned long long int) -1834894831)), (arr_2 [i_4 + 2] [i_5] [i_4])))));
            arr_16 [i_4] = ((/* implicit */unsigned char) ((int) var_4));
        }
        for (int i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            arr_21 [i_4] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)36331)) : (((/* implicit */int) (signed char)114)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)220))) < (arr_7 [i_4])))))))));
            var_23 *= ((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-92)));
        }
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_4])))))));
            var_25 = var_13;
        }
        for (unsigned long long int i_8 = 2; i_8 < 24; i_8 += 3) 
        {
            var_26 = ((/* implicit */int) (!(((((((/* implicit */_Bool) 7537112847167341014LL)) ? (((/* implicit */long long int) -1552419028)) : (var_5))) != (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)474)))))))));
            arr_30 [20] [i_8 - 1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned short) (-9223372036854775807LL - 1LL)))), (((((/* implicit */unsigned long long int) var_7)) + (var_13)))));
            arr_31 [(short)16] [10ULL] = (unsigned short)29859;
            arr_32 [i_4] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) min((1107396346), (((/* implicit */int) (short)-29620))))) ? ((~(var_0))) : ((~(((/* implicit */int) var_2))))))));
        }
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 3) 
            {
                {
                    arr_38 [i_4] [7LL] [5U] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) arr_20 [i_4 + 1])), (var_7))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)66)))))));
                    arr_39 [i_10] [i_10] = ((/* implicit */int) 6678425850389387011ULL);
                    arr_40 [i_4] [i_4] [i_10] [(unsigned short)16] = ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_4))) << (((5415037346182075633ULL) - (5415037346182075617ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) max((((/* implicit */short) var_12)), (var_2)))), ((unsigned short)40932))))) : (min((((unsigned long long int) (unsigned short)28699)), (((/* implicit */unsigned long long int) min((0U), (((/* implicit */unsigned int) var_0))))))));
                    arr_41 [i_4] [i_9] [i_9] [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((var_11) << (((((/* implicit */int) var_1)) - (8764))))) >> (((((long long int) var_2)) + (3352LL))))))));
                    arr_42 [i_4] = ((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)7176))))) : (min((18014398509481983ULL), (arr_6 [i_4] [i_9] [i_10]))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 3) 
        {
            arr_46 [i_4] [i_11] [i_4] |= ((/* implicit */int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) var_8)), (3328800303U))), (((/* implicit */unsigned int) max((1046184743), (((/* implicit */int) (unsigned char)72)))))))) ? (max((((/* implicit */unsigned long long int) ((int) (unsigned short)0))), (3748241366505464340ULL))) : (((/* implicit */unsigned long long int) arr_15 [i_11]))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_12 = 2; i_12 < 24; i_12 += 3) 
            {
                var_27 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (short)26681))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_45 [i_11] [i_4]))))) : (((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_11)))));
                var_28 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_4 + 1] [10U] [i_12 - 2] [4LL])) ? (((/* implicit */int) (signed char)71)) : (((/* implicit */int) arr_11 [i_4 - 1]))));
            }
            for (int i_13 = 1; i_13 < 21; i_13 += 2) 
            {
                arr_51 [i_13] = ((/* implicit */unsigned char) var_8);
                arr_52 [(signed char)2] [i_13] [i_13] [i_4] = ((/* implicit */_Bool) (~(var_5)));
                arr_53 [i_13] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))));
                var_29 = (unsigned short)38509;
                var_30 += ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) arr_1 [i_13 - 1])))));
            }
        }
        var_31 = ((((5093305927409850918ULL) % (arr_0 [i_4]))) >> (((((((/* implicit */int) (unsigned short)37237)) << (((((/* implicit */int) (unsigned short)12365)) - (12359))))) - (2383114))));
    }
    for (signed char i_14 = 0; i_14 < 24; i_14 += 3) 
    {
        arr_58 [i_14] [i_14] &= ((/* implicit */_Bool) var_11);
        /* LoopSeq 2 */
        for (unsigned short i_15 = 0; i_15 < 24; i_15 += 2) 
        {
            var_32 = ((/* implicit */unsigned char) ((4662963897498956170ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3377)))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_16 = 2; i_16 < 23; i_16 += 3) 
            {
                var_33 &= ((((_Bool) arr_50 [i_14] [i_15] [i_16] [i_15])) ? (var_0) : (((/* implicit */int) var_6)));
                arr_63 [i_14] [i_16] [(unsigned short)6] = ((/* implicit */_Bool) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_8))));
                var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_50 [i_16 - 2] [i_16] [i_16 - 1] [i_16 - 2]))));
                /* LoopNest 2 */
                for (unsigned short i_17 = 1; i_17 < 21; i_17 += 2) 
                {
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                    {
                        {
                            var_35 *= ((((/* implicit */_Bool) 4294967285U)) ? (var_7) : (((/* implicit */unsigned int) arr_8 [i_18 - 1] [i_17] [i_17 + 3] [i_14])));
                            arr_68 [i_14] [i_15] [i_16] = ((unsigned short) arr_27 [(_Bool)0] [i_16 - 1] [(_Bool)0]);
                            var_36 = ((/* implicit */long long int) (+(((/* implicit */int) var_1))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 2) 
            {
                var_37 += ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) | (((/* implicit */int) (unsigned char)29))));
                var_38 -= ((/* implicit */_Bool) var_0);
                var_39 = ((/* implicit */unsigned short) (+(var_5)));
                arr_72 [(signed char)4] [19LL] [19LL] = ((/* implicit */int) ((6692232019905295681ULL) >> (((((/* implicit */int) (unsigned short)6804)) - (6791)))));
            }
            var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-70))) == (max((var_5), (((/* implicit */long long int) var_7)))))))) >= (arr_36 [i_14] [i_14] [i_14] [i_15])));
        }
        /* vectorizable */
        for (unsigned long long int i_20 = 0; i_20 < 24; i_20 += 3) 
        {
            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) ^ (var_5)));
            arr_75 [(signed char)17] = ((/* implicit */short) arr_3 [i_20]);
            arr_76 [i_20] [i_14] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) arr_15 [i_14])) ^ (var_7))) >> (((((/* implicit */int) var_12)) + (134)))));
            arr_77 [i_14] [i_14] [i_20] = ((/* implicit */_Bool) 3225718311U);
            var_42 ^= ((((/* implicit */unsigned long long int) ((unsigned int) var_13))) | (4403307980333022230ULL));
        }
        arr_78 [i_14] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0))))) != (((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_67 [i_14] [i_14] [(unsigned char)14] [13] [i_14] [i_14]))))))) - (min((((long long int) var_7)), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)255)) | (((/* implicit */int) var_12)))))))));
    }
    var_43 |= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65535))));
    var_44 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((_Bool) (-(((/* implicit */int) var_8)))))), (((unsigned short) var_2))));
    var_45 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < (var_7)))) & (((/* implicit */int) max(((unsigned short)4339), (((/* implicit */unsigned short) (signed char)84)))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))));
}
