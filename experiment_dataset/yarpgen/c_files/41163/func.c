/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41163
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
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 1) /* same iter space */
    {
        var_19 *= ((/* implicit */signed char) (-(max((max((((/* implicit */unsigned long long int) 219533194)), (18446744073709551609ULL))), (((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_0]))))));
        var_20 ^= ((/* implicit */signed char) 0);
    }
    for (long long int i_1 = 2; i_1 < 19; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 2; i_2 < 18; i_2 += 4) 
        {
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) -62856906)) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_4 [i_2])))))));
            var_22 = ((/* implicit */unsigned int) ((((_Bool) (unsigned short)62674)) ? (((((/* implicit */_Bool) 134217727U)) ? (((/* implicit */unsigned long long int) 1920962959U)) : (18446744073709551613ULL))) : (((/* implicit */unsigned long long int) arr_2 [i_2 + 1]))));
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) arr_8 [i_1] [i_2]))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_3 = 1; i_3 < 16; i_3 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_4 = 2; i_4 < 19; i_4 += 2) 
            {
                arr_15 [i_1] [i_3 + 3] [i_3] [i_3 + 1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_14 [i_1] [i_1])) : (((/* implicit */int) var_11))))));
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    arr_18 [i_1] [i_1] [i_4 + 1] [i_5] [i_1] = ((/* implicit */int) (-(((((/* implicit */_Bool) -219533186)) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_24 += ((/* implicit */long long int) 1070405460U);
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned int) var_16);
                    var_26 = ((/* implicit */unsigned short) (unsigned char)253);
                    var_27 |= ((/* implicit */long long int) (+(((/* implicit */int) var_7))));
                    var_28 = ((/* implicit */int) min((var_28), (((((/* implicit */_Bool) -1451595364592139888LL)) ? (((((/* implicit */int) (signed char)4)) << (7ULL))) : (((/* implicit */int) arr_13 [i_1 - 2] [i_3] [i_3]))))));
                }
            }
            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 219533185)) && (((/* implicit */_Bool) arr_2 [i_1])))))));
        }
        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            var_30 += ((/* implicit */unsigned long long int) 62856905);
            var_31 = ((/* implicit */int) min((var_31), (((((/* implicit */_Bool) min((((/* implicit */int) min(((unsigned short)65527), (((/* implicit */unsigned short) var_16))))), ((-(-296821191)))))) ? (((((/* implicit */_Bool) var_18)) ? ((+(((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_7] [(unsigned short)0])))) : (-219533191))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_1])) != (((/* implicit */int) max(((unsigned short)62663), (((/* implicit */unsigned short) var_7))))))))))));
        }
        /* LoopSeq 3 */
        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 4) /* same iter space */
        {
            arr_27 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_1] [i_8] [i_1 + 1] [7U])) ? (((/* implicit */int) (short)8191)) : (arr_7 [i_1])));
            /* LoopNest 3 */
            for (unsigned long long int i_9 = 3; i_9 < 16; i_9 += 1) 
            {
                for (int i_10 = 0; i_10 < 20; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 3; i_11 < 18; i_11 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)17342))));
                            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) (unsigned short)65314))));
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */long long int) min((arr_20 [4LL] [i_8] [i_9 + 3] [i_10] [i_1] [i_9]), (arr_20 [i_1] [i_8] [i_9 - 1] [i_9 - 1] [i_1] [(_Bool)0])))) | (var_10)));
                            var_35 = ((/* implicit */long long int) 4124982288U);
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_12 = 0; i_12 < 20; i_12 += 4) /* same iter space */
        {
            var_36 = ((/* implicit */unsigned int) (((_Bool)1) ? (((((/* implicit */_Bool) var_15)) ? ((-(((/* implicit */int) arr_19 [i_1] [i_12])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [(_Bool)1] [i_12]))))))) : ((~(((/* implicit */int) arr_31 [i_1 - 1] [i_12] [i_12] [i_12]))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_13 = 2; i_13 < 17; i_13 += 4) 
            {
                var_37 = (~(var_13));
                arr_43 [i_1] [i_12] [(short)2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)17342))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_17 [i_13] [i_13] [i_13] [(_Bool)1])))))));
            }
            var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) max((((/* implicit */long long int) (_Bool)1)), ((+(max((arr_32 [i_1] [i_1 - 2] [i_1 - 2] [i_12] [i_1 - 2]), (((/* implicit */long long int) var_14)))))))))));
            arr_44 [i_1] [10LL] [i_12] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_13 [i_1 - 1] [i_1 - 1] [i_1 + 1]))) ? (((((/* implicit */_Bool) arr_13 [i_1 + 1] [i_1 - 2] [i_1 - 2])) ? (((/* implicit */int) arr_13 [i_1 - 2] [i_1 + 1] [i_1 - 2])) : (-62856907))) : (((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) arr_13 [i_1 - 2] [i_1 - 2] [i_1 + 1]))))));
            var_39 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_37 [i_1] [i_1])) ? (169985007U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48209))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_6)), ((unsigned char)22))))))), (min((((((/* implicit */_Bool) -188725332)) ? (var_3) : (((/* implicit */unsigned long long int) 2849988507U)))), (((/* implicit */unsigned long long int) 135553511))))));
        }
        for (int i_14 = 2; i_14 < 17; i_14 += 4) 
        {
            arr_47 [i_1] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (-(4179691609U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_2)), ((unsigned short)17340))))) : (max((arr_24 [(_Bool)1] [i_1]), (((/* implicit */unsigned int) arr_26 [i_1] [6LL] [6LL]))))))), (arr_0 [i_1 - 2])));
            var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) max((((/* implicit */short) (signed char)122)), (min(((short)32751), (((/* implicit */short) arr_38 [i_1])))))))));
        }
    }
    var_41 = var_15;
    var_42 &= ((/* implicit */unsigned int) var_10);
    /* LoopSeq 1 */
    for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 2) 
    {
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 11; i_16 += 4) 
        {
            for (short i_17 = 2; i_17 < 10; i_17 += 2) 
            {
                {
                    arr_58 [i_15] [i_16] [i_16] [i_15] = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((-62856923), (-1340123014)))), (arr_2 [i_17 + 1])));
                    /* LoopSeq 1 */
                    for (long long int i_18 = 1; i_18 < 10; i_18 += 1) 
                    {
                        arr_62 [i_15] [i_15] [i_17 + 1] [i_18] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_1)), (arr_48 [i_16] [i_17 - 2]))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)-122)), (-6385308753255662950LL))))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (max((arr_25 [i_15] [i_17 - 1]), (((/* implicit */unsigned short) (signed char)-106))))))) : ((-(((((/* implicit */int) (signed char)33)) + (((/* implicit */int) var_2))))))));
                        /* LoopSeq 1 */
                        for (short i_19 = 2; i_19 < 9; i_19 += 4) 
                        {
                            var_43 -= ((/* implicit */long long int) (((!(((/* implicit */_Bool) 4124982294U)))) ? (((((var_4) - (((/* implicit */unsigned long long int) 3091278497343835604LL)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_16] [i_16]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9435)))));
                            var_44 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((3355336691U), (2186439301U))))));
                            var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) max((var_5), (0LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [18ULL] [i_19] [i_16] [i_17] [i_15] [i_17 - 1])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))))) <= (-188725338)));
                            var_46 |= ((/* implicit */long long int) min((((((((/* implicit */int) var_9)) >= (((/* implicit */int) arr_12 [i_16] [i_17])))) ? ((~(15513646360972740222ULL))) : (((/* implicit */unsigned long long int) (-(7208500799938524394LL)))))), (((/* implicit */unsigned long long int) max(((-(-1LL))), (arr_23 [i_19]))))));
                        }
                    }
                }
            } 
        } 
        var_47 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (short)-32054)), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_15] [i_15] [10] [i_15] [i_15])) ? (188725325) : (((/* implicit */int) arr_55 [(unsigned short)10] [0LL] [i_15]))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_15] [i_15] [i_15]))) : (var_4)))))));
        arr_65 [i_15] = arr_11 [i_15] [i_15];
        arr_66 [i_15] [i_15] &= max((((long long int) (+(((/* implicit */int) var_14))))), (((/* implicit */long long int) ((((/* implicit */_Bool) -7197863996605580207LL)) ? (((6) - (((/* implicit */int) arr_33 [i_15] [i_15] [i_15] [i_15])))) : ((-(arr_34 [i_15] [i_15] [(_Bool)1] [19] [(_Bool)1])))))));
    }
}
