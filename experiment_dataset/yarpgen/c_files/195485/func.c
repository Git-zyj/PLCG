/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195485
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
    var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-3275))));
    var_19 *= ((/* implicit */signed char) 13LL);
    var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_8)), ((~(var_14)))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        var_21 |= (!(((/* implicit */_Bool) 9LL)));
        var_22 = ((/* implicit */unsigned long long int) ((var_10) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)253)))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        arr_5 [9] [9] &= ((/* implicit */short) ((((/* implicit */_Bool) 1073741823U)) ? (7881155824252460682LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-91)))));
        var_23 = ((/* implicit */unsigned char) arr_0 [i_1]);
        var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1]))));
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(max((var_6), (((/* implicit */unsigned int) arr_0 [i_1]))))))) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_1] [(unsigned short)14])))))));
        arr_6 [i_1] = ((/* implicit */long long int) (+((~(((/* implicit */int) arr_0 [i_1]))))));
    }
    for (long long int i_2 = 1; i_2 < 18; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) 7881155824252460682LL))) ? (((((/* implicit */_Bool) arr_0 [i_2 + 2])) ? (((/* implicit */int) arr_0 [i_2 + 1])) : (((/* implicit */int) arr_0 [i_2 + 1])))) : (((((/* implicit */int) arr_0 [i_2 - 1])) ^ (((/* implicit */int) arr_0 [i_2 - 1]))))));
        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) min((((signed char) (_Bool)1)), (max((arr_0 [i_2]), (arr_0 [i_2])))))) : ((+(((((/* implicit */_Bool) (short)15)) ? (730891034) : (((/* implicit */int) (signed char)50)))))))))));
        var_27 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) & (((/* implicit */int) var_2))))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_3 = 3; i_3 < 17; i_3 += 4) 
        {
            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) 16096314333274572687ULL))));
            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) arr_8 [i_2]))));
            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_2 + 1])))))));
        }
        for (int i_4 = 4; i_4 < 19; i_4 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_5 = 1; i_5 < 19; i_5 += 4) 
            {
                var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((_Bool) (signed char)15)))));
                arr_17 [17U] [i_5] [i_4] [i_5 + 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_7 [i_2 + 2])) ? (arr_7 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [(_Bool)1]))))) ^ (max((((/* implicit */long long int) (unsigned char)17)), (var_9))))))));
            }
            for (signed char i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                arr_20 [i_2] [i_2] = ((/* implicit */unsigned int) (short)-27618);
                var_32 = ((/* implicit */_Bool) (+(((((/* implicit */int) (signed char)91)) - (((/* implicit */int) (_Bool)1))))));
            }
            arr_21 [i_2] = ((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) var_7)))));
            /* LoopSeq 2 */
            for (int i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                arr_24 [i_2] [i_7] [i_2] [i_2] = ((/* implicit */int) (unsigned char)223);
                var_33 = ((/* implicit */unsigned short) arr_8 [i_2]);
                var_34 = ((/* implicit */unsigned char) var_16);
            }
            for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                /* LoopSeq 3 */
                for (long long int i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    var_35 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)248))));
                    arr_30 [i_9] [i_2] [i_8] [i_2] [i_2] = ((/* implicit */unsigned int) max((min((arr_19 [i_4 + 1] [i_2 + 1]), (arr_19 [i_4 - 1] [i_2 + 2]))), (((/* implicit */unsigned long long int) (short)16467))));
                    var_36 = ((/* implicit */unsigned int) (+(((((/* implicit */int) (unsigned char)239)) * (((/* implicit */int) (signed char)-116))))));
                    var_37 = ((/* implicit */signed char) arr_15 [i_4]);
                }
                for (long long int i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    var_38 = ((/* implicit */unsigned char) (+(((long long int) -243516641))));
                    var_39 = -3570629241982429799LL;
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_11 = 1; i_11 < 17; i_11 += 4) 
                    {
                        var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (short)-16481)) ? (arr_7 [i_2]) : (((/* implicit */long long int) arr_35 [i_11] [(_Bool)1] [i_10] [i_8] [i_2] [i_4] [i_2])))))))));
                        arr_37 [i_11] [i_11] [i_8] [19U] [i_11] [i_11] = ((/* implicit */signed char) var_2);
                        arr_38 [i_11] [i_10] [i_11] [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_2 + 1])) ? (((/* implicit */int) arr_10 [i_2 + 2])) : (((/* implicit */int) arr_10 [i_2 + 1]))));
                        arr_39 [i_10] [i_11] [i_8] [i_11] [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_2 - 1] [i_4 - 4] [i_11] [i_11 + 3]))) >= (9223372036854775807LL)));
                        var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_2] [i_2] [i_2 + 2])) || (((/* implicit */_Bool) arr_34 [i_2] [i_2] [i_2 + 2] [i_4 - 4] [i_4 - 4] [i_11 - 1]))));
                    }
                    for (int i_12 = 1; i_12 < 18; i_12 += 1) 
                    {
                        arr_42 [(unsigned short)2] [i_4 - 4] [i_4] [i_8] [i_10] [(signed char)3] = (+(((((/* implicit */long long int) max((var_15), (((/* implicit */unsigned int) (signed char)-85))))) - ((-(var_11))))));
                        arr_43 [i_2] [i_4] [i_8] [i_10] [i_12] = ((/* implicit */unsigned char) ((max((arr_41 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [(short)17]), (((/* implicit */long long int) (+(arr_15 [i_10])))))) & (((/* implicit */long long int) arr_15 [i_4]))));
                    }
                }
                for (signed char i_13 = 1; i_13 < 19; i_13 += 2) 
                {
                    var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) ((((((/* implicit */_Bool) 5U)) && (((/* implicit */_Bool) 2350429740434978928ULL)))) && (((/* implicit */_Bool) (short)(-32767 - 1))))))));
                    /* LoopSeq 2 */
                    for (short i_14 = 0; i_14 < 20; i_14 += 1) 
                    {
                        var_43 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2350429740434978914ULL)) ? (1963051138652738319ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)99)))))) ? (1940184072U) : (arr_29 [i_2] [i_4] [i_2 + 2] [i_13])))));
                        var_44 = arr_35 [i_2 + 1] [i_4] [i_8] [i_13 + 1] [i_13 + 1] [i_4 - 1] [i_14];
                        arr_49 [i_4] [i_13] [i_8] [i_8] [i_14] [i_4 - 1] = ((/* implicit */unsigned int) (((((~(22LL))) + (9223372036854775807LL))) << ((((~(arr_41 [i_2 + 1] [i_4 - 3] [i_2 + 1] [i_2 + 1] [i_13 + 1]))) - (9098891952297821443LL)))));
                    }
                    /* vectorizable */
                    for (int i_15 = 2; i_15 < 19; i_15 += 4) 
                    {
                        var_45 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)7)) || (((/* implicit */_Bool) (signed char)60))))) > (((/* implicit */int) (_Bool)1))));
                        var_46 -= arr_32 [i_8] [i_4] [i_4] [i_13];
                        var_47 += arr_14 [i_4] [i_8] [i_13];
                    }
                }
                var_48 = ((/* implicit */unsigned int) min((var_48), (((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) arr_46 [i_8] [i_4 - 2] [i_4] [i_4 - 3] [i_2 - 1]))))))));
            }
        }
        for (unsigned int i_16 = 2; i_16 < 16; i_16 += 2) 
        {
            /* LoopSeq 4 */
            for (long long int i_17 = 0; i_17 < 20; i_17 += 1) 
            {
                var_49 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)48))))), (((var_6) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2 + 2] [i_16])))))));
                var_50 = ((/* implicit */signed char) max((((/* implicit */int) (unsigned char)10)), (1454153872)));
            }
            for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 1) 
            {
                var_51 = ((/* implicit */signed char) arr_14 [i_16] [i_16] [i_2]);
                var_52 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_31 [(signed char)6] [i_2 + 2])) ? (((/* implicit */int) (!(var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_18] [(signed char)6] [i_2] [(signed char)6]))))))) > ((~(((/* implicit */int) (signed char)50))))));
                var_53 = ((/* implicit */long long int) ((_Bool) (~(((/* implicit */int) arr_53 [i_2])))));
                var_54 = ((/* implicit */signed char) (~(var_13)));
            }
            for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
            {
                var_55 = arr_1 [i_2 + 2] [i_16];
                var_56 = ((arr_40 [i_2] [(signed char)1] [i_19 - 1] [5U] [i_19 - 1] [(signed char)1] [i_16]) != (((/* implicit */int) (!(((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) (unsigned char)246)))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_20 = 0; i_20 < 20; i_20 += 2) 
                {
                    var_57 = ((/* implicit */long long int) (~(((/* implicit */int) arr_50 [i_20] [(signed char)2] [i_19] [i_19] [i_19]))));
                    var_58 = ((/* implicit */unsigned int) min((var_58), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_12)) ? (var_0) : (-3211771974538019667LL))))))));
                    arr_68 [i_2 - 1] [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_20] [i_16 + 1] = ((/* implicit */unsigned int) var_17);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_21 = 2; i_21 < 18; i_21 += 4) /* same iter space */
                    {
                        var_59 = ((/* implicit */long long int) max((var_59), (((((/* implicit */_Bool) 0U)) ? (arr_41 [i_21 - 1] [i_20] [(short)7] [i_16 - 1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        arr_71 [i_2 + 1] [i_16 + 4] [i_16 + 4] [i_20] [i_21] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)248))));
                    }
                    for (unsigned long long int i_22 = 2; i_22 < 18; i_22 += 4) /* same iter space */
                    {
                        var_60 = ((/* implicit */unsigned char) max((var_60), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_60 [i_2])))))));
                        var_61 = ((/* implicit */signed char) arr_18 [i_16 - 2]);
                        arr_75 [i_2] [i_2] [i_19 - 1] [i_19 - 1] [i_19 - 1] = ((/* implicit */long long int) ((unsigned char) arr_74 [i_2] [i_2 - 1] [i_19] [i_16 + 2] [i_22 - 2]));
                    }
                }
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    var_62 = (-(((long long int) arr_47 [i_2] [i_16] [i_19 - 1] [i_23] [i_2] [(_Bool)1])));
                    var_63 ^= ((/* implicit */unsigned long long int) var_13);
                }
                /* vectorizable */
                for (long long int i_24 = 0; i_24 < 20; i_24 += 2) 
                {
                    var_64 = ((/* implicit */short) min((var_64), (((/* implicit */short) (~(((/* implicit */int) arr_69 [i_24] [i_24] [i_2 - 1] [i_2 - 1] [i_2 - 1])))))));
                    var_65 = ((/* implicit */unsigned int) min((var_65), (((/* implicit */unsigned int) arr_67 [i_2] [14LL] [i_16 + 2] [19ULL] [i_19] [i_24]))));
                    arr_81 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 2] = ((/* implicit */_Bool) arr_34 [i_16] [i_19 - 1] [i_2 - 1] [i_16] [i_2 - 1] [i_2 - 1]);
                    arr_82 [i_2] [i_16] [i_19] [i_19] = ((/* implicit */long long int) (~(((/* implicit */int) arr_54 [i_2] [i_2 - 1]))));
                }
            }
            for (signed char i_25 = 1; i_25 < 19; i_25 += 2) 
            {
                var_66 = ((/* implicit */long long int) (short)-16468);
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_26 = 0; i_26 < 20; i_26 += 1) 
                {
                    var_67 = ((/* implicit */long long int) (~(var_3)));
                    var_68 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)65535)))) >= (((/* implicit */int) arr_32 [i_25 - 1] [i_25 - 1] [i_25 - 1] [i_25 - 1]))));
                }
                var_69 = ((/* implicit */unsigned int) min((var_69), (((/* implicit */unsigned int) ((signed char) -7318235817102053963LL)))));
                var_70 = ((/* implicit */long long int) (unsigned char)247);
                var_71 = ((/* implicit */signed char) var_2);
            }
            arr_88 [i_2] [i_2] [i_16] = ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_2] [i_2 + 1] [i_2 + 2] [i_2 + 1] [i_16 - 1]))) & (arr_57 [i_16])))));
            var_72 = ((/* implicit */unsigned long long int) max((var_72), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (max((3994008782U), (((/* implicit */unsigned int) 1534539960)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)16)), ((unsigned short)65525))))))))));
        }
        for (unsigned long long int i_27 = 3; i_27 < 18; i_27 += 4) 
        {
            arr_91 [i_27] = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) ((unsigned char) (short)32767))), (arr_78 [i_2 + 1] [i_2 + 1]))), (((/* implicit */long long int) (unsigned char)253))));
            arr_92 [i_2] [i_27] = ((/* implicit */long long int) arr_59 [i_2] [i_2] [i_2 + 1]);
            arr_93 [i_27] [i_27] [i_27] = max((((((/* implicit */_Bool) arr_15 [i_27])) ? (arr_15 [i_27]) : (arr_15 [i_27]))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-122))))));
        }
        arr_94 [i_2] = arr_31 [12LL] [i_2];
    }
    var_73 = ((/* implicit */int) var_6);
}
