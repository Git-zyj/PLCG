/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53601
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
    var_11 |= ((/* implicit */unsigned short) ((var_8) << (((var_2) - (3890444013U)))));
    var_12 *= ((/* implicit */int) (!(((/* implicit */_Bool) var_8))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                for (unsigned int i_3 = 2; i_3 < 8; i_3 += 4) 
                {
                    {
                        arr_9 [i_3] [i_2] [i_1] [i_0] [i_3] [i_3] |= ((/* implicit */int) ((unsigned long long int) 13941475608082528984ULL));
                        arr_10 [i_2] = ((/* implicit */int) ((unsigned int) (+(((/* implicit */int) (unsigned short)31408)))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(4369988190352415640ULL)))) ? ((~(4369988190352415628ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)108))) % (((unsigned int) -8851627539874544790LL))))) ? (((/* implicit */int) ((short) min((-1623732760), (((/* implicit */int) (short)27864)))))) : (((((/* implicit */int) arr_18 [i_4] [i_5])) + (((/* implicit */int) arr_0 [i_0]))))));
                        arr_19 [i_0] [i_4] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-27865)) ? (arr_17 [i_0] [i_4] [i_5] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5])))))))))) ^ (min((11635368355154092532ULL), ((~(var_8)))))));
                        arr_20 [i_0] [i_4] [i_5] [i_6] = ((/* implicit */signed char) (-(min((16U), (((/* implicit */unsigned int) 1145633653))))));
                        arr_21 [i_5] [i_5] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) var_3)), (3677735264U))), ((+(3049108438U)))))) ? (((((/* implicit */_Bool) 1984275319896285400ULL)) ? ((+(-8851627539874544806LL))) : (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)255)))))));
                    }
                    arr_22 [i_5] [i_5] = ((/* implicit */unsigned int) arr_1 [i_5]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_24 [i_7]))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */int) arr_24 [i_7])) * ((+(((/* implicit */int) var_4))))));
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 23; i_8 += 2) 
        {
            for (unsigned char i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                {
                    arr_32 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_10) >> (((3138129103211812260ULL) - (3138129103211812233ULL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_7])) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (unsigned short)61562))))) : (0LL)));
                    var_16 = ((/* implicit */unsigned long long int) ((var_1) << (((((/* implicit */int) arr_23 [i_8])) + (116)))));
                }
            } 
        } 
    }
    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 1; i_11 < 22; i_11 += 3) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 1) 
                    {
                        var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_36 [i_10] [i_10] [i_10])) | (((/* implicit */int) (signed char)8))));
                        var_18 = ((/* implicit */short) var_2);
                    }
                    for (unsigned int i_14 = 0; i_14 < 23; i_14 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_15 = 0; i_15 < 23; i_15 += 3) 
                        {
                            arr_47 [i_10] [i_11] [i_15] [i_14] [i_15] = ((/* implicit */unsigned char) var_2);
                            arr_48 [i_10] [i_11] [i_15] [i_15] [i_15] = ((/* implicit */signed char) (~(((int) (unsigned short)51852))));
                            var_19 = ((/* implicit */unsigned char) ((var_7) & (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)32298)))))));
                        }
                        arr_49 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
                        var_20 ^= ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
                    }
                    var_21 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (short)32764)))) / (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_43 [i_11 - 1] [i_11 - 1])))))));
                    arr_50 [16] [i_11 - 1] [i_11] [i_10] = var_9;
                    arr_51 [i_12] = ((((/* implicit */_Bool) (+((+(9059142050590902944ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_46 [6ULL] [i_11 - 1] [i_12] [i_12] [i_10])), (var_9))))) : (((unsigned long long int) 14648081088735027160ULL)));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (+(arr_30 [i_10] [i_10] [i_10] [(unsigned char)12]))))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_26 [i_10])))))));
        arr_52 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) ((unsigned char) var_1)))) | (((/* implicit */int) (unsigned char)14))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_39 [i_10] [i_10])));
        arr_53 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (213549489U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-14411)))));
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 17; i_16 += 2) 
    {
        for (long long int i_17 = 4; i_17 < 16; i_17 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_18 = 0; i_18 < 17; i_18 += 3) 
                {
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)32750))) != (-1LL)));
                    arr_60 [i_16] [i_17] [i_18] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_46 [i_18] [i_18] [i_18] [i_18] [i_18])) & ((~(((/* implicit */int) (unsigned char)25))))));
                    var_25 = ((/* implicit */int) max((var_25), (((((/* implicit */int) var_3)) % (((/* implicit */int) arr_37 [i_17 - 3] [i_17 - 4] [i_17 - 3]))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_19 = 1; i_19 < 14; i_19 += 2) /* same iter space */
                    {
                        arr_63 [i_16] [i_16] [i_18] [i_18] [i_16] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_23 [i_17 - 1])) + (2147483647))) >> (((((/* implicit */int) (unsigned short)26949)) - (26927)))));
                        /* LoopSeq 2 */
                        for (long long int i_20 = 1; i_20 < 15; i_20 += 2) /* same iter space */
                        {
                            arr_67 [i_17] [i_17] [i_18] |= (+(((/* implicit */int) arr_59 [i_17 - 3] [i_19 + 3] [i_20 - 1] [i_20 - 1])));
                            arr_68 [i_16] [4ULL] [i_18] [i_19 - 1] [i_20] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2053961456678665465LL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_4))))) && (((/* implicit */_Bool) var_0))));
                            arr_69 [i_16] [i_16] [i_17 - 1] [i_18] [i_17 - 1] [i_19 + 1] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)230)) < (1023)));
                            var_26 = (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)38))) <= (9223372036854775807LL)))));
                        }
                        for (long long int i_21 = 1; i_21 < 15; i_21 += 2) /* same iter space */
                        {
                            arr_72 [i_21] [i_21] [i_19] [i_18] [i_18] [i_16] [i_16] = ((((/* implicit */_Bool) 81362686248577347ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 9059142050590902932ULL)))))) : (((((/* implicit */_Bool) 6658129152285646126ULL)) ? (2365254890U) : (((/* implicit */unsigned int) 524286)))));
                            arr_73 [i_16] [i_18] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 312915474606255695ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4781))) : (9223372036854775791LL)))) ? (((/* implicit */int) arr_42 [i_21 + 1] [i_21 + 1] [i_21 + 2] [i_21 + 1])) : (((((/* implicit */_Bool) (unsigned short)21021)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)71))))));
                        }
                    }
                    for (unsigned long long int i_22 = 1; i_22 < 14; i_22 += 2) /* same iter space */
                    {
                        arr_76 [i_18] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */unsigned char) ((long long int) arr_38 [i_16] [19ULL] [i_16]));
                        arr_77 [i_16] [i_18] [i_16] [i_22 + 3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)71)) ? (((/* implicit */int) (unsigned short)16217)) : (1522100516))) % (((((/* implicit */_Bool) 9223372036854775793LL)) ? (1226862536) : (arr_45 [i_18])))));
                        arr_78 [i_22] [i_22] [i_18] [i_16] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) 9223372036854775793LL))) ? (((unsigned long long int) (short)21558)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_18] [i_17] [i_17] [i_22 + 2] [i_22])))));
                    }
                    for (unsigned long long int i_23 = 1; i_23 < 14; i_23 += 2) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned char) (~((~(9223372036854775807LL)))));
                        arr_81 [(short)14] [i_23] [i_18] [i_17] |= ((/* implicit */unsigned int) var_8);
                    }
                }
                /* vectorizable */
                for (int i_24 = 1; i_24 < 15; i_24 += 1) 
                {
                    var_28 ^= ((((/* implicit */int) (unsigned short)16200)) ^ (((/* implicit */int) (unsigned short)49832)));
                    var_29 = ((/* implicit */int) min((var_29), ((~(((/* implicit */int) (unsigned char)184))))));
                    var_30 = ((/* implicit */unsigned long long int) arr_29 [i_16] [i_24 + 2] [i_17 - 4]);
                }
                arr_84 [i_16] [i_16] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_40 [i_17 - 3] [i_17 - 4] [i_17 - 1] [i_17 + 1]))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((unsigned short) (_Bool)1)))));
                var_31 = ((/* implicit */int) -3235387873082878287LL);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_25 = 0; i_25 < 14; i_25 += 2) 
    {
        for (unsigned long long int i_26 = 0; i_26 < 14; i_26 += 1) 
        {
            {
                var_32 = ((/* implicit */long long int) (((~(var_5))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)26119), (((/* implicit */short) (signed char)11))))))));
                var_33 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) min((arr_24 [i_25]), (var_9)))))), (min((1460028045), (((/* implicit */int) arr_44 [i_25] [(short)6]))))));
                arr_90 [i_26] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) 4294967295U))) ? (((/* implicit */int) (unsigned char)170)) : ((-(((/* implicit */int) (unsigned short)65535))))))), (arr_62 [i_25] [i_26] [i_25] [i_25])));
                arr_91 [i_26] [i_26] = ((/* implicit */unsigned char) (~(296076888)));
            }
        } 
    } 
}
