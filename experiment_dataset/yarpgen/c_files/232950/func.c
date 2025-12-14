/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232950
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
    for (short i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) min((8616354163205908319LL), (((/* implicit */long long int) 1619251360)))))));
        var_17 = ((/* implicit */signed char) ((_Bool) 122857204U));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_18 *= ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_9 [i_3] [i_0 - 1] [i_2 + 3] [i_0 - 1]), (((/* implicit */int) (unsigned short)19))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)1)), (arr_9 [(signed char)2] [i_0 + 2] [i_2 + 4] [i_3])))) : (min((2U), (((/* implicit */unsigned int) (unsigned short)18041))))));
                        arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((long long int) ((arr_4 [i_1] [i_1]) ^ (arr_4 [i_1] [i_0 + 2]))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_4 = 4; i_4 < 16; i_4 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_1] [i_2 - 2]))));
                            var_20 = ((/* implicit */long long int) ((881148321) & (((/* implicit */int) arr_12 [i_0] [i_0] [i_0 - 2] [i_3]))));
                            var_21 = ((/* implicit */unsigned long long int) arr_6 [i_2 + 3] [i_2 + 1] [i_2 - 1]);
                            var_22 ^= ((/* implicit */unsigned short) arr_9 [i_0] [i_0 + 1] [15ULL] [i_0]);
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_5 = 4; i_5 < 23; i_5 += 3) 
    {
        arr_17 [18] [i_5] &= ((/* implicit */int) ((7315009138073429015ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5533630529165147281LL)) ? (((/* implicit */int) (unsigned short)47495)) : (((/* implicit */int) arr_16 [(signed char)6] [(signed char)6]))))) ? (((((/* implicit */_Bool) (unsigned char)1)) ? (arr_15 [16LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5 + 2] [i_5]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [16LL] [i_5 + 2])))))))))));
        arr_18 [i_5] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned int) arr_13 [i_5] [i_5 + 1]))), (min((((/* implicit */long long int) (unsigned char)61)), (((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)200))) : (arr_15 [i_5])))))));
    }
    for (int i_6 = 0; i_6 < 11; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            for (signed char i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                {
                    var_23 = ((/* implicit */signed char) min((((/* implicit */int) ((arr_4 [i_8] [i_7]) != (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_3 [i_8] [i_7]))))))), (((((((/* implicit */_Bool) 881148321)) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) arr_16 [i_8] [i_7])))) + (((/* implicit */int) min((arr_0 [i_6]), (arr_2 [i_6]))))))));
                    arr_26 [i_6] [i_6] [i_8] [i_6] = arr_19 [i_8];
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_7 [i_6]), (arr_7 [i_6])))) ? (arr_7 [i_8]) : (((/* implicit */int) ((arr_7 [i_6]) != (316025847))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 11; i_9 += 3) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    var_25 = ((/* implicit */short) arr_24 [i_6]);
                    var_26 = ((/* implicit */unsigned char) arr_25 [i_6] [i_9] [i_10]);
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((int) (signed char)5))) ? (536739840) : (((/* implicit */int) arr_11 [i_6] [i_6] [i_6] [5])))), (((/* implicit */int) arr_27 [i_6]))));
        var_28 = ((/* implicit */_Bool) 288230358971842560ULL);
        var_29 += ((/* implicit */unsigned long long int) -1420167312);
    }
    /* LoopSeq 1 */
    for (int i_11 = 0; i_11 < 22; i_11 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            var_30 ^= (~(((/* implicit */int) arr_35 [i_11] [(signed char)12])));
            arr_40 [i_12 - 1] &= ((/* implicit */unsigned char) (~((((_Bool)1) ? (((/* implicit */int) (short)-20479)) : (min((-2147483644), (((/* implicit */int) arr_16 [(signed char)4] [i_12]))))))));
            var_31 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_16 [(short)22] [(short)22]))))), (((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)201))) != (arr_14 [24]))) ? (((((/* implicit */_Bool) (unsigned char)70)) ? (18158513714737709055ULL) : (((/* implicit */unsigned long long int) 881148333)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483630)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)255)))))))));
            arr_41 [(unsigned short)6] = ((/* implicit */long long int) arr_16 [(_Bool)1] [(_Bool)1]);
        }
        for (short i_13 = 2; i_13 < 19; i_13 += 1) 
        {
            /* LoopSeq 3 */
            for (signed char i_14 = 0; i_14 < 22; i_14 += 4) 
            {
                arr_46 [i_13] [i_13] [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_42 [i_13 + 2] [i_13 + 3])) ? (((((/* implicit */_Bool) min((-8895575572906151775LL), (((/* implicit */long long int) 2147483644))))) ? (((((/* implicit */_Bool) arr_42 [i_11] [i_13])) ? (8810650697120938019LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)145))))) : (((/* implicit */long long int) ((/* implicit */int) arr_37 [10LL] [i_13 - 1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) min(((unsigned short)0), (((/* implicit */unsigned short) arr_36 [i_11] [i_11])))))))));
                arr_47 [i_13] = ((/* implicit */unsigned char) 881148321);
                /* LoopNest 2 */
                for (unsigned short i_15 = 0; i_15 < 22; i_15 += 3) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            arr_52 [i_11] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-116)) < (((((/* implicit */_Bool) (unsigned char)127)) ? (-2147483644) : (min((((/* implicit */int) (_Bool)0)), (2147483643)))))));
                            arr_53 [i_16] [i_16] [i_16] [i_16] [i_13] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_51 [i_13 - 1] [i_13] [16ULL] [i_15] [i_16])) < (((/* implicit */int) (short)-32767)))))));
                            arr_54 [i_11] [i_11] [i_13 + 1] [i_13] = ((/* implicit */unsigned long long int) arr_34 [i_11]);
                        }
                    } 
                } 
            }
            for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 3) 
            {
                var_32 &= ((/* implicit */short) ((unsigned short) (+(((/* implicit */int) arr_43 [14] [i_13 + 3])))));
                var_33 *= ((/* implicit */_Bool) arr_56 [i_11] [i_11] [i_11] [i_11]);
                var_34 = ((/* implicit */unsigned int) min((((((arr_42 [i_13] [i_17]) - (-2147483644))) & (((/* implicit */int) arr_44 [i_11] [i_11] [i_13])))), (((/* implicit */int) min((((/* implicit */unsigned short) min(((short)4), (arr_43 [i_13] [12ULL])))), (min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)18041))))))));
                var_35 += ((/* implicit */int) arr_16 [6ULL] [i_13]);
            }
            for (int i_18 = 0; i_18 < 22; i_18 += 3) 
            {
                arr_60 [i_13] [i_11] [i_13] [i_18] = ((/* implicit */unsigned long long int) ((min((arr_58 [i_13 + 3] [i_13 + 1] [i_13 + 1]), (((/* implicit */long long int) arr_37 [i_13 + 2] [i_13 - 1])))) != (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_13] [i_13] [i_13] [i_13 + 1] [i_13] [(unsigned char)12])))));
                var_36 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_42 [i_13 + 1] [i_13 + 1])))) || (((/* implicit */_Bool) min((arr_55 [i_13 + 1] [(short)14] [i_13 + 3] [(short)14]), (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [(signed char)17] [i_13] [i_13 + 1]))) : (0ULL))))))));
                var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 0ULL))) ? (((unsigned long long int) 18446744073709551615ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_49 [19LL] [i_13] [i_13] [i_18])) != (((/* implicit */int) arr_49 [i_11] [i_11] [i_13] [i_13]))))))));
                /* LoopSeq 2 */
                for (long long int i_19 = 4; i_19 < 20; i_19 += 2) 
                {
                    var_38 = ((/* implicit */long long int) (short)-16788);
                    var_39 = ((/* implicit */signed char) ((-2043810429) / (((/* implicit */int) min((arr_44 [(short)21] [i_18] [i_13]), (((/* implicit */signed char) (_Bool)1)))))));
                    var_40 = ((/* implicit */long long int) (_Bool)1);
                }
                /* vectorizable */
                for (unsigned char i_20 = 0; i_20 < 22; i_20 += 3) 
                {
                    arr_67 [i_11] [i_11] [i_13] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_13])) ? (607157296) : (((((/* implicit */_Bool) 8895575572906151783LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)18051))))));
                    var_41 = ((/* implicit */_Bool) max((var_41), ((_Bool)1)));
                    var_42 = ((/* implicit */int) arr_51 [i_11] [(unsigned short)4] [i_13 - 2] [i_18] [i_20]);
                }
                arr_68 [i_13] = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) arr_57 [i_11] [i_11])) ? (((/* implicit */int) arr_45 [i_11] [i_11])) : (((/* implicit */int) arr_35 [i_11] [i_13])))), (((((/* implicit */_Bool) arr_55 [i_13 - 1] [i_13] [i_13 - 1] [i_13])) ? (((/* implicit */int) (unsigned short)39679)) : (((/* implicit */int) arr_35 [i_11] [i_13])))))), ((+(((((/* implicit */int) arr_36 [i_11] [i_11])) + (((/* implicit */int) (short)-16772))))))));
            }
            var_43 ^= ((/* implicit */_Bool) (+(((/* implicit */int) arr_44 [i_11] [(signed char)4] [(_Bool)1]))));
            var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) min((arr_58 [i_11] [i_11] [i_11]), (((/* implicit */long long int) ((((/* implicit */int) arr_39 [16] [16] [16])) == (((/* implicit */int) (_Bool)1))))))))));
            var_45 &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned short)2697)))) < (min((((/* implicit */long long int) ((6708102250280317521ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_11] [i_11])))))), (arr_50 [i_11] [i_11] [(_Bool)1] [i_11] [i_11] [i_13 - 2])))));
            arr_69 [i_13] [i_13 + 1] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) -1881538539347157287LL))) != (((((/* implicit */_Bool) ((int) -647183387))) ? (((/* implicit */int) (unsigned short)0)) : (((((/* implicit */_Bool) (short)16788)) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) (short)-16788))))))));
        }
        var_46 = ((/* implicit */short) ((unsigned short) min((5842345606515776804LL), (((/* implicit */long long int) arr_49 [i_11] [i_11] [2] [i_11])))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
    {
        arr_74 [i_21] = ((/* implicit */_Bool) 535822336);
        arr_75 [i_21] = ((/* implicit */short) (+(((/* implicit */int) arr_49 [i_21] [(unsigned char)18] [18ULL] [18ULL]))));
        var_47 += ((/* implicit */signed char) arr_49 [i_21 + 1] [i_21 + 1] [(unsigned short)4] [i_21 + 1]);
        var_48 = arr_72 [i_21 + 1];
    }
    for (int i_22 = 0; i_22 < 23; i_22 += 1) 
    {
        arr_79 [i_22] = ((/* implicit */short) ((((/* implicit */_Bool) ((((arr_15 [16ULL]) + (9223372036854775807LL))) >> (((arr_15 [(unsigned char)12]) + (9202435286017618000LL)))))) ? (((/* implicit */int) (_Bool)1)) : (((int) arr_16 [22LL] [i_22]))));
        var_49 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) (_Bool)1)), (min((arr_76 [i_22] [i_22]), (((/* implicit */unsigned long long int) (signed char)47)))))) & (((/* implicit */unsigned long long int) min((arr_14 [(signed char)6]), (6LL))))));
        var_50 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_76 [i_22] [i_22]) << (((((/* implicit */int) (unsigned short)36479)) - (36479)))))) ? (((0U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)48))))) : (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)45)), (663850632))))))), (((((/* implicit */_Bool) (unsigned short)60275)) ? (min((3941724677340153419LL), (9007164895002624LL))) : (arr_15 [(short)4])))));
        var_51 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (((((/* implicit */_Bool) (+(arr_14 [24LL])))) ? (arr_77 [i_22]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [(unsigned char)2] [i_22])))))));
    }
}
