/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25475
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
    var_18 *= ((/* implicit */unsigned char) var_8);
    var_19 = ((/* implicit */unsigned short) (+(((((((/* implicit */int) var_16)) << (((((/* implicit */int) var_8)) + (59))))) >> (((/* implicit */int) var_7))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) min((((unsigned long long int) 5392276606499886792ULL)), (((/* implicit */unsigned long long int) (+(3758096384U))))));
        var_20 = ((((/* implicit */long long int) (+(((/* implicit */int) max((var_0), (((/* implicit */short) (signed char)-6)))))))) >= (-6030527445230647226LL));
        var_21 = ((/* implicit */signed char) min(((~(((/* implicit */int) min(((unsigned short)2960), (((/* implicit */unsigned short) var_3))))))), ((+(((/* implicit */int) arr_2 [i_0] [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 24; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        var_22 *= ((/* implicit */signed char) var_13);
                        arr_12 [i_0] = ((/* implicit */long long int) ((signed char) min((903861279), (((/* implicit */int) (unsigned short)17767)))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        var_23 *= ((/* implicit */unsigned short) ((unsigned char) arr_7 [(short)16] [i_4] [i_4] [i_4]));
        arr_17 [i_4] |= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [(unsigned char)7] [i_4])) % (903861279)))) && (((/* implicit */_Bool) 903861279)))) ? (((((/* implicit */_Bool) ((signed char) 903861290))) ? ((+(((/* implicit */int) arr_13 [i_4])))) : (arr_6 [i_4] [(short)12] [(unsigned short)24] [(unsigned short)24]))) : (min((((/* implicit */int) ((-903861297) > (-903861297)))), (903861303)))));
        var_24 -= ((/* implicit */unsigned char) arr_4 [i_4] [(unsigned char)8] [16LL]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            /* LoopSeq 4 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                arr_25 [i_6] [i_6] [i_5] [i_4] = ((6170547938481392276ULL) == (((/* implicit */unsigned long long int) 903861290)));
                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) -903861291)) ? (-903861296) : (-903861283))))));
                arr_26 [i_4] [i_6 - 1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_4] [24LL] [i_6]))));
                arr_27 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12276196135228159348ULL)) ? (((/* implicit */int) arr_5 [9] [i_5] [i_6 - 1])) : (((/* implicit */int) var_2))));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_31 [i_4] = ((/* implicit */int) arr_7 [(short)9] [i_5] [20ULL] [i_7]);
                arr_32 [i_4] [i_7] [i_7] [i_4] |= ((/* implicit */unsigned short) var_13);
                var_26 = ((/* implicit */unsigned long long int) (~(arr_28 [i_4] [(unsigned short)11] [i_7] [i_4])));
            }
            for (int i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 3; i_9 < 22; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_40 [i_4] [12] [(unsigned short)18] [i_8] [i_10] &= ((/* implicit */signed char) ((((/* implicit */_Bool) 6170547938481392276ULL)) || (((/* implicit */_Bool) arr_39 [i_5] [i_8] [i_9] [i_10]))));
                            arr_41 [i_9] [16LL] [i_8] = ((/* implicit */signed char) ((int) arr_37 [i_9] [i_9]));
                            var_27 = 903861296;
                            arr_42 [i_10] [i_8] [i_8] [i_8] [i_4] &= ((/* implicit */_Bool) (((+(arr_37 [i_4] [i_8]))) >> ((-(18446744073709551615ULL)))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */_Bool) (signed char)-64);
                var_29 *= ((/* implicit */short) ((((/* implicit */int) arr_19 [i_4] [i_5] [i_8])) <= (((((/* implicit */_Bool) 140737488355327LL)) ? (((/* implicit */int) (_Bool)1)) : (arr_6 [i_4] [i_5] [i_5] [i_4])))));
            }
            for (signed char i_11 = 1; i_11 < 22; i_11 += 3) 
            {
                arr_46 [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_4] [i_4])) ? (arr_20 [i_11] [i_5]) : (arr_20 [i_4] [i_5])));
                arr_47 [8ULL] [12ULL] &= ((/* implicit */unsigned char) (signed char)-68);
            }
            var_30 ^= ((((/* implicit */_Bool) arr_29 [i_4] [(unsigned char)11] [i_4])) ? (arr_37 [i_5] [20ULL]) : (((((/* implicit */_Bool) arr_38 [i_4] [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) arr_8 [(signed char)2] [i_5] [i_5])) : (6170547938481392268ULL))));
        }
        /* vectorizable */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_50 [i_4] [i_4] [0U] = ((/* implicit */unsigned long long int) (!(arr_0 [i_4])));
            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (signed char)-8))));
        }
        for (short i_13 = 0; i_13 < 23; i_13 += 1) 
        {
            arr_54 [11U] [11U] [i_13] = ((/* implicit */unsigned short) (~(903861286)));
            arr_55 [i_4] [i_13] |= ((/* implicit */long long int) var_8);
            arr_56 [i_4] [i_4] = ((/* implicit */signed char) ((((unsigned long long int) arr_39 [i_4] [13ULL] [i_13] [(signed char)19])) / (((unsigned long long int) (+(var_14))))));
        }
        var_32 -= ((/* implicit */short) min((arr_51 [i_4] [i_4]), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 903861296)) ? (6170547938481392276ULL) : (((/* implicit */unsigned long long int) var_9)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((903861279) != (((/* implicit */int) var_3)))))))))));
    }
    for (unsigned short i_14 = 2; i_14 < 20; i_14 += 2) 
    {
        var_33 = ((/* implicit */unsigned short) ((min(((~(var_1))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)50)) ? (-903861297) : (903861300)))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_14 + 3] [i_14] [i_14 + 3])) ? (((/* implicit */int) arr_16 [i_14 + 3])) : (((/* implicit */int) (unsigned char)121)))))));
        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((arr_7 [10] [i_14] [(unsigned char)3] [i_14 - 2]) << (((max((3932160U), (((/* implicit */unsigned int) arr_0 [i_14 + 3])))) - (3932133U))))))));
        arr_59 [i_14] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_14] [i_14])) ? (((((/* implicit */_Bool) arr_38 [i_14] [i_14] [i_14] [i_14] [i_14])) ? (((/* implicit */unsigned long long int) arr_8 [i_14] [i_14] [i_14])) : (arr_22 [(signed char)6] [i_14 + 1] [i_14]))) : (max((arr_37 [i_14] [i_14]), (((/* implicit */unsigned long long int) 4291035113U))))))));
    }
}
