/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242807
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
    var_12 = ((/* implicit */unsigned char) ((((min((((/* implicit */long long int) (short)-28711)), (var_4))) / (((/* implicit */long long int) (~(((/* implicit */int) (short)28710))))))) > (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_6)), (var_8)))))));
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_8))))) : (var_0)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 17U)), (var_3)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-28710)))) : (((((/* implicit */_Bool) (short)28710)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))))) : (min(((~(-207137581873141748LL))), (((/* implicit */long long int) ((unsigned int) (_Bool)1)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28710)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)197))))) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) arr_5 [(short)6] [(short)6]))));
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((int) ((arr_4 [i_0]) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1 + 1]))) < (var_0)))) : (((((/* implicit */int) var_8)) - (((/* implicit */int) (_Bool)1)))))));
            /* LoopSeq 4 */
            for (unsigned char i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)28722)) ? (((/* implicit */unsigned long long int) -207137581873141748LL)) : (7658775646769511189ULL)));
                arr_10 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))));
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (~(((/* implicit */int) ((arr_9 [i_0 - 1] [i_1 + 1] [i_2 - 1] [i_2 + 2]) == (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)896))) - (arr_9 [i_2] [i_2] [i_2] [i_2])))))))))));
                arr_11 [i_2 + 1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_4 [i_0]))))));
            }
            for (unsigned int i_3 = 1; i_3 < 16; i_3 += 2) 
            {
                arr_14 [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) (((+(((((var_4) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_1 [i_0] [i_0])) - (16964))))))) ^ (((long long int) ((((/* implicit */int) var_2)) - (((/* implicit */int) (unsigned char)133)))))));
                arr_15 [i_0] [i_1] [i_3 - 1] = ((/* implicit */unsigned char) (short)-5484);
            }
            for (unsigned int i_4 = 1; i_4 < 15; i_4 += 2) 
            {
                var_17 = ((/* implicit */int) (signed char)-77);
                arr_19 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1 - 1] [i_0])) ? (var_11) : (((/* implicit */long long int) arr_12 [i_1 - 1] [i_1] [i_1 - 1] [i_0]))))) ? (((int) (unsigned short)39837)) : (((/* implicit */int) ((unsigned short) var_10)))));
                var_18 = ((/* implicit */_Bool) (~(max((arr_16 [i_0 - 1] [i_0 + 1] [i_1 + 1]), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_4 + 2]))) | (var_3))))))));
                /* LoopSeq 3 */
                for (int i_5 = 1; i_5 < 17; i_5 += 4) 
                {
                    arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_20 [i_0] [i_1] [i_4] [i_4])) - (((/* implicit */int) (unsigned char)0))))))) * (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_1] [i_1]))) : (12530650738182143824ULL)))));
                    var_19 = ((/* implicit */unsigned int) max((6354635588476691959LL), (((/* implicit */long long int) var_9))));
                    /* LoopSeq 3 */
                    for (unsigned short i_6 = 4; i_6 < 15; i_6 += 2) 
                    {
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (arr_12 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_6])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_0 [i_6]))))) : (((/* implicit */int) var_1)))))));
                        var_21 &= ((/* implicit */unsigned long long int) ((arr_2 [i_1]) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((var_5) >> (((arr_18 [i_1] [i_5 - 1] [i_6]) - (3760853888U)))))))) : (((var_0) - (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                        arr_26 [i_0] [i_0] [i_4] [i_5 - 1] = ((/* implicit */short) ((((/* implicit */long long int) (~(((((/* implicit */int) var_8)) | (((/* implicit */int) arr_3 [i_0]))))))) & (((2101036078640294464LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_4 - 1] [i_5 + 1])))))));
                    }
                    for (unsigned int i_7 = 1; i_7 < 17; i_7 += 4) /* same iter space */
                    {
                        arr_30 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_7 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(var_0))) * (((/* implicit */long long int) ((0) * (((/* implicit */int) arr_3 [i_0])))))))) ? ((+(12504882426969647099ULL))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) ^ (arr_12 [i_0] [i_0] [i_5] [i_0])))), ((((_Bool)1) ? (12530650738182143814ULL) : (((/* implicit */unsigned long long int) 0))))))));
                        arr_31 [i_0] [i_0] [i_0] [i_0] [i_7] = ((/* implicit */long long int) (~((~(((/* implicit */int) ((unsigned char) (_Bool)1)))))));
                    }
                    for (unsigned int i_8 = 1; i_8 < 17; i_8 += 4) /* same iter space */
                    {
                        var_22 ^= ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)0)), ((unsigned char)255)));
                        arr_36 [i_0] [i_1] [i_4] [i_0] [i_0] = ((long long int) 0ULL);
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) -7363631005598640610LL)) ? (((/* implicit */long long int) 1133577157U)) : (5861572003367378318LL)));
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_12 [i_0] [i_0] [i_0 + 2] [8LL])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (-7363631005598640610LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) : (((17261893771844879740ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_1] [i_0] [i_5 + 1] [i_8 - 1])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)38858))))) ? ((+(25ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)1))))))))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) arr_21 [i_0] [i_4 + 1] [i_5] [i_9]);
                        arr_40 [i_0] [i_0] [i_4 + 2] [i_0] [i_4 + 2] [i_9] [i_0] = ((/* implicit */unsigned int) var_4);
                        arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned char) arr_28 [i_0] [i_4] [i_4] [i_4 + 1] [i_0]))), ((~(((/* implicit */int) arr_28 [i_0] [i_9] [i_9] [i_4 + 1] [i_0]))))));
                        arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_9] = min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_17 [i_0]))))), (-6410007944856096898LL));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned int) arr_39 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        arr_45 [i_0] [i_0 + 2] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((short) ((((var_10) <= (((/* implicit */long long int) ((/* implicit */int) var_7))))) ? (var_0) : (((/* implicit */long long int) (-(((/* implicit */int) var_1))))))));
                        var_27 = ((/* implicit */_Bool) ((6410007944856096898LL) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0 + 2])) ? (-7403331406622759115LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50065)))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) * (((/* implicit */int) arr_3 [i_0]))))) : (max((var_10), (((/* implicit */long long int) var_5))))))));
                    }
                    /* LoopSeq 3 */
                    for (short i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        arr_48 [i_0] [i_0] [i_0] [i_0] = (+(((((/* implicit */_Bool) ((0LL) % (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_0 + 2] [i_1 + 1] [i_1 + 1] [i_0] [i_0 + 2])))))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */int) arr_17 [i_0])) ^ (((/* implicit */int) arr_20 [i_0 + 2] [i_0 + 2] [i_5] [i_5])))))));
                        arr_49 [i_0] [i_4] [i_1] [i_4] [i_1] [i_1] [i_0] = ((/* implicit */short) ((var_0) - (((/* implicit */long long int) min((arr_33 [i_0] [i_1 - 1] [i_0] [i_5 + 1] [i_0 + 2]), (arr_33 [i_0] [i_1] [i_11] [i_5] [i_0 + 2]))))));
                    }
                    for (unsigned char i_12 = 2; i_12 < 15; i_12 += 2) /* same iter space */
                    {
                        var_28 ^= ((/* implicit */int) (+(18129570429272983964ULL)));
                        var_29 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0 + 1] [i_12 + 3] [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_16 [i_0 - 1] [i_0 - 1] [i_0 - 1])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_20 [i_0 - 1] [i_1 - 1] [i_1] [i_5 - 1]))))) : ((-((-(3622751730U)))))));
                        arr_53 [i_4] [i_0] [i_5] [i_4] [i_4] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(max((((/* implicit */long long int) arr_17 [i_0])), (var_3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0])) ? (arr_9 [i_0] [i_0] [i_0 + 2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((arr_20 [i_12] [i_12] [i_12] [i_12]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (10787968426940040427ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32670)))))));
                    }
                    for (unsigned char i_13 = 2; i_13 < 15; i_13 += 2) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */_Bool) 3662065235975881957ULL)) ? (10787968426940040426ULL) : (((/* implicit */unsigned long long int) arr_12 [i_4 + 3] [i_4 + 3] [i_4] [i_0]))))));
                        var_31 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-20209)) ? ((-(((/* implicit */int) (unsigned char)247)))) : ((-(((/* implicit */int) (unsigned short)59156))))))), (18446744073709551615ULL)));
                        arr_57 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) (~((~(var_10))))));
                        arr_58 [i_0] [i_1 + 1] [i_4] [i_1 + 1] [i_13] = ((/* implicit */_Bool) var_9);
                    }
                }
                for (unsigned long long int i_14 = 2; i_14 < 16; i_14 += 2) 
                {
                    arr_61 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (short)-20186)), ((+(-781395778529993708LL)))));
                    arr_62 [i_0] [i_0] = (((+((+(((/* implicit */int) (short)-21437)))))) > ((~(((/* implicit */int) arr_1 [i_0] [i_0])))));
                }
                for (int i_15 = 1; i_15 < 17; i_15 += 4) 
                {
                    var_32 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((arr_2 [i_0]) ? (6257960004881024038LL) : (((/* implicit */long long int) ((/* implicit */int) (short)5206)))))) || (((/* implicit */_Bool) (+(arr_16 [i_0 + 2] [i_0 + 2] [i_4])))))) ? (min((max((((/* implicit */unsigned long long int) var_4)), (arr_44 [i_0] [i_1] [i_1] [i_15] [i_15]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)27491)) <= (((/* implicit */int) (short)1819))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20208)))));
                    arr_65 [i_0] [i_0] = (+(var_0));
                }
            }
            for (unsigned short i_16 = 0; i_16 < 18; i_16 += 2) 
            {
                arr_68 [i_0] [i_1] [i_16] [i_16] |= arr_1 [i_0] [i_1 + 1];
                var_33 = (~(((/* implicit */int) (unsigned short)5787)));
                var_34 -= ((/* implicit */unsigned long long int) max((((/* implicit */int) var_8)), (min((arr_35 [i_0 + 2] [i_16]), (((/* implicit */int) (unsigned char)100))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_17 = 0; i_17 < 18; i_17 += 2) 
                {
                    var_35 = ((/* implicit */int) ((((max((var_4), (var_11))) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)156)) - (156)))));
                    arr_71 [i_0 + 2] [i_0 + 2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_9);
                }
                arr_72 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_4)), ((+(((unsigned long long int) var_7))))));
            }
        }
        /* vectorizable */
        for (short i_18 = 2; i_18 < 15; i_18 += 4) /* same iter space */
        {
            var_36 = ((/* implicit */unsigned short) (+((~(arr_52 [i_18] [i_0])))));
            var_37 = ((/* implicit */short) ((((((/* implicit */int) (unsigned char)109)) | (((/* implicit */int) (unsigned short)240)))) >> (((((((/* implicit */_Bool) (unsigned short)41601)) ? (((/* implicit */int) (short)14753)) : (((/* implicit */int) var_7)))) - (14748)))));
        }
        for (short i_19 = 2; i_19 < 15; i_19 += 4) /* same iter space */
        {
            arr_79 [i_0 + 2] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) min((((/* implicit */short) arr_77 [i_0 - 1])), (var_8)))), (((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)242)) || (((/* implicit */_Bool) arr_73 [i_0] [i_0]))))) - ((+(((/* implicit */int) (short)27491))))))));
            arr_80 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned short) (unsigned char)50)), (((unsigned short) ((((/* implicit */_Bool) 1355460533)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
            var_38 = ((/* implicit */_Bool) ((short) 15299111953674959095ULL));
        }
        var_39 = ((/* implicit */signed char) (unsigned short)0);
        var_40 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_0] [i_0 + 2])) : (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)65529))))))) || (((/* implicit */_Bool) ((int) (short)18645)))));
        /* LoopSeq 1 */
        for (short i_20 = 3; i_20 < 17; i_20 += 4) 
        {
            arr_84 [i_0] = ((/* implicit */unsigned short) ((long long int) var_2));
            var_41 *= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((arr_21 [i_0] [i_20] [i_0] [i_20]) > (arr_21 [i_0] [i_0] [i_20 - 3] [i_20 - 3])))), (((((/* implicit */long long int) arr_21 [i_20] [i_0] [i_0] [i_0])) ^ (8110299814334048208LL)))));
        }
        arr_85 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 4985424017664734425ULL)))) % (7054960320549090651LL)));
    }
}
