/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248571
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
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] = ((_Bool) ((unsigned char) ((unsigned char) var_5)));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) > ((-(arr_0 [i_0] [i_0])))));
        var_14 -= ((/* implicit */_Bool) (short)32766);
        arr_4 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (short)32761)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) (~(arr_1 [i_0])))))), (((/* implicit */unsigned int) ((_Bool) arr_0 [i_0] [i_0])))));
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) max((-7923674381995271932LL), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [5U])) && (((/* implicit */_Bool) arr_1 [i_0])))))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_16 = ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_1 [i_1]) : (((/* implicit */int) (short)-32755))))) : (var_7));
        var_17 *= ((/* implicit */signed char) ((((_Bool) arr_5 [(unsigned short)5])) && (((arr_5 [i_1]) == (((/* implicit */unsigned int) ((/* implicit */int) (short)16383)))))));
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((_Bool) arr_1 [i_1])))));
    }
    for (short i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_14 [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) 2145571814)) : (var_8)))) && (((/* implicit */_Bool) var_5)))) || (((/* implicit */_Bool) var_12))));
            var_19 += ((/* implicit */signed char) (_Bool)1);
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            arr_17 [i_2] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_2] [i_4] [i_4])) | (((/* implicit */int) (_Bool)0))));
            arr_18 [i_2] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
            var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_11 [i_4] [i_4] [i_2]))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    {
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_13 [18U] [i_5] [i_2])))) || (((/* implicit */_Bool) ((arr_19 [i_2] [i_4]) ? (((/* implicit */unsigned int) 1524660810)) : (arr_9 [i_2])))))))));
                        var_22 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (var_1)))));
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (+(-1329886077))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_26 [i_7] [i_7] = (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_21 [18ULL] [(signed char)16] [18ULL] [18ULL])) : (((/* implicit */int) var_2)))));
            var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((((/* implicit */int) (short)29205)) | (var_4))) : (((/* implicit */int) arr_13 [i_2] [i_2] [i_2]))));
            /* LoopNest 2 */
            for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                for (int i_9 = 0; i_9 < 25; i_9 += 2) 
                {
                    {
                        var_25 -= ((/* implicit */long long int) (-(((/* implicit */int) arr_30 [i_2] [i_9] [i_8] [i_2] [i_7]))));
                        arr_31 [i_8] [i_7] [i_9] [i_9] |= ((/* implicit */signed char) arr_25 [i_2] [i_7] [i_8]);
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                /* LoopSeq 4 */
                for (unsigned char i_11 = 1; i_11 < 23; i_11 += 3) 
                {
                    var_26 -= ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_24 [i_2] [i_2] [i_2]))))));
                    var_27 -= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) (unsigned char)24)) >= (((/* implicit */int) var_0)))));
                    var_28 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_28 [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_22 [i_11] [i_7] [i_7] [i_7] [i_10] [i_7]))) | (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                }
                for (unsigned short i_12 = 0; i_12 < 25; i_12 += 2) 
                {
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_10] [i_7])) ? (((/* implicit */int) arr_10 [i_10] [i_12])) : (((/* implicit */int) arr_10 [i_7] [i_10]))));
                    var_30 ^= ((/* implicit */int) (-((-(var_7)))));
                }
                for (signed char i_13 = 1; i_13 < 24; i_13 += 4) 
                {
                    var_31 -= ((/* implicit */unsigned int) 131070ULL);
                    arr_42 [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((long long int) (short)16383)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) >= (arr_12 [i_10])))))));
                    /* LoopSeq 2 */
                    for (long long int i_14 = 0; i_14 < 25; i_14 += 2) 
                    {
                        arr_45 [i_7] [i_13] [i_13] [i_14] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_2])))))) * (((((/* implicit */_Bool) -2145571785)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_13] [i_13] [i_2] [i_13]))) : (var_9)))));
                        arr_46 [i_13] [i_13] [i_13] [i_14] |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_30 [14U] [14U] [i_13 - 1] [14U] [i_13])) > (((/* implicit */int) arr_30 [i_2] [i_7] [i_10] [i_13 - 1] [i_13 + 1]))));
                        var_32 ^= ((/* implicit */short) arr_10 [(_Bool)1] [i_7]);
                        arr_47 [i_14] [i_13] [(unsigned short)2] [i_10] [i_7] [i_7] [i_14] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_14] [i_13 + 1] [i_13 + 1] [i_13 - 1] [i_13 + 1] [i_14])) || (((/* implicit */_Bool) arr_16 [i_13 + 1] [i_7]))));
                    }
                    for (unsigned short i_15 = 0; i_15 < 25; i_15 += 3) 
                    {
                        arr_52 [i_2] [i_7] [i_7] [i_13 - 1] [i_13] = ((/* implicit */short) var_3);
                        var_33 += ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_2] [2] [i_10])))))));
                        arr_53 [i_13] [i_7] [i_10] [i_13] [i_15] = ((/* implicit */short) var_9);
                        arr_54 [(unsigned char)0] |= ((/* implicit */signed char) (((-(((/* implicit */int) var_6)))) - (((/* implicit */int) arr_28 [10] [i_7] [i_10]))));
                    }
                    var_34 = ((unsigned long long int) (~(((/* implicit */int) var_13))));
                }
                for (short i_16 = 1; i_16 < 24; i_16 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_17 = 0; i_17 < 25; i_17 += 3) 
                    {
                        arr_59 [i_17] [i_10] = (_Bool)1;
                        var_35 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_38 [i_2] [i_2] [i_10] [i_17] [i_10])))) ? (((/* implicit */int) var_13)) : ((+(((/* implicit */int) (_Bool)0))))));
                        var_36 += (!(((/* implicit */_Bool) arr_22 [(signed char)20] [i_7] [i_7] [i_16 + 1] [i_17] [i_17])));
                        arr_60 [i_2] [i_7] [i_10] [i_17] [i_17] = ((/* implicit */unsigned int) (short)27318);
                    }
                    arr_61 [i_2] [i_2] [i_10] [i_16] = (-2147483647 - 1);
                }
                /* LoopSeq 1 */
                for (unsigned short i_18 = 0; i_18 < 25; i_18 += 3) 
                {
                    var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) var_6))));
                    /* LoopSeq 2 */
                    for (long long int i_19 = 3; i_19 < 24; i_19 += 3) 
                    {
                        arr_67 [i_2] [i_18] [i_19 - 2] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))) % (arr_62 [i_2] [i_18] [i_10] [i_19 - 3])));
                        arr_68 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_37 [i_2] [i_19 - 3] [i_19] [i_19 - 2] [i_19 - 3])) && (((/* implicit */_Bool) ((short) arr_30 [i_2] [i_7] [i_10] [i_18] [i_19 - 3])))));
                        arr_69 [(signed char)18] [(signed char)18] [i_10] [i_10] [i_10] [(signed char)18] [(signed char)18] = ((/* implicit */unsigned short) var_9);
                        arr_70 [i_2] [i_2] [i_2] [(signed char)23] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) arr_28 [i_2] [i_2] [i_2])) > (((/* implicit */int) (_Bool)1)))));
                    }
                    for (long long int i_20 = 1; i_20 < 23; i_20 += 2) 
                    {
                        var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) arr_56 [i_20 - 1] [i_20 + 1] [i_20 + 1]))));
                        arr_74 [i_20] [i_18] [i_7] = ((/* implicit */int) ((arr_72 [i_20 - 1] [i_20 - 1] [i_20 + 2] [i_20 - 1] [i_20]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_72 [i_20 - 1] [i_20 + 1] [i_20 - 1] [i_20 - 1] [i_20 + 1]))) : (var_7)));
                    }
                    arr_75 [i_2] [i_2] [i_10] [i_18] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_38 [i_2] [i_7] [i_2] [i_10] [i_2])) && (((/* implicit */_Bool) (-(((/* implicit */int) var_10)))))));
                    var_39 ^= ((/* implicit */unsigned char) ((long long int) var_2));
                }
                var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) (~(arr_35 [i_10] [(short)14] [i_2]))))));
            }
            for (unsigned long long int i_21 = 0; i_21 < 25; i_21 += 3) 
            {
                arr_80 [i_2] [i_7] [i_2] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (arr_57 [i_2] [i_2] [i_2] [i_7] [i_7] [i_21]) : (arr_57 [(_Bool)1] [i_7] [(_Bool)1] [i_7] [7] [i_7])));
                /* LoopSeq 3 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) ((((/* implicit */_Bool) (short)32766)) ? (((arr_64 [i_2] [i_2] [i_7] [i_7] [i_21] [11]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_4)) : (arr_64 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))))));
                    var_42 = ((/* implicit */int) max((var_42), (((/* implicit */int) (unsigned short)19))));
                    var_43 |= ((/* implicit */int) ((((/* implicit */int) arr_78 [i_2])) != (((/* implicit */int) arr_78 [i_2]))));
                }
                for (int i_23 = 0; i_23 < 25; i_23 += 2) 
                {
                    var_44 = ((/* implicit */long long int) var_10);
                    var_45 -= ((/* implicit */unsigned char) ((short) (-(-4313753165709110614LL))));
                }
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    var_46 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_57 [i_2] [i_7] [i_7] [i_21] [i_24] [i_7]) / (((/* implicit */long long int) ((/* implicit */int) (short)-28776)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_83 [i_2])) && (((/* implicit */_Bool) var_7))))) : ((~(((/* implicit */int) arr_48 [i_2]))))));
                    arr_88 [i_24] [i_7] = ((/* implicit */_Bool) (-(((arr_49 [(short)24] [i_24] [i_24] [i_2]) ? (((/* implicit */int) arr_65 [i_2] [i_7] [i_21] [i_21] [(short)19])) : (((/* implicit */int) arr_33 [22] [22]))))));
                    arr_89 [i_7] [i_21] [i_24] = ((/* implicit */short) (!(arr_20 [i_2] [i_2] [(signed char)5])));
                }
                var_47 = ((/* implicit */short) (unsigned short)65535);
            }
            for (unsigned short i_25 = 1; i_25 < 24; i_25 += 2) 
            {
                arr_94 [i_25] [i_25 - 1] = ((/* implicit */int) arr_63 [i_2]);
                var_48 = ((/* implicit */unsigned int) ((signed char) arr_65 [i_2] [i_25 + 1] [i_25 - 1] [i_25 + 1] [i_25 - 1]));
            }
            arr_95 [i_2] [(_Bool)1] = (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)28776)) : (((/* implicit */int) (_Bool)1)))));
        }
        var_49 = ((/* implicit */int) max((var_49), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)65513))))), (((((/* implicit */unsigned long long int) -1777203064358326177LL)) | (arr_16 [i_2] [i_2])))))) ? (((((/* implicit */int) arr_11 [i_2] [i_2] [i_2])) * (((arr_55 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) & (var_4))))) : (((/* implicit */int) ((signed char) (short)32766)))))));
    }
    var_50 = ((/* implicit */int) var_13);
}
