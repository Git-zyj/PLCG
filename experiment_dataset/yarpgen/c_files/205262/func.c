/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205262
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)37152)) + (((/* implicit */int) (unsigned char)187))));
                            arr_12 [i_3] [i_1] = ((((/* implicit */unsigned long long int) (-(547095920)))) * (max((arr_10 [i_3] [i_3] [i_2] [i_2] [i_1] [i_0]), (arr_3 [i_3] [i_1]))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    for (unsigned char i_5 = 2; i_5 < 11; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 10; i_6 += 2) 
                        {
                            {
                                arr_20 [i_6] [i_6] [i_0] [i_5] [(signed char)0] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_14 [i_0] [i_0] [i_5 - 1] [i_5 - 1]), (arr_14 [i_0] [i_1] [i_5 + 1] [i_0]))))) * (((0U) + (((/* implicit */unsigned int) 547095930))))));
                                arr_21 [i_0] [(_Bool)1] [i_4] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_6 - 2] [i_6 - 2] [i_1])) + ((~(((/* implicit */int) ((signed char) var_8)))))));
                                arr_22 [i_0] [i_5] [i_4] [0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [8U] [(_Bool)1] [i_0] [i_0])), (arr_15 [i_0] [i_1] [i_0] [i_5] [i_6]))), (((((/* implicit */_Bool) -547095920)) ? (arr_19 [i_4] [i_4]) : (((/* implicit */unsigned long long int) 547095930))))))) ? (((/* implicit */int) arr_2 [i_6 - 2])) : (106459988)));
                                arr_23 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (_Bool)0))) ? (((/* implicit */int) arr_16 [i_0] [i_0])) : (var_0)))), (min((((/* implicit */unsigned long long int) arr_9 [i_5 + 1] [i_6 - 2] [(unsigned short)11] [i_6])), (arr_10 [i_5 - 1] [11U] [i_5] [i_5] [i_5] [i_5])))));
                                arr_24 [i_0] [i_1] [(unsigned short)10] [i_0] [(short)8] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_4] [i_6 + 2])) % (((/* implicit */int) arr_5 [(unsigned short)9] [(short)8] [(short)8]))))) % (((min((8728753399390755371LL), (((/* implicit */long long int) var_12)))) - (((/* implicit */long long int) ((/* implicit */int) max((var_9), (((/* implicit */short) var_1))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    for (unsigned int i_8 = 2; i_8 < 11; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 2; i_9 < 11; i_9 += 4) 
                        {
                            {
                                arr_32 [i_9] [i_8 + 1] [i_7] [i_1] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_1 [i_9])), (17973041141019001931ULL))), (((((/* implicit */_Bool) arr_26 [i_9] [i_8] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)184))) : (arr_10 [4] [4] [i_7] [5ULL] [(signed char)10] [i_0])))))) || (((/* implicit */_Bool) min((((/* implicit */int) arr_25 [i_0] [i_9 - 2] [i_8 - 2])), (arr_0 [i_0]))))));
                                arr_33 [i_9] [i_1] [i_7] [i_9 + 1] &= ((/* implicit */unsigned char) ((unsigned long long int) ((((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [(unsigned char)1] [i_0] [i_0])) || (((/* implicit */_Bool) 8728753399390755379LL)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_30 [4ULL] [i_8] [(unsigned short)7] [i_1]))))) : (arr_19 [i_9] [i_9 - 1]))));
                                arr_34 [6ULL] [i_7] [i_7] = ((/* implicit */unsigned short) var_10);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 4) 
    {
        for (unsigned char i_11 = 0; i_11 < 11; i_11 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_12 = 0; i_12 < 11; i_12 += 4) 
                {
                    for (unsigned short i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        for (unsigned int i_14 = 2; i_14 < 10; i_14 += 3) 
                        {
                            {
                                arr_48 [i_10] [i_11] = ((/* implicit */short) 8468572145060573737ULL);
                                arr_49 [(_Bool)0] [i_11] [i_14] [i_14 - 2] [i_11] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((int) 8468572145060573737ULL)) | (arr_44 [i_10] [i_11] [i_14 - 2] [i_14] [0U])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -547095920)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(unsigned short)10] [i_11] [i_12] [7ULL] [i_10] [i_12]))) : (5758025281919577748ULL)))) ? (max((arr_10 [(short)9] [i_11] [i_12] [i_12] [i_13] [3U]), (arr_19 [i_13] [i_12]))) : ((+(arr_15 [i_10] [i_10] [i_10] [i_11] [i_14]))))) : (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (short)12632)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (unsigned char i_16 = 0; i_16 < 11; i_16 += 1) 
                    {
                        {
                            arr_55 [i_10] [i_11] [i_15] [i_16] [i_15] = ((/* implicit */unsigned short) arr_43 [i_16]);
                            arr_56 [i_11] [i_11] = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) (short)-23650)) : (((/* implicit */int) var_11)))) % (((/* implicit */int) arr_4 [i_10] [i_16] [(short)8]))));
                            arr_57 [i_10] [i_11] [i_15] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_3 [i_16] [i_10]), (arr_3 [i_10] [i_10])))) ? (max((((/* implicit */unsigned long long int) var_1)), (arr_3 [i_10] [i_10]))) : ((-(arr_3 [i_15] [(unsigned char)4])))));
                            arr_58 [i_11] [i_15] [2ULL] [i_11] |= ((/* implicit */unsigned long long int) (-(min((((((/* implicit */_Bool) -547095920)) ? (((/* implicit */int) arr_1 [i_16])) : (-547095930))), (((/* implicit */int) arr_7 [i_10] [i_15] [i_16]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_17 = 0; i_17 < 13; i_17 += 2) 
    {
        for (unsigned char i_18 = 0; i_18 < 13; i_18 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_19 = 1; i_19 < 12; i_19 += 1) 
                {
                    for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                    {
                        {
                            arr_68 [i_20 + 1] [i_17] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_59 [i_17] [i_20]))) + (max((max((arr_60 [i_17] [i_20]), (((/* implicit */long long int) arr_64 [3] [i_19])))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (arr_64 [i_19] [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_17]))))))))));
                            arr_69 [i_17] [i_18] [(_Bool)1] [i_20 + 1] [(signed char)8] [i_19] = ((/* implicit */short) arr_63 [i_17]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_21 = 1; i_21 < 11; i_21 += 1) 
                {
                    for (unsigned short i_22 = 0; i_22 < 13; i_22 += 1) 
                    {
                        {
                            arr_75 [i_22] [i_18] [i_22] [i_22] [i_22] = ((/* implicit */_Bool) (-(min((8728753399390755384LL), (((/* implicit */long long int) (~(arr_61 [(unsigned short)5]))))))));
                            arr_76 [i_17] [i_18] [7ULL] [i_22] = ((/* implicit */short) min((min((max((9857379497559724807ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (max((((/* implicit */unsigned long long int) -547095917)), (var_13))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8728753399390755380LL)) ? (((/* implicit */unsigned long long int) 1594443371)) : (arr_73 [i_17] [10U])))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_71 [6ULL] [6ULL] [i_21]))))))))));
                            arr_77 [i_22] [i_18] [i_21] [i_21] [i_21] [i_18] = ((/* implicit */short) ((unsigned char) ((arr_74 [i_21 + 2] [i_22]) / (arr_74 [i_21 - 1] [i_22]))));
                            arr_78 [i_18] [i_21] [(_Bool)1] [i_18] = 2511070835U;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_23 = 0; i_23 < 13; i_23 += 1) 
                {
                    for (unsigned char i_24 = 0; i_24 < 13; i_24 += 1) 
                    {
                        {
                            arr_85 [(unsigned char)3] [0] [i_23] [i_24] = ((/* implicit */int) 8201053923578822721ULL);
                            arr_86 [i_23] [i_18] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (arr_74 [i_17] [i_18])))) ? (((/* implicit */unsigned int) arr_84 [i_24] [i_23] [(_Bool)1] [i_17])) : (var_8)));
                            arr_87 [i_24] = ((/* implicit */_Bool) (-((+(arr_63 [i_18])))));
                            arr_88 [i_24] [i_23] [i_18] [12U] = ((/* implicit */unsigned int) arr_61 [i_23]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_25 = 0; i_25 < 21; i_25 += 3) 
    {
        for (short i_26 = 0; i_26 < 21; i_26 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 21; i_27 += 4) 
                {
                    for (unsigned long long int i_28 = 1; i_28 < 18; i_28 += 1) 
                    {
                        {
                            arr_100 [i_25] [i_27] [10ULL] [i_25] = ((/* implicit */unsigned char) ((((8201053923578822721ULL) % (((/* implicit */unsigned long long int) -8728753399390755371LL)))) - (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_94 [i_26] [i_26])))))));
                            arr_101 [i_28] [14ULL] [i_25] [i_25] [(unsigned short)17] [i_25] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_95 [i_26] [i_27] [i_26])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_94 [i_25] [i_25]))) : (17787663480379377944ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_91 [i_25] [i_28]))))) : (((((/* implicit */_Bool) (short)-14218)) ? (-286518391) : (-1720753217)))))));
                            arr_102 [4ULL] [i_27] [i_25] [(unsigned short)3] [i_25] = ((/* implicit */long long int) ((arr_99 [(short)13] [i_25] [i_26] [i_27] [i_28 - 1]) ? (max((((/* implicit */unsigned long long int) ((1720753239) - (var_5)))), (4166700001929173147ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) 8728753399390755376LL))) & (((/* implicit */int) ((((/* implicit */_Bool) 1157668018)) && (((/* implicit */_Bool) (unsigned short)35732))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_29 = 0; i_29 < 21; i_29 += 4) 
                {
                    for (unsigned int i_30 = 0; i_30 < 21; i_30 += 4) 
                    {
                        {
                            arr_109 [i_25] [16ULL] [i_26] [i_25] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_14), (((/* implicit */long long int) arr_92 [i_25] [i_25] [i_25]))))) ? (((/* implicit */int) arr_93 [i_29] [i_25])) : (((/* implicit */int) arr_94 [2ULL] [i_25]))))), (max((((/* implicit */unsigned int) (~(1157668018)))), (((((/* implicit */_Bool) (unsigned short)49567)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)184))) : (var_7)))))));
                            arr_110 [i_25] [i_29] [8ULL] [12U] [i_30] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_90 [i_26])) - ((-(((/* implicit */int) arr_90 [i_30]))))));
                            arr_111 [i_29] [i_26] [i_26] [i_26] = ((/* implicit */unsigned int) (((((-(((/* implicit */int) (unsigned char)208)))) % (((/* implicit */int) (signed char)31)))) != ((~(((/* implicit */int) max(((short)31584), ((short)14243))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
