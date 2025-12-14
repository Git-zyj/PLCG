/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234534
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
    for (short i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) (+(13153671776193157019ULL)));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_21 ^= ((/* implicit */unsigned short) (-(13153671776193157010ULL)));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_5)))) ? (((((/* implicit */_Bool) 13153671776193157030ULL)) ? (4818214937275614536ULL) : (5293072297516394597ULL))) : (5293072297516394618ULL)));
        }
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_3 = 1; i_3 < 21; i_3 += 1) /* same iter space */
            {
                arr_12 [(unsigned short)4] [i_2] [(unsigned char)5] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_3 - 1])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                var_23 = ((/* implicit */long long int) ((short) var_3));
            }
            for (unsigned int i_4 = 1; i_4 < 21; i_4 += 1) /* same iter space */
            {
                arr_15 [(unsigned char)7] [i_2] [16] [i_2] = ((/* implicit */unsigned long long int) arr_9 [i_0 - 1] [i_2] [i_4 + 1] [i_4 + 1]);
                var_24 &= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_13 [i_4 + 1] [i_2] [i_0 + 1] [i_0]))));
            }
            arr_16 [i_0] [i_2] [(unsigned char)13] &= ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_0 + 2] [i_0 + 1] [i_0 - 4] [i_0 - 3])) - (((/* implicit */int) arr_9 [i_0 + 2] [i_0] [i_0 - 4] [(signed char)0]))));
            /* LoopSeq 3 */
            for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_17 [i_0 - 2] [i_2]);
                arr_20 [i_5] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_12))));
                /* LoopSeq 2 */
                for (int i_6 = 1; i_6 < 18; i_6 += 2) 
                {
                    var_25 = ((/* implicit */int) min((var_25), (((((/* implicit */_Bool) 5293072297516394613ULL)) ? (((/* implicit */int) (unsigned short)3699)) : (((/* implicit */int) arr_2 [i_0 - 1] [i_2]))))));
                    var_26 = ((((/* implicit */_Bool) arr_3 [i_0 - 4])) ? ((~(((/* implicit */int) arr_21 [i_6] [i_5] [(unsigned short)9] [i_2] [i_0] [i_0 + 1])))) : (var_10));
                    var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
                    var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_18))));
                }
                for (unsigned long long int i_7 = 2; i_7 < 21; i_7 += 4) 
                {
                    arr_26 [i_0] [12] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) -1887974787)))));
                    var_29 = ((/* implicit */_Bool) arr_4 [i_5] [i_7]);
                    /* LoopSeq 4 */
                    for (signed char i_8 = 1; i_8 < 21; i_8 += 1) 
                    {
                        var_30 = ((((/* implicit */int) (unsigned char)210)) + (var_0));
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)6786)) >> (((arr_18 [i_0] [i_2] [i_5] [(unsigned short)1]) - (10997049928703420698ULL)))));
                        var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))));
                        arr_29 [i_0] [15LL] [i_5] [(unsigned short)18] [i_8] = ((/* implicit */unsigned char) (+(13153671776193157030ULL)));
                        arr_30 [(signed char)17] [14] [i_5] [i_7] [i_8] = ((/* implicit */unsigned char) ((var_7) * (((/* implicit */unsigned int) ((/* implicit */int) var_17)))));
                    }
                    for (int i_9 = 1; i_9 < 20; i_9 += 2) 
                    {
                        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (5293072297516394605ULL)))) && (((/* implicit */_Bool) ((int) 13153671776193156998ULL))))))));
                        var_34 = ((/* implicit */signed char) ((_Bool) var_11));
                        arr_33 [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_0 - 1] [i_2])) ? (5293072297516394597ULL) : (13153671776193156979ULL)));
                        var_35 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_24 [(short)12] [i_5] [i_2] [i_0 - 3]))));
                    }
                    for (unsigned long long int i_10 = 1; i_10 < 20; i_10 += 4) 
                    {
                        var_36 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)6233))));
                        arr_36 [i_0] [i_0 - 3] [i_10] [i_0] [i_0] = ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) arr_32 [i_10 - 1] [i_2] [13] [i_7] [i_10])));
                    }
                    for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        var_37 = ((/* implicit */int) ((unsigned int) (short)3225));
                        var_38 = ((((/* implicit */long long int) 127U)) > ((+(4041719847214365697LL))));
                    }
                    var_39 = ((/* implicit */short) ((long long int) (-(((/* implicit */int) var_19)))));
                    var_40 = ((/* implicit */signed char) var_7);
                }
            }
            for (unsigned long long int i_12 = 3; i_12 < 18; i_12 += 4) 
            {
                arr_45 [i_0] [16] [i_2] [i_12] = ((/* implicit */unsigned short) ((short) arr_5 [i_0 - 2]));
                /* LoopSeq 3 */
                for (short i_13 = 0; i_13 < 22; i_13 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_14 = 0; i_14 < 22; i_14 += 1) 
                    {
                        var_41 += ((/* implicit */long long int) var_12);
                        arr_51 [15ULL] [i_2] [17U] [i_13] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_43 [i_14] [i_13] [i_12 + 1] [i_2])) ? (((/* implicit */unsigned long long int) 4294967168U)) : (5293072297516394613ULL)));
                        var_42 = ((/* implicit */signed char) ((var_17) && (((/* implicit */_Bool) var_8))));
                    }
                    var_43 = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (5293072297516394611ULL)));
                    var_44 = (+(((/* implicit */int) arr_10 [i_12 + 2] [i_2] [i_2] [i_0 + 1])));
                }
                for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                {
                    /* LoopSeq 3 */
                    for (int i_16 = 1; i_16 < 20; i_16 += 4) /* same iter space */
                    {
                        var_45 &= ((/* implicit */short) var_12);
                        var_46 ^= (~(((/* implicit */int) var_17)));
                        var_47 = ((/* implicit */long long int) (~(56)));
                    }
                    for (int i_17 = 1; i_17 < 20; i_17 += 4) /* same iter space */
                    {
                        arr_63 [i_0 - 3] [i_0] [i_0] [i_0] [i_17] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (short)-20626))))));
                        var_48 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) var_7)))));
                        var_49 &= var_14;
                    }
                    for (unsigned short i_18 = 0; i_18 < 22; i_18 += 2) 
                    {
                        arr_67 [5ULL] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((long long int) var_16)) != (((/* implicit */long long int) 1830181135))));
                        var_50 = ((/* implicit */signed char) max((var_50), (((/* implicit */signed char) 136U))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_19 = 3; i_19 < 19; i_19 += 4) 
                    {
                        var_51 = ((/* implicit */unsigned int) var_10);
                        arr_70 [i_19] [(unsigned char)2] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_19))));
                    }
                    for (unsigned short i_20 = 2; i_20 < 20; i_20 += 1) 
                    {
                        arr_74 [i_0] [i_0] [(unsigned char)10] [i_0] [i_0 - 4] = ((/* implicit */unsigned long long int) arr_54 [i_0 - 3] [i_15 - 1] [i_15]);
                        arr_75 [i_0] [i_0] [5ULL] [i_0] [(unsigned short)1] = ((/* implicit */unsigned int) ((int) var_18));
                        var_52 &= ((/* implicit */long long int) ((unsigned char) arr_5 [i_20 - 1]));
                    }
                }
                for (unsigned long long int i_21 = 2; i_21 < 21; i_21 += 2) 
                {
                    var_53 = ((/* implicit */unsigned short) (-(arr_37 [i_21] [i_21 - 2] [i_21 - 2] [i_21 - 2] [i_21 + 1])));
                    /* LoopSeq 2 */
                    for (unsigned short i_22 = 0; i_22 < 22; i_22 += 4) 
                    {
                        var_54 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
                        var_55 = ((/* implicit */unsigned short) (+(var_7)));
                        var_56 ^= ((/* implicit */signed char) var_19);
                        arr_81 [i_0 - 2] [i_2] [i_12] [i_21] [i_22] = ((/* implicit */unsigned char) arr_17 [i_21 - 1] [i_12 - 1]);
                        var_57 = ((/* implicit */unsigned char) var_12);
                    }
                    for (signed char i_23 = 0; i_23 < 22; i_23 += 4) 
                    {
                        var_58 *= ((/* implicit */_Bool) ((unsigned char) 134213632));
                        arr_85 [i_0 - 2] [i_0] [(unsigned short)12] [i_0] [i_0] = ((((/* implicit */_Bool) ((unsigned char) var_19))) ? (((/* implicit */unsigned long long int) var_5)) : (((13153671776193156990ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))));
                    }
                    var_59 = ((/* implicit */short) ((((/* implicit */_Bool) (~(13153671776193157030ULL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                    arr_86 [i_0] [(unsigned char)12] [(unsigned short)5] [i_12 + 1] [i_21 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 13153671776193157006ULL)) ? (5293072297516394596ULL) : (((/* implicit */unsigned long long int) arr_59 [i_12 + 1] [i_21 - 2] [(short)19] [i_0 - 2] [13LL]))));
                }
                var_60 = ((/* implicit */unsigned short) ((signed char) arr_66 [i_2] [i_2] [i_12 + 4] [i_12] [i_12 - 3]));
            }
            for (short i_24 = 1; i_24 < 19; i_24 += 2) 
            {
                arr_89 [i_24] [i_2] [i_24 - 1] = ((/* implicit */long long int) 5293072297516394618ULL);
                arr_90 [i_0] &= ((unsigned char) (!(((/* implicit */_Bool) var_8))));
                /* LoopSeq 1 */
                for (unsigned char i_25 = 3; i_25 < 20; i_25 += 1) 
                {
                    var_61 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1763100948181688653LL)) ? (((/* implicit */int) (unsigned short)16387)) : (((/* implicit */int) arr_11 [i_0 - 4] [i_0 - 4]))));
                    arr_93 [(unsigned char)3] [i_24] [i_24] = ((/* implicit */unsigned char) arr_47 [(short)3] [i_2] [i_24 + 2] [i_24]);
                    /* LoopSeq 3 */
                    for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
                    {
                        var_62 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-116))));
                        arr_96 [(unsigned char)15] [i_24] [i_24] [(unsigned char)14] [19U] = ((/* implicit */int) arr_88 [(unsigned short)11] [i_2] [i_24] [i_24]);
                        arr_97 [i_2] [i_24 - 1] [i_24] = ((/* implicit */unsigned long long int) arr_6 [i_26 - 1]);
                        var_63 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_52 [(signed char)3]))));
                        var_64 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)6230)) ? (((/* implicit */unsigned long long int) 6121444351593193508LL)) : (var_16))));
                    }
                    for (int i_27 = 2; i_27 < 20; i_27 += 4) 
                    {
                        var_65 ^= ((/* implicit */unsigned long long int) ((((var_0) + (2147483647))) >> (((((/* implicit */int) (unsigned short)6230)) - (6210)))));
                        arr_101 [i_0 - 4] [(_Bool)1] [i_0] [12LL] [i_25] [(unsigned char)8] [i_27] &= ((/* implicit */unsigned int) arr_35 [i_0] [i_2] [i_24] [i_25 - 1] [i_25 + 2] [18] [i_24]);
                    }
                    for (unsigned short i_28 = 1; i_28 < 21; i_28 += 1) 
                    {
                        var_66 = ((/* implicit */signed char) (unsigned char)68);
                        arr_105 [(short)11] [(_Bool)1] [16ULL] [i_25 - 3] [i_24] = ((/* implicit */_Bool) arr_61 [i_24 + 3] [i_24] [i_28 + 1]);
                        arr_106 [i_0] [(short)20] [6U] [6ULL] [(short)14] [i_2] [i_0] |= ((/* implicit */signed char) 13153671776193157006ULL);
                    }
                    /* LoopSeq 2 */
                    for (int i_29 = 0; i_29 < 22; i_29 += 4) 
                    {
                        var_67 &= ((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)6228));
                        arr_111 [i_0] [i_2] [i_24 + 1] [(signed char)6] [i_29] [i_29] &= ((/* implicit */_Bool) var_15);
                        arr_112 [16ULL] [i_2] [i_24] [(short)6] = (-(13153671776193157021ULL));
                        var_68 = ((/* implicit */unsigned char) arr_69 [i_0] [i_24] [i_24] [i_25 - 2]);
                    }
                    for (long long int i_30 = 2; i_30 < 18; i_30 += 1) 
                    {
                        arr_115 [i_24] [i_25] [i_24] [(unsigned short)17] [i_24] = ((/* implicit */unsigned long long int) var_1);
                        var_69 = ((/* implicit */signed char) ((unsigned int) var_14));
                        arr_116 [i_0] [(_Bool)1] [(unsigned char)1] [11] [i_24] [i_25] [i_30] = ((/* implicit */unsigned char) (~(5293072297516394618ULL)));
                    }
                }
            }
            var_70 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_94 [i_0] [i_0 - 4] [i_0] [i_0 + 2] [(unsigned char)14] [i_0]))));
            arr_117 [(unsigned char)9] = ((/* implicit */short) (~(13153671776193157019ULL)));
        }
    }
    for (unsigned long long int i_31 = 1; i_31 < 21; i_31 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_32 = 0; i_32 < 22; i_32 += 2) 
        {
            var_71 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_107 [i_32] [18LL] [i_31 + 1] [i_31 + 1] [0])) ? (((/* implicit */int) (short)-20918)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_19))))))), (arr_82 [i_31] [(unsigned short)11] [i_31] [(_Bool)1] [i_31]));
            arr_123 [16U] = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_5))));
        }
        arr_124 [i_31] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_55 [21U] [i_31] [i_31 + 1] [i_31] [i_31]))))) >> (((((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) arr_55 [(unsigned short)16] [21] [i_31 + 1] [i_31 - 1] [13U])))) + (3062)))));
        arr_125 [4U] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 13153671776193157014ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)8192))))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : ((~(((/* implicit */int) (unsigned short)0)))))), (((/* implicit */int) (unsigned char)231)));
        var_72 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) 5293072297516394610ULL)) ? (13153671776193157011ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15499))))));
    }
    var_73 = ((/* implicit */short) (~(max((var_14), (((/* implicit */unsigned long long int) var_10))))));
}
