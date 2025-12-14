/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234810
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
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (signed char i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                arr_7 [(unsigned short)7] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((short) (signed char)121));
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (short i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        {
                            arr_12 [i_0] [(unsigned short)7] [i_0] [i_0 + 3] [i_0 + 2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
                            var_20 &= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_2))))) - (((/* implicit */int) ((signed char) var_19)))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)3081)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
            }
            for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                var_22 = ((/* implicit */_Bool) arr_11 [i_0] [i_0 + 1]);
                arr_16 [i_0] [(unsigned char)9] [i_0] [i_5] = ((/* implicit */signed char) var_3);
            }
            var_23 ^= ((/* implicit */unsigned long long int) var_7);
        }
        for (short i_6 = 2; i_6 < 9; i_6 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_7 = 0; i_7 < 11; i_7 += 3) 
            {
                arr_25 [8ULL] [i_6] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) arr_23 [i_0] [i_6] [i_0] [i_7])) : (((/* implicit */int) var_5)))) | (((/* implicit */int) (_Bool)1))));
                var_24 = ((unsigned int) var_16);
            }
            for (short i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 11; i_9 += 1) 
                {
                    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        {
                            var_25 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_10] [i_6 - 1])) ? (((/* implicit */int) (short)22064)) : (((/* implicit */int) (short)-22074))));
                            var_26 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) arr_22 [i_6 + 1] [i_6 + 1] [i_6 - 2] [i_6 - 1])) : (((/* implicit */int) (unsigned char)220))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                var_28 *= ((/* implicit */signed char) (!(((((/* implicit */_Bool) var_9)) || (var_8)))));
                /* LoopSeq 1 */
                for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 2) 
                {
                    arr_37 [i_0] [i_0] [i_0] [(unsigned char)2] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-22037)) ? (-1415205671) : (((/* implicit */int) (signed char)-89))));
                    var_29 = ((/* implicit */short) max((var_29), ((short)15362)));
                }
            }
            var_30 &= (((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)27083)) != (((/* implicit */int) var_15))))) : (((/* implicit */int) var_0)));
            arr_38 [i_0] [0U] [i_6 - 1] = ((/* implicit */short) (!(var_8)));
            arr_39 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-122))));
        }
        for (signed char i_12 = 0; i_12 < 11; i_12 += 3) 
        {
            var_31 = ((/* implicit */unsigned int) ((int) (-(arr_27 [i_0] [i_0] [i_0] [i_12]))));
            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_16))));
            arr_43 [i_0] [i_0] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1860576163477054759LL)) ? (((((/* implicit */_Bool) var_3)) ? (4184230597U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-5244))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_15))))));
            arr_44 [i_0 - 1] [i_0] = ((/* implicit */_Bool) var_7);
            /* LoopSeq 2 */
            for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 4) 
            {
                var_33 = ((/* implicit */unsigned long long int) var_1);
                arr_47 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (13315718968791585855ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-43)))))) ? (((((/* implicit */int) (signed char)121)) - (((/* implicit */int) (short)-3078)))) : (((/* implicit */int) (_Bool)1))));
                var_34 = ((/* implicit */int) ((5389362683115794873ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))));
                var_35 = ((/* implicit */unsigned char) ((int) ((var_11) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) var_13)))));
            }
            for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 2) 
            {
                var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_6)))))))));
                arr_51 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_46 [i_0 - 1] [i_0 + 3]))));
                arr_52 [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) ((((4294967284U) + (2U))) / (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [i_0 + 3] [i_14])) : (((/* implicit */int) var_15)))))));
            }
        }
        for (short i_15 = 0; i_15 < 11; i_15 += 3) 
        {
            var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 104600046U)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (short)-16051))));
            arr_55 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_18)) / (((/* implicit */int) (_Bool)1))));
            /* LoopNest 2 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    {
                        arr_61 [i_0] [i_16] [i_15] [i_0] = ((/* implicit */short) ((_Bool) var_6));
                        var_39 = ((/* implicit */unsigned char) ((signed char) (signed char)99));
                        var_40 = ((/* implicit */signed char) ((((_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_0]))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (3021682951U)))));
                        var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)48685)) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
        }
        arr_62 [i_0] [i_0] = ((/* implicit */unsigned char) arr_22 [i_0] [i_0] [i_0 - 1] [(unsigned char)9]);
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        var_42 &= ((/* implicit */short) (!((!(((/* implicit */_Bool) (unsigned char)255))))));
        /* LoopNest 2 */
        for (unsigned char i_19 = 0; i_19 < 21; i_19 += 2) 
        {
            for (unsigned long long int i_20 = 1; i_20 < 19; i_20 += 2) 
            {
                {
                    var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) min(((unsigned char)199), (((/* implicit */unsigned char) (_Bool)0)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-31873))))) && (((_Bool) (_Bool)0))))) : ((+(((/* implicit */int) arr_66 [i_20 + 2] [i_20 - 1] [i_20 - 1]))))));
                    var_44 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_70 [i_18] [i_20 - 1] [i_20 + 2] [i_20 + 1]))))) | (((/* implicit */int) ((signed char) 581514672)))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_21 = 1; i_21 < 19; i_21 += 2) 
        {
            var_45 = ((/* implicit */signed char) (+((-(((/* implicit */int) var_3))))));
            /* LoopSeq 1 */
            for (unsigned int i_22 = 0; i_22 < 21; i_22 += 4) 
            {
                var_46 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (1851180728U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-26957))) & (2U)))) && (((/* implicit */_Bool) var_13)))))) : (var_2)));
                arr_78 [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) (-(4294967295U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((822473616U), (4294967293U)))))))));
                var_47 -= ((/* implicit */long long int) arr_67 [i_18] [i_21] [i_21] [i_22]);
                var_48 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2461248477U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((1711773152) != (((/* implicit */int) arr_77 [i_18] [i_18])))))) : (arr_75 [i_21] [i_21 + 1] [i_22])))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) var_6)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -1711773153)) ? (6181627850360260447LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)34))))))))) : (((/* implicit */int) min((((/* implicit */short) var_14)), (arr_68 [i_21 - 1]))))));
                var_49 &= ((/* implicit */unsigned short) (!(((_Bool) var_7))));
            }
            arr_79 [i_21] = ((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) (signed char)43)))));
        }
        /* vectorizable */
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            var_50 = ((/* implicit */signed char) ((short) arr_65 [i_18]));
            var_51 = ((/* implicit */short) max((var_51), (((/* implicit */short) (!(((/* implicit */_Bool) (short)15432)))))));
            var_52 = ((/* implicit */unsigned short) (!((_Bool)1)));
        }
        for (short i_24 = 1; i_24 < 19; i_24 += 4) 
        {
            var_53 ^= ((unsigned int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_72 [i_18]))));
            arr_85 [i_18] [i_24 + 2] = ((/* implicit */short) min(((unsigned short)24707), (((/* implicit */unsigned short) (signed char)-1))));
            var_54 = ((/* implicit */short) max((var_54), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_64 [i_24 - 1] [15ULL]) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-104)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_64 [i_24 - 1] [(_Bool)1]))))) : (((/* implicit */int) min(((unsigned char)16), (((/* implicit */unsigned char) (signed char)-1))))))))));
        }
        var_55 = ((/* implicit */unsigned char) max((var_55), (((/* implicit */unsigned char) min((min(((~(var_2))), (((/* implicit */unsigned int) (unsigned char)220)))), (min(((~(var_2))), (((/* implicit */unsigned int) var_18)))))))));
    }
    var_56 = ((/* implicit */unsigned int) min((((/* implicit */short) var_17)), (((short) var_6))));
}
