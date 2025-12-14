/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35519
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
    var_20 = ((/* implicit */short) ((unsigned short) max(((+(var_19))), (((/* implicit */unsigned int) var_6)))));
    var_21 = ((/* implicit */unsigned short) (-(var_13)));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_1] [i_3] [i_0] [13ULL] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) / (((arr_1 [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_4 [i_3] [i_3] [i_3] [i_3])))));
                        arr_10 [i_3] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_2] [i_3] [6ULL])) ? (((/* implicit */int) arr_7 [i_3] [i_1] [i_1] [i_1] [i_1] [(unsigned short)8])) : (((/* implicit */int) arr_7 [i_0] [i_1] [(_Bool)1] [i_0] [i_1] [i_3]))));
                        var_22 *= ((/* implicit */signed char) (-(arr_4 [i_0] [i_1] [i_2] [(signed char)8])));
                    }
                    for (signed char i_4 = 2; i_4 < 17; i_4 += 4) 
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_1] &= ((/* implicit */signed char) ((arr_13 [i_0] [5ULL] [i_0] [5ULL] [i_4]) + (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_18))))));
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            var_23 &= ((/* implicit */unsigned short) var_13);
                            arr_18 [i_0] [i_1] [i_2] [15LL] [(unsigned short)6] = ((max((((/* implicit */unsigned long long int) ((18446744073709551596ULL) <= (((/* implicit */unsigned long long int) var_17))))), ((~(487606124003733734ULL))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))));
                        }
                        for (short i_6 = 2; i_6 < 17; i_6 += 3) 
                        {
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((arr_8 [i_0] [i_4]) << (((-7389878906802591670LL) + (7389878906802591699LL))))) : (((/* implicit */unsigned long long int) (~(3315154333U))))))) ? (((/* implicit */long long int) (~(959601346)))) : (max((((/* implicit */long long int) max((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */short) arr_1 [i_0]))))), (max((((/* implicit */long long int) arr_16 [i_0] [i_1] [i_2] [i_4 - 2] [i_6])), (-7389878906802591670LL))))))))));
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (+((-(7389878906802591673LL))))))));
                            arr_21 [9ULL] [i_4] [i_4] [8ULL] [i_4] [(unsigned short)4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_4 + 1] [i_6 + 1] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_4 - 2] [i_6 + 1] [10] [i_0]))) : (arr_13 [i_1] [i_1] [i_4 - 2] [i_6 + 1] [i_6 - 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6677)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-88))) : (-7389878906802591671LL)))) ? (((/* implicit */int) arr_15 [13ULL] [13ULL] [i_6] [i_6 - 2] [i_6] [i_6 + 1])) : (((/* implicit */int) arr_20 [i_6 - 1] [i_4 + 1] [i_2])))) : ((+(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)55)), (arr_15 [i_4] [i_1] [i_1] [i_4] [i_6 - 1] [i_4 - 2]))))))));
                            arr_22 [i_4] = ((/* implicit */unsigned short) ((max((13974183774945639811ULL), (((/* implicit */unsigned long long int) arr_7 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4] [i_4] [i_6 - 2])))) ^ (((((/* implicit */_Bool) arr_11 [i_4 + 1] [i_4 - 2] [i_6] [i_4 + 1] [i_4 - 2])) ? (arr_11 [i_4 - 2] [i_4 + 1] [i_4] [i_4] [(unsigned short)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4 - 1] [i_4 - 2] [i_4 - 1] [i_6] [i_6] [i_6 - 2])))))));
                        }
                        arr_23 [(unsigned short)8] [i_1] [i_1] [i_2] [i_4 - 1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_1] [10U] [i_4 - 2])) ? (((/* implicit */int) ((unsigned char) arr_13 [i_0] [7ULL] [i_2] [i_4] [i_0]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [(unsigned char)12] [i_4])) || (((/* implicit */_Bool) -7389878906802591670LL)))))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_12 [i_1] [i_2] [i_4 - 2]))))) & (arr_4 [(short)4] [i_4 + 1] [i_4] [i_4 - 1])))));
                        arr_24 [i_0] [i_1] [12ULL] [i_4 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)26736)) ? (((/* implicit */int) (unsigned short)5)) : (((/* implicit */int) ((unsigned short) var_8)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)0)))) : (-1LL)));
                        var_26 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_4)) ? (arr_11 [i_0] [i_1] [i_2] [i_4] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_2] [i_4] [i_1]))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 2; i_7 < 16; i_7 += 3) 
                    {
                        var_27 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_7 + 1])) ? (((/* implicit */int) arr_12 [i_2] [i_2] [i_0])) : (arr_19 [i_7 - 1] [i_7 - 2] [i_7 - 1] [i_7 - 1] [i_7 + 1])))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)10305)))) && (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        /* LoopSeq 4 */
                        for (int i_8 = 0; i_8 < 18; i_8 += 2) 
                        {
                            var_28 -= ((/* implicit */long long int) max((((/* implicit */int) max(((unsigned short)24512), (((/* implicit */unsigned short) arr_6 [i_7 + 1] [i_7] [i_7] [i_2]))))), ((~(((/* implicit */int) arr_28 [(short)17] [i_1] [i_1] [i_7 + 1] [i_8] [i_8]))))));
                            var_29 = ((/* implicit */_Bool) (~(max((((/* implicit */long long int) (_Bool)1)), (7389878906802591673LL)))));
                            var_30 *= ((/* implicit */short) (-(((((/* implicit */_Bool) (short)-32747)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : ((~(arr_3 [1ULL] [i_1] [i_2])))))));
                        }
                        for (short i_9 = 1; i_9 < 17; i_9 += 1) 
                        {
                            arr_33 [i_9] [i_1] [i_2] [i_7 - 2] [i_9] [i_7 - 2] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (-2020237551)))))) ? (((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (var_13) : (((/* implicit */unsigned int) max((1718146285), (((/* implicit */int) arr_7 [i_0] [10U] [16ULL] [i_2] [i_0] [i_0]))))))) : (var_13)));
                            var_31 = var_3;
                            arr_34 [i_9] [i_0] [i_9] [i_0] [i_0] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) ((signed char) arr_2 [i_7] [i_9])))))));
                            arr_35 [i_0] [i_0] [(unsigned short)16] [i_0] [i_0] [i_0] &= ((/* implicit */int) ((((arr_13 [i_7] [i_7] [i_7] [i_7 - 1] [i_9 + 1]) >= (((/* implicit */long long int) ((/* implicit */int) var_6))))) ? (max((arr_13 [i_1] [i_1] [i_1] [i_7 - 2] [i_9 + 1]), (arr_13 [i_2] [i_2] [i_2] [i_7 + 2] [i_9 - 1]))) : (min((arr_13 [i_0] [i_0] [i_1] [i_7 - 1] [i_9 + 1]), (arr_13 [i_1] [i_1] [i_1] [i_7 - 1] [i_9 - 1])))));
                            arr_36 [i_0] [i_0] [i_2] [i_7] [i_9] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (short)-1021)) ? (arr_11 [i_7 - 2] [i_9 + 1] [i_9 - 1] [i_9] [(unsigned short)17]) : (arr_11 [i_7 + 2] [i_9 - 1] [i_9 - 1] [i_9] [i_9]))), (((/* implicit */unsigned long long int) ((_Bool) arr_6 [i_1] [i_9] [i_9] [i_9 + 1])))));
                        }
                        /* vectorizable */
                        for (short i_10 = 0; i_10 < 18; i_10 += 4) 
                        {
                            arr_39 [i_0] [i_1] [i_2] [i_7] [i_10] [i_1] [13ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -8972939399328658750LL)) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)1643))) | (arr_32 [i_1]))) : (((/* implicit */long long int) 551326746U))));
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 20ULL)) ? (arr_4 [i_7] [17U] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_27 [i_0] [i_0] [i_10] [i_0] [(unsigned short)10] [i_7]))));
                            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((-7389878906802591670LL) + (9223372036854775807LL))) >> (((arr_26 [11ULL] [i_1] [i_2] [i_7] [i_10]) + (435571517106363744LL))))))));
                            arr_40 [i_0] [i_1] [i_0] [i_1] [8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_10))) ? (((((/* implicit */_Bool) arr_0 [i_10])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))))));
                        }
                        for (unsigned int i_11 = 1; i_11 < 17; i_11 += 4) 
                        {
                            arr_43 [i_0] = arr_37 [i_1];
                            var_34 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_15 [i_0] [(_Bool)1] [i_2] [i_2] [i_7 + 1] [i_2])) ? (((/* implicit */int) arr_6 [1ULL] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_15 [11ULL] [i_1] [i_1] [i_1] [(_Bool)1] [i_1])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [6U] [17ULL] [i_7 + 1] [i_11])) || (((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_11])))))));
                            var_35 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_41 [i_0] [i_0] [i_0] [i_7] [i_11 + 1])) : ((+(arr_19 [i_1] [i_7 + 1] [i_7] [i_11 + 1] [i_11])))));
                        }
                        arr_44 [i_0] [i_1] [i_2] [i_7] [(short)0] [(short)0] = ((/* implicit */unsigned short) ((unsigned long long int) max(((~(((/* implicit */int) arr_20 [i_0] [i_1] [i_0])))), (((/* implicit */int) arr_41 [i_0] [i_1] [i_1] [i_2] [i_7 - 2])))));
                    }
                    for (unsigned short i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        arr_47 [i_0] [i_1] [i_2] [12U] = (-(((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_0] [i_0] [i_0]))));
                        arr_48 [i_0] [i_1] [i_2] [i_1] [i_12] [i_1] = ((/* implicit */unsigned short) (+(arr_45 [i_0] [i_1] [i_2] [i_12])));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_13 = 2; i_13 < 16; i_13 += 2) 
        {
            for (short i_14 = 0; i_14 < 18; i_14 += 1) 
            {
                for (signed char i_15 = 0; i_15 < 18; i_15 += 4) 
                {
                    {
                        arr_57 [i_0] [i_13] &= ((((/* implicit */_Bool) 14511967595977220562ULL)) ? (((/* implicit */unsigned long long int) (+(arr_29 [i_0] [i_13 - 1] [i_13 - 1] [i_15])))) : (((((/* implicit */unsigned long long int) arr_29 [i_0] [i_13 - 1] [i_14] [i_15])) / (14511967595977220562ULL))));
                        var_36 = ((/* implicit */unsigned short) (_Bool)1);
                        var_37 &= ((/* implicit */short) max((((/* implicit */int) max(((short)17757), (((/* implicit */short) (signed char)-111))))), ((~(((/* implicit */int) (signed char)122))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_16 = 2; i_16 < 14; i_16 += 1) 
                        {
                            arr_62 [16LL] [i_13] [i_15] &= ((/* implicit */unsigned int) (-((+(((((/* implicit */unsigned long long int) arr_13 [2LL] [i_13 - 2] [(_Bool)1] [i_15] [i_16 - 2])) - (18446744073709551596ULL)))))));
                            var_38 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32668))) : (arr_53 [i_0] [i_13 + 1]))))), (((((/* implicit */_Bool) 3934776477732331053ULL)) ? (((/* implicit */int) arr_31 [i_0] [(short)7] [i_14] [11ULL] [i_16])) : (((/* implicit */int) (_Bool)1))))));
                        }
                    }
                } 
            } 
        } 
        arr_63 [i_0] = ((/* implicit */short) ((unsigned int) (~(((/* implicit */int) arr_16 [i_0] [(unsigned short)16] [i_0] [i_0] [i_0])))));
    }
    for (unsigned short i_17 = 1; i_17 < 23; i_17 += 2) 
    {
        var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_17 - 1] [i_17 + 1]))) & (var_2)))) ? (((/* implicit */unsigned int) (((((_Bool)1) ? (2130706432) : (((/* implicit */int) (_Bool)1)))) << ((((~(var_19))) - (3212749979U)))))) : (var_13)));
        arr_67 [i_17] = (+(((((/* implicit */_Bool) (unsigned char)195)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)51))) : (((((/* implicit */_Bool) 551326746U)) ? (18446744073709551596ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [i_17 + 1] [12ULL]))))))));
    }
    for (int i_18 = 2; i_18 < 16; i_18 += 2) 
    {
        var_40 -= max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)38080));
        var_41 &= ((/* implicit */short) max((((/* implicit */unsigned long long int) (unsigned short)5639)), (3934776477732331053ULL)));
    }
}
