/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225833
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
    for (int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0 + 1] &= ((/* implicit */unsigned long long int) ((((-1LL) <= (max((((/* implicit */long long int) 4099834017U)), (arr_1 [i_0]))))) ? (max((((/* implicit */long long int) var_0)), (max((((/* implicit */long long int) (unsigned short)44955)), (arr_0 [i_0 - 2]))))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_11 &= ((-5709551427304762720LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50327))));
            var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) max((((9109752912113394291LL) + (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 3] [i_0 + 4] [i_0 - 2]))))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)232))))))))));
        }
        for (short i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    for (unsigned short i_5 = 2; i_5 < 13; i_5 += 3) 
                    {
                        {
                            arr_16 [(short)8] [i_2] [i_0] = ((/* implicit */unsigned char) -9109752912113394291LL);
                            arr_17 [i_5] [i_2] [i_3] [i_2] [i_3] [i_3] [i_0] = ((/* implicit */int) ((unsigned int) ((unsigned long long int) arr_4 [i_5 - 2] [i_0 + 4] [i_0 + 4])));
                        }
                    } 
                } 
                var_13 |= ((((/* implicit */_Bool) 134217727U)) ? (((/* implicit */long long int) 4107707787U)) : (9109752912113394314LL));
                var_14 = ((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned int) arr_8 [i_3] [i_2] [13LL]))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 2; i_6 < 12; i_6 += 1) 
                {
                    for (int i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        {
                            var_15 += ((/* implicit */short) (!(((/* implicit */_Bool) -5709551427304762720LL))));
                            arr_26 [i_0] [i_2] [i_3] [i_2] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_9 [i_6 + 2] [i_6 - 2] [i_2] [i_6]) % (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? ((-(19LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [(unsigned char)0] [i_6 - 1] [i_6 - 1] [i_2] [(unsigned char)0])) ? (((/* implicit */int) arr_14 [i_6 + 2] [i_6 + 2] [i_6 - 2] [i_2] [i_6])) : (((/* implicit */int) var_2)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    for (unsigned short i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(arr_1 [i_0 - 1])))), (max((max((((/* implicit */unsigned long long int) var_10)), (arr_12 [i_2] [(unsigned short)1] [i_3] [i_2]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)122)))))))));
                            arr_34 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) ((max((((/* implicit */unsigned long long int) arr_28 [i_8] [i_2] [i_2] [i_8] [i_3] [i_0 + 3])), (arr_19 [i_0 + 1] [i_0] [i_0 + 4] [i_0 + 1] [i_0 + 4]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21537))))));
                        }
                    } 
                } 
            }
            for (long long int i_10 = 3; i_10 < 11; i_10 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 14; i_11 += 3) 
                {
                    for (unsigned short i_12 = 0; i_12 < 14; i_12 += 2) 
                    {
                        {
                            arr_43 [i_0] [i_0] [i_2] [i_10 + 2] [i_2] [i_2] [i_12] = ((/* implicit */unsigned int) (unsigned short)16549);
                            arr_44 [i_2] [i_2] [i_11] [i_11] [i_11] = ((unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_25 [i_0] [i_2] [i_0] [i_11] [i_0]))))) ? (((unsigned int) var_10)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_12] [i_2] [i_10 - 1] [i_2] [i_0 + 1]))) : (arr_36 [i_12] [i_2] [i_2] [i_0])))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (long long int i_13 = 0; i_13 < 14; i_13 += 1) 
                {
                    arr_47 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((_Bool) 5742793757503496521LL))), (4007935177U)))) ? (((/* implicit */int) (short)32761)) : (((/* implicit */int) var_2))));
                    var_17 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) 19LL))) ? (((/* implicit */int) arr_4 [i_0 - 2] [i_2] [i_13])) : (((/* implicit */int) (_Bool)0)))));
                }
                for (int i_14 = 0; i_14 < 14; i_14 += 1) 
                {
                    arr_50 [i_0 + 4] [i_0 + 4] [i_2] = ((/* implicit */short) max((((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) (-(arr_45 [i_10 + 2] [i_10 + 2]))))));
                    arr_51 [i_2] [i_2] [i_2] [(_Bool)1] [i_2] = ((/* implicit */unsigned char) max((9109752912113394291LL), (((/* implicit */long long int) (unsigned char)218))));
                }
                for (long long int i_15 = 0; i_15 < 14; i_15 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_16 = 0; i_16 < 14; i_16 += 1) 
                    {
                        arr_57 [i_2] [i_2] [i_16] = ((/* implicit */unsigned int) max((((/* implicit */short) arr_35 [i_0 + 4] [i_0 + 4] [i_0 + 4] [i_0 + 4])), (max((((/* implicit */short) (unsigned char)45)), ((short)27248)))));
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) max(((-(((/* implicit */int) var_3)))), ((-(((/* implicit */int) arr_27 [i_0] [i_0])))))))));
                    }
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((arr_22 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) (unsigned short)4160))))) > (-9109752912113394291LL)));
                }
            }
            var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))), ((-(arr_21 [i_0 + 3] [(unsigned char)9] [(unsigned char)9] [i_0 + 4] [i_0])))));
            arr_58 [i_2] = ((/* implicit */short) max((((/* implicit */unsigned int) max((arr_11 [i_2] [i_0 - 2] [i_2] [i_2]), (((/* implicit */unsigned short) arr_31 [i_0 + 3] [i_0 + 2] [10LL]))))), (((arr_54 [i_2] [i_0] [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_0] [i_2]) << (19LL)))));
            var_21 -= ((/* implicit */_Bool) (((-(-5613475108247516825LL))) >> (((max((((/* implicit */unsigned int) (short)-27264)), (703914213U))) - (4294940018U)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1])));
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 1; i_18 < 11; i_18 += 4) 
                {
                    for (unsigned char i_19 = 1; i_19 < 13; i_19 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [i_0 + 2] [i_0 + 1] [i_0 + 4] [i_0] [i_0 + 2] [i_2])) || (((/* implicit */_Bool) arr_39 [i_17] [i_17] [i_17] [i_17] [i_17] [i_2]))));
                            var_24 = ((/* implicit */unsigned int) ((16LL) == (((/* implicit */long long int) (~(((/* implicit */int) (short)-27264)))))));
                        }
                    } 
                } 
            }
        }
    }
    for (int i_20 = 1; i_20 < 18; i_20 += 2) 
    {
        var_25 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)30504))));
        arr_69 [i_20] [i_20] = ((/* implicit */unsigned char) ((unsigned int) ((((((/* implicit */_Bool) arr_65 [i_20])) ? (((/* implicit */int) (short)27268)) : (((/* implicit */int) (short)-27248)))) >> (((((/* implicit */int) (short)-6663)) + (6674))))));
        var_26 = ((/* implicit */unsigned short) arr_67 [i_20 + 1] [i_20 + 3]);
    }
    for (unsigned long long int i_21 = 0; i_21 < 19; i_21 += 2) 
    {
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7U)) ? (((/* implicit */int) (short)-27264)) : (((/* implicit */int) (unsigned short)35776))));
        arr_73 [5ULL] = ((((/* implicit */_Bool) (short)27291)) ? (((long long int) (unsigned short)40647)) : (((/* implicit */long long int) ((unsigned int) (unsigned char)255))));
        var_28 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)31462)) >> (((4294967288U) - (4294967274U)))))) ? (((((/* implicit */_Bool) var_1)) ? (13LL) : (((/* implicit */long long int) arr_70 [i_21])))) : (((/* implicit */long long int) arr_70 [i_21]))));
    }
    var_29 = max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) (short)32751)) ? (7911901266660909436ULL) : (((/* implicit */unsigned long long int) 9109752912113394270LL)))));
    var_30 = ((/* implicit */unsigned short) ((short) (unsigned char)0));
    var_31 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 9223372036854775807LL)))) / (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (var_4)))));
}
