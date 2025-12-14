/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35835
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) (unsigned char)67))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)54)))))) & (((((/* implicit */_Bool) arr_2 [i_0] [19LL] [(unsigned char)21])) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0])))))))));
                    var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((arr_4 [i_0] [i_2]) < (((/* implicit */unsigned int) -1674566805)))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [(short)10] [(short)10]))))) ? (((/* implicit */unsigned int) 1674566819)) : (min((((/* implicit */unsigned int) arr_3 [i_0] [i_0])), (arr_4 [4LL] [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2])))));
                }
            } 
        } 
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32748))) : (arr_4 [i_0] [(short)2]))))))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 2; i_3 < 22; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_2 [i_3 + 1] [i_3 + 2] [i_3 + 1])) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)189)))) : (((/* implicit */int) (unsigned short)29454)))), (((((/* implicit */_Bool) (short)7686)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0]))))) : (((int) (short)-7686))))));
                    var_19 -= ((/* implicit */int) (_Bool)1);
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_3])) ? (((/* implicit */int) (short)-32751)) : (((/* implicit */int) arr_11 [16U] [i_3 - 2] [i_3] [i_3]))))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_3] [i_3] [i_3])) ? (3359018446863452423ULL) : (((/* implicit */unsigned long long int) 1674566801)))) : (((/* implicit */unsigned long long int) 173920599))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58190)) ? (((/* implicit */int) (short)7686)) : (((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        arr_14 [i_5] = ((/* implicit */unsigned int) arr_13 [i_5] [i_5]);
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_5] [i_5])) ? (arr_13 [i_5] [i_5]) : (arr_13 [i_5] [i_5])));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_18 [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_6])) ? (arr_13 [i_6] [i_6]) : (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_6] [i_6])))))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_6]))))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)61872)) : (((/* implicit */int) arr_9 [i_6] [i_6])))) : (((/* implicit */int) (_Bool)1))));
    }
    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (+(max((((/* implicit */int) var_2)), (var_10))))))));
    /* LoopNest 3 */
    for (unsigned char i_7 = 1; i_7 < 21; i_7 += 2) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (short i_9 = 0; i_9 < 23; i_9 += 4) 
            {
                {
                    arr_29 [i_7 + 2] [i_9] [i_8] [i_9] = ((/* implicit */unsigned int) ((((_Bool) (_Bool)1)) ? ((-(((/* implicit */int) ((_Bool) 300983818))))) : (((/* implicit */int) (unsigned char)221))));
                    var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_7] [i_7]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_7 + 2] [i_8] [i_9]))));
                        arr_32 [i_10] [i_10] [i_9] [(unsigned short)10] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1674566805)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_8] [i_8]))) : (4261039859U)))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_7 + 2] [i_8])) - (((/* implicit */int) arr_10 [i_8] [i_8]))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_11 = 0; i_11 < 23; i_11 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned short) arr_31 [i_7] [i_7] [i_7] [i_8]);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_12 = 0; i_12 < 23; i_12 += 1) 
                        {
                            var_28 = ((/* implicit */_Bool) ((arr_20 [i_7 + 2] [i_7]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [2U] [i_8]))));
                            arr_37 [i_8] [(short)19] [(short)19] [i_12] [i_12] = ((/* implicit */signed char) arr_9 [i_7 - 1] [i_8]);
                            var_29 |= ((/* implicit */unsigned char) arr_20 [(short)0] [i_8]);
                            var_30 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23256)) ? (arr_33 [i_7] [i_8] [i_9] [i_11] [i_12]) : (((/* implicit */int) (short)7657))))));
                            arr_38 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_11] [i_8] [i_11] = (_Bool)0;
                        }
                        for (short i_13 = 1; i_13 < 21; i_13 += 4) 
                        {
                            var_31 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_7 + 1])) ? (((/* implicit */int) arr_19 [i_8])) : (((/* implicit */int) (_Bool)1))))) ? (((arr_24 [(short)5] [i_11]) ? (arr_39 [i_7 + 1] [i_7 + 1] [i_7] [19U] [i_7 + 1]) : (arr_39 [i_7] [i_8] [i_9] [i_9] [i_13]))) : (((((/* implicit */int) (short)(-32767 - 1))) ^ (arr_39 [i_7 + 1] [i_8] [2ULL] [i_11] [i_13])))));
                            var_32 &= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_39 [i_13 - 1] [i_7] [i_9] [i_11] [21LL])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)13))))));
                        }
                        for (int i_14 = 0; i_14 < 23; i_14 += 1) 
                        {
                            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) min(((short)-32751), ((short)14))))));
                            arr_43 [i_8] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_7] [i_8] [i_7 + 2])) ? (((((/* implicit */_Bool) arr_2 [i_7] [i_7] [i_7 - 1])) ? (arr_2 [i_7] [i_7 + 1] [i_7 + 1]) : (((/* implicit */int) arr_19 [(short)11])))) : ((+(((/* implicit */int) (short)-24345))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6839))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_7 + 2] [i_7] [i_7 + 1])) ? (((/* implicit */int) arr_1 [i_8])) : (((/* implicit */int) arr_42 [i_7 + 1] [i_8] [i_9] [i_8] [i_8]))))) ? (((((/* implicit */_Bool) 16573578537573280015ULL)) ? (1873165536136271600ULL) : (((/* implicit */unsigned long long int) arr_12 [i_7])))) : (((((/* implicit */_Bool) 281472829227008ULL)) ? (arr_27 [i_8] [i_8] [i_9] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_7] [i_7])))))))));
                            var_34 &= ((/* implicit */unsigned short) 18446744073709551603ULL);
                            var_35 -= ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_0 [i_7] [i_7])))))), (((((/* implicit */_Bool) (short)-9)) ? (((/* implicit */int) arr_20 [i_7 + 1] [i_7 + 1])) : (((/* implicit */int) (short)21045))))));
                        }
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) (short)21858))))))));
                        arr_46 [i_7 + 2] [i_8] [i_7 + 2] [i_7 + 1] [(unsigned char)11] [(short)16] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -471132786)) ? (((/* implicit */int) arr_11 [i_7] [i_8] [i_8] [i_9])) : (((/* implicit */int) (signed char)-84))))) ? ((((_Bool)1) ? (13ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_30 [(signed char)9] [i_8] [i_9] [i_8]), (((/* implicit */unsigned short) (unsigned char)173))))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)21845)) >> (((((int) (short)-26155)) + (26182)))))) : (arr_34 [i_7]));
                        arr_47 [i_7] [i_8] [(unsigned short)11] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)-14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_7] [i_7 - 1])))), (((arr_36 [i_7] [i_7]) ? (arr_25 [i_7 + 2] [(short)1] [i_7]) : (((/* implicit */int) (short)26181))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (arr_13 [(short)23] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_3 [i_7] [i_8])))))) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_7] [i_7] [i_7] [i_8])))));
                    }
                    for (int i_16 = 0; i_16 < 23; i_16 += 1) 
                    {
                        arr_50 [i_7] [i_7] [i_7] [i_8] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_21 [i_7 + 1])) && (((/* implicit */_Bool) 11U)))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) max((arr_19 [(signed char)16]), (arr_19 [i_7])))) ? ((+(((/* implicit */int) (short)-11489)))) : (arr_39 [(unsigned char)18] [i_8] [i_8] [i_8] [i_8])))));
                        var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) (-2147483647 - 1)))));
                        var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_9])) ? (((/* implicit */int) arr_41 [i_7] [i_7] [i_7 - 1] [i_7] [i_7] [i_9])) : (((/* implicit */int) arr_0 [i_7] [i_7]))))) ? (((((/* implicit */_Bool) arr_40 [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_7] [i_8] [i_9] [i_16]))) : (arr_34 [17U]))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)0), ((_Bool)1))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)1920))))))))));
                    }
                }
            } 
        } 
    } 
    var_39 = ((/* implicit */_Bool) var_13);
}
