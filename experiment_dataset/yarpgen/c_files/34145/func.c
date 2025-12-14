/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34145
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
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((min(((-(((/* implicit */int) var_2)))), (((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) max(((unsigned short)63576), (((/* implicit */unsigned short) (signed char)-22))))))))));
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (signed char)-30))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0 - 2]);
        var_16 = ((/* implicit */unsigned int) arr_3 [i_0 - 2]);
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_17 += ((/* implicit */long long int) var_3);
        var_18 += max((-5747987765552093341LL), (max((((/* implicit */long long int) 2147483647)), (-832749406871181812LL))));
        var_19 += ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_2)))), ((+(((/* implicit */int) max((((/* implicit */unsigned short) (short)30141)), ((unsigned short)55976))))))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) / ((-9223372036854775807LL - 1LL))))))) ? (max((max((((/* implicit */unsigned long long int) arr_1 [8LL] [i_1])), (6859923823189720495ULL))), (((/* implicit */unsigned long long int) arr_2 [i_1])))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-54)))))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_21 = min((arr_7 [(signed char)10]), ((-(arr_7 [10LL]))));
            var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))));
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) var_0))));
            arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_8 [i_2]);
        }
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) var_6))));
            var_25 = ((((((/* implicit */_Bool) (short)32767)) ? (min((((/* implicit */unsigned long long int) arr_0 [i_3])), (arr_8 [3U]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_9 [i_1] [(_Bool)1] [i_1]), (var_6))))))) == (6176028779488334364ULL));
        }
    }
    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        var_26 = ((/* implicit */unsigned short) arr_14 [i_4] [i_4]);
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            var_27 = ((/* implicit */signed char) var_3);
            arr_19 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_5] [i_4] [i_4])) & (((/* implicit */int) (_Bool)0))))) ? (arr_14 [2LL] [i_5]) : (((/* implicit */int) (unsigned char)50))));
            /* LoopSeq 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)59002)) ? (((/* implicit */int) var_0)) : (arr_14 [i_6] [i_4])));
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)1)) ? (arr_14 [i_5] [i_4]) : (((/* implicit */int) (short)32767))));
                var_30 = ((/* implicit */int) 8845057657624085031ULL);
                var_31 = ((/* implicit */unsigned long long int) (short)-32757);
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                var_32 = ((/* implicit */_Bool) arr_17 [i_4] [i_5]);
                /* LoopSeq 2 */
                for (unsigned int i_8 = 0; i_8 < 19; i_8 += 4) 
                {
                    var_33 += ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
                    arr_27 [i_4] [i_5] [i_5] [i_7] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_26 [i_4] [i_4]))))) ? (((((/* implicit */int) (_Bool)0)) - (arr_14 [(signed char)9] [i_5]))) : (((/* implicit */int) (unsigned short)65535))));
                    var_34 = ((/* implicit */signed char) 4044053785130600551LL);
                    var_35 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))));
                }
                for (unsigned char i_9 = 0; i_9 < 19; i_9 += 2) 
                {
                    var_36 -= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 4) 
                    {
                        arr_35 [i_7] = ((/* implicit */short) var_9);
                        var_37 = ((/* implicit */_Bool) (short)16084);
                        var_38 += ((/* implicit */signed char) (+(((/* implicit */int) arr_20 [i_4] [i_10]))));
                    }
                    for (long long int i_11 = 0; i_11 < 19; i_11 += 3) 
                    {
                        var_39 = ((/* implicit */short) ((((/* implicit */int) arr_30 [i_5] [i_7])) <= (((/* implicit */int) arr_30 [(_Bool)1] [i_5]))));
                        var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) arr_20 [i_9] [i_9]))));
                        var_41 += arr_17 [i_7] [i_11];
                    }
                }
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
            {
                arr_42 [(_Bool)0] [i_12] = ((/* implicit */signed char) (+(((/* implicit */int) (short)-3559))));
                /* LoopSeq 3 */
                for (unsigned char i_13 = 0; i_13 < 19; i_13 += 3) 
                {
                    var_42 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_30 [i_12] [i_13]))));
                    arr_45 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_4] [i_4])) ? (((/* implicit */int) arr_29 [i_4] [i_4] [i_12] [i_13])) : (arr_33 [i_4] [(short)8] [i_12] [i_12] [i_13])));
                    /* LoopSeq 2 */
                    for (unsigned int i_14 = 3; i_14 < 17; i_14 += 2) 
                    {
                        arr_48 [i_14 - 2] = (signed char)(-127 - 1);
                        var_43 = (-(((/* implicit */int) arr_18 [i_14 + 2] [i_5])));
                    }
                    for (unsigned char i_15 = 0; i_15 < 19; i_15 += 4) 
                    {
                        arr_52 [i_13] [i_13] [i_13] [i_4] [i_15] [i_12] = ((/* implicit */unsigned long long int) var_3);
                        var_44 = ((/* implicit */_Bool) ((((/* implicit */int) var_12)) / (((/* implicit */int) (short)-29462))));
                        arr_53 [i_4] [i_5] [i_12] [i_13] [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) 8191U);
                        var_45 = (signed char)-14;
                        var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)805))) / (((((/* implicit */_Bool) 688717488U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (7791676207614199214ULL))))))));
                    }
                    var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) 6474605530145860580ULL))));
                }
                for (unsigned int i_16 = 2; i_16 < 18; i_16 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_17 = 0; i_17 < 19; i_17 += 2) 
                    {
                        var_48 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_32 [i_16] [(signed char)14] [i_16] [i_16] [i_12])) ? (arr_39 [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_16] [i_16] [i_16 - 1] [i_16]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                        var_49 = ((/* implicit */_Bool) (~(((/* implicit */int) var_2))));
                        var_50 = ((/* implicit */_Bool) var_6);
                        arr_61 [i_4] [i_16] [(signed char)9] [10U] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_49 [i_4] [i_4] [i_12] [i_12] [i_17] [i_4] [i_5])) & (((/* implicit */int) arr_56 [i_4] [i_5] [i_12]))))) ? (1712809550710918611LL) : (((/* implicit */long long int) ((/* implicit */int) (short)3759)))));
                    }
                    arr_62 [i_4] [i_4] [i_16] [i_4] = ((/* implicit */short) (+((+(arr_21 [i_4] [i_5] [i_12] [i_16 + 1])))));
                }
                for (long long int i_18 = 0; i_18 < 19; i_18 += 1) 
                {
                    var_51 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((324594344U) << (((((/* implicit */int) (short)7021)) - (7003))))))));
                    arr_66 [(signed char)5] [(signed char)5] [i_18] [i_18] = ((/* implicit */unsigned char) -5282034501976663981LL);
                    var_52 = ((/* implicit */short) arr_60 [i_4]);
                }
                var_53 = (+(arr_37 [i_4] [i_4] [i_4] [i_4]));
            }
        }
        for (unsigned int i_19 = 0; i_19 < 19; i_19 += 4) 
        {
            arr_69 [i_19] = ((/* implicit */unsigned int) (~(min((((((/* implicit */int) (short)24048)) >> (((/* implicit */int) var_9)))), (((/* implicit */int) var_6))))));
            arr_70 [i_4] [(signed char)4] [(unsigned short)5] = ((/* implicit */unsigned long long int) arr_23 [i_4] [i_4]);
            /* LoopSeq 2 */
            for (short i_20 = 0; i_20 < 19; i_20 += 1) 
            {
                var_54 = ((/* implicit */long long int) (+(min((arr_38 [i_20] [i_20] [i_20] [i_19]), (arr_38 [(signed char)18] [i_4] [i_19] [i_4])))));
                arr_74 [i_4] [i_19] [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (arr_29 [i_4] [i_4] [i_4] [i_4])))) ? (((/* implicit */int) ((6450485534710921330LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) max(((unsigned short)29264), (((/* implicit */unsigned short) (unsigned char)130)))))))) ? (((/* implicit */int) arr_47 [i_20])) : (max(((~(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) min(((unsigned short)33225), (((/* implicit */unsigned short) (signed char)72)))))))));
                var_55 += ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_33 [i_4] [i_4] [i_4] [i_19] [i_20])) / (((((/* implicit */_Bool) arr_54 [i_4] [i_4] [i_4] [i_19])) ? (arr_41 [i_19]) : (arr_24 [i_4] [i_4])))));
            }
            /* vectorizable */
            for (signed char i_21 = 0; i_21 < 19; i_21 += 1) 
            {
                var_56 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-1)) % (((/* implicit */int) (unsigned short)65527))));
                arr_77 [i_4] [i_19] [i_21] [i_4] = ((/* implicit */unsigned short) (+(1264092538)));
                arr_78 [i_21] = ((/* implicit */unsigned long long int) (_Bool)1);
                var_57 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) / (arr_15 [i_4] [i_19])));
            }
        }
        for (short i_22 = 2; i_22 < 15; i_22 += 2) 
        {
            var_58 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_23 [i_4] [i_22])))), (((/* implicit */int) arr_51 [i_4] [i_22] [i_4] [i_22 - 1] [i_22 + 2] [i_4]))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_23 = 4; i_23 < 17; i_23 += 2) 
            {
                var_59 = ((/* implicit */long long int) max((var_59), (((/* implicit */long long int) (+(arr_76 [i_23 - 3]))))));
                var_60 -= ((/* implicit */_Bool) arr_47 [i_22 - 1]);
                var_61 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_49 [i_4] [i_4] [i_22 + 3] [i_22] [i_22 - 2] [i_22 + 2] [i_23 - 2])) + (2147483647))) >> (((/* implicit */int) arr_16 [i_23 - 4] [i_23 + 2] [i_23 - 1]))));
            }
            for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
            {
                var_62 = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) arr_33 [i_24 - 1] [i_24] [i_24] [i_24] [i_24 - 1])), (arr_41 [(_Bool)1]))), (((/* implicit */long long int) ((((arr_37 [i_22 + 4] [i_22 - 2] [i_22 - 2] [i_22]) + (2147483647))) >> (((max((((/* implicit */long long int) arr_58 [i_4] [i_22] [i_24 - 1] [i_22] [i_4] [i_4] [i_22])), (arr_24 [i_4] [i_4]))) - (1980336010LL))))))));
                arr_86 [i_4] [i_22] [i_4] [i_24] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_28 [i_4] [i_22] [i_4])), ((-(arr_21 [i_4] [i_22 - 2] [i_24 - 1] [i_22 + 4])))));
                arr_87 [i_4] [i_22 + 3] = ((/* implicit */signed char) (+(((/* implicit */int) (short)-27840))));
            }
            var_63 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_28 [i_22] [i_22 - 2] [12ULL])) == (((/* implicit */int) (_Bool)0))))) != (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) > (10078554223150273426ULL)))))))));
            /* LoopNest 3 */
            for (short i_25 = 0; i_25 < 19; i_25 += 4) 
            {
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    for (unsigned long long int i_27 = 1; i_27 < 18; i_27 += 2) 
                    {
                        {
                            arr_96 [2LL] [i_22] [i_25] [i_22] [16LL] [i_26] [(signed char)18] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_68 [i_27 + 1])) || (((/* implicit */_Bool) arr_79 [5U] [i_22 + 3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 6663041458858915562ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_68 [i_27 - 1])))))));
                            var_64 = ((/* implicit */unsigned short) arr_41 [i_22 + 1]);
                            var_65 = ((/* implicit */short) min((var_65), (((/* implicit */short) max((((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) / ((+(var_7))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_80 [i_4] [i_22]))) * (arr_94 [i_4] [i_22 + 4] [i_25] [(short)17] [i_27 + 1]))))))));
                            arr_97 [i_4] [i_4] [i_4] [i_26] [i_4] [i_27 + 1] [i_4] = ((/* implicit */unsigned short) var_10);
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (short i_28 = 0; i_28 < 19; i_28 += 2) 
        {
            arr_100 [i_4] [i_4] [6] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_89 [i_4] [i_4] [i_4])) & (arr_92 [i_28])));
            /* LoopNest 2 */
            for (short i_29 = 0; i_29 < 19; i_29 += 1) 
            {
                for (unsigned int i_30 = 1; i_30 < 17; i_30 += 4) 
                {
                    {
                        var_66 = ((/* implicit */unsigned short) max((var_66), (((/* implicit */unsigned short) (-(((((arr_93 [(signed char)10] [i_28] [(_Bool)1] [i_30 + 1] [i_29] [i_29]) + (9223372036854775807LL))) << (((((/* implicit */int) (short)26016)) - (26016))))))))));
                        var_67 += ((/* implicit */unsigned int) arr_41 [i_4]);
                    }
                } 
            } 
        }
    }
    var_68 = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
}
