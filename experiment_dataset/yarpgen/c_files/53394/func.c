/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53394
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
    var_19 = (+(((/* implicit */int) (unsigned short)1)));
    var_20 &= ((short) ((short) var_9));
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        var_21 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 - 3] [i_0 + 1])) > (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2])) < (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 2])))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((unsigned int) (short)511)))));
                                arr_11 [0U] [i_2] [i_2] [(short)0] [0U] [i_2] = ((/* implicit */unsigned char) ((unsigned int) (unsigned short)65514));
                            }
                        } 
                    } 
                    arr_12 [i_2] = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned char) arr_0 [i_0] [i_0 + 1])), (var_4))), (((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0 - 2])) == (((/* implicit */int) arr_0 [i_0] [i_1])))))));
                    var_23 &= ((/* implicit */int) (unsigned short)25746);
                    var_24 = ((/* implicit */signed char) arr_8 [i_0 - 2] [i_0] [i_1] [i_0] [i_2 + 1]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        arr_22 [i_0] [i_5] [i_6] [i_7] &= ((/* implicit */signed char) arr_13 [i_0] [i_0] [i_0]);
                        var_25 = ((/* implicit */long long int) (~(13963109798734800490ULL)));
                        var_26 = ((/* implicit */short) ((((((/* implicit */_Bool) (~(arr_6 [i_7])))) ? (min((13963109798734800483ULL), (((/* implicit */unsigned long long int) (signed char)-30)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_5] [i_6] [i_6]))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_5] [i_6])))));
                        var_27 |= ((/* implicit */unsigned int) (~((((~(((/* implicit */int) arr_0 [i_0] [2])))) + (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32178))) < (1571283471238641135ULL))))))));
                    }
                    for (short i_8 = 0; i_8 < 15; i_8 += 4) 
                    {
                        arr_25 [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_0 + 1] [i_5] [i_0 - 1])) >> (((((/* implicit */int) (!(((/* implicit */_Bool) -2097689641))))) * (2097689655)))));
                        arr_26 [(signed char)1] [i_5] [i_0] [i_5] [i_0] = ((/* implicit */signed char) 13963109798734800490ULL);
                    }
                    var_28 = min((max((arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 2]), (((/* implicit */unsigned int) (unsigned short)32)))), (arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 + 1]));
                    arr_27 [i_0] [i_0] [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) min((((/* implicit */unsigned short) (short)-22617)), ((unsigned short)21253))))))) ? (((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)1))))) / (arr_5 [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_20 [i_0 - 1] [i_5] [i_0 - 2]))))));
                }
            } 
        } 
        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((var_18) / (((/* implicit */int) var_7))))), (arr_3 [i_0 - 1] [i_0 + 1] [i_0 - 2])))) ? (((/* implicit */int) var_8)) : (((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (signed char)-75)))) ? (var_18) : (((/* implicit */int) arr_18 [i_0 + 1] [i_0] [(short)0] [i_0 + 1]))))));
        /* LoopSeq 1 */
        for (unsigned int i_9 = 0; i_9 < 15; i_9 += 2) 
        {
            arr_30 [i_9] = ((/* implicit */int) ((unsigned char) arr_6 [i_9]));
            /* LoopNest 3 */
            for (unsigned char i_10 = 0; i_10 < 15; i_10 += 1) 
            {
                for (unsigned int i_11 = 4; i_11 < 14; i_11 += 1) 
                {
                    for (signed char i_12 = 1; i_12 < 11; i_12 += 2) 
                    {
                        {
                            arr_40 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] &= ((/* implicit */_Bool) ((((-2097689634) / (((/* implicit */int) arr_2 [i_11 + 1])))) / (((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_11 + 1])), ((unsigned short)2))))));
                            var_30 = ((/* implicit */int) ((((/* implicit */_Bool) 4483634274974751125ULL)) ? (arr_10 [i_0] [i_0] [i_0] [i_11] [i_12]) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_37 [i_9] [i_11])))) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) -4103674295767509899LL))))))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_31 = ((/* implicit */_Bool) ((((((unsigned int) arr_41 [i_13])) & (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_13]))))) ^ (((/* implicit */unsigned int) min((((/* implicit */int) arr_41 [i_13])), (((((/* implicit */_Bool) var_13)) ? (var_15) : (((/* implicit */int) arr_42 [i_13])))))))));
        var_32 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)87)) > (((/* implicit */int) (unsigned char)213)))))));
        /* LoopSeq 2 */
        for (unsigned int i_14 = 2; i_14 < 17; i_14 += 4) 
        {
            arr_45 [i_13] |= ((/* implicit */unsigned char) 13963109798734800472ULL);
            arr_46 [i_13] = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_43 [i_13] [i_13] [i_14 - 1])))) | (((/* implicit */int) arr_43 [i_13] [i_13] [i_14 - 1]))));
            /* LoopNest 2 */
            for (unsigned char i_15 = 0; i_15 < 19; i_15 += 4) 
            {
                for (unsigned int i_16 = 0; i_16 < 19; i_16 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_17 = 3; i_17 < 17; i_17 += 2) 
                        {
                            arr_55 [i_13] = ((/* implicit */unsigned char) (~(arr_50 [i_14 - 1] [i_14 + 1])));
                            var_33 = ((/* implicit */unsigned int) (~((((~(((/* implicit */int) arr_52 [i_17] [11U] [i_17] [i_17])))) << (((arr_47 [i_14 - 1]) + (4144340304901286222LL)))))));
                            var_34 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_52 [i_13] [i_13] [i_13] [i_13]))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_15)) / (arr_50 [i_15] [i_15])))), ((+(var_6))))))));
                            arr_56 [i_13] [i_14] [i_15] [i_15] [i_15] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_54 [i_14 - 1] [i_14 + 2] [i_17 - 2])))) == (((/* implicit */int) (unsigned short)18))));
                            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-111)) % (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) min((((/* implicit */signed char) arr_44 [i_14])), ((signed char)-111))))))))))));
                        }
                        for (unsigned int i_18 = 0; i_18 < 19; i_18 += 4) 
                        {
                            var_36 = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_53 [i_14 + 2] [i_14 + 2] [i_14 + 1] [i_14 + 2] [i_14 + 1] [i_14] [i_14 - 1])) * (((/* implicit */int) arr_53 [i_14] [i_14 + 1] [i_14 - 1] [i_14] [i_14 - 2] [i_14 + 1] [i_14 - 1]))))));
                            var_37 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)4135))));
                        }
                        for (unsigned char i_19 = 0; i_19 < 19; i_19 += 4) /* same iter space */
                        {
                            var_38 ^= ((/* implicit */short) ((((/* implicit */int) var_17)) / (((/* implicit */int) ((((/* implicit */_Bool) arr_51 [6U] [i_14] [i_16] [i_19])) && (((((/* implicit */_Bool) (short)-22733)) && (((/* implicit */_Bool) var_13)))))))));
                            arr_63 [i_13] [i_14] [i_14] [i_14] [i_19] = arr_53 [i_13] [i_14] [i_15] [i_15] [i_15] [i_15] [i_19];
                            arr_64 [15LL] [15LL] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_18) >> (((((/* implicit */int) var_0)) - (49662)))))) && (((/* implicit */_Bool) arr_43 [i_13] [i_14 + 2] [i_14 + 2]))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) (signed char)-1))))), (((((/* implicit */_Bool) arr_42 [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_16]))) : (arr_58 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])))))));
                            var_39 = ((((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_14 - 1] [i_14 - 2] [i_14 + 1])) && (((/* implicit */_Bool) arr_43 [i_14 - 1] [i_14 + 1] [i_14 - 1]))))) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_51 [i_13] [8U] [i_13] [i_13])) && (((/* implicit */_Bool) (short)-27645))))));
                        }
                        for (unsigned char i_20 = 0; i_20 < 19; i_20 += 4) /* same iter space */
                        {
                            var_40 = ((/* implicit */short) (+((-(((((/* implicit */int) (unsigned char)60)) - (((/* implicit */int) (short)-8192))))))));
                            arr_68 [16U] [i_14] [i_15] [i_16] [i_15] [i_20] = ((/* implicit */unsigned int) var_11);
                        }
                        /* LoopSeq 1 */
                        for (int i_21 = 0; i_21 < 19; i_21 += 4) 
                        {
                            arr_71 [i_13] [i_14] [i_13] [i_16] [i_21] [i_13] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_48 [i_13] [i_13] [i_14 - 2] [i_16]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [(short)14] [i_14] [i_14 - 1])))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (!(arr_44 [i_13]))))) ^ (arr_66 [i_13] [i_14]))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) (signed char)86)))))));
                            arr_72 [i_21] = ((/* implicit */int) arr_50 [i_15] [i_21]);
                            var_41 += ((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned short)9915)) ? (arr_47 [i_14]) : (((/* implicit */long long int) -2097689604))))));
                            var_42 -= ((/* implicit */unsigned int) (unsigned short)4145);
                        }
                    }
                } 
            } 
            var_43 ^= max((arr_44 [i_14]), (((((/* implicit */_Bool) arr_60 [i_14 - 1] [i_14 - 1] [i_14 + 2] [i_14 + 1])) && (((/* implicit */_Bool) arr_48 [i_14 - 2] [i_14 + 1] [i_14] [i_14 + 2])))));
        }
        for (unsigned int i_22 = 0; i_22 < 19; i_22 += 4) 
        {
            arr_75 [i_22] [12ULL] = ((/* implicit */unsigned char) var_10);
            var_44 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (unsigned short)41978)), (((((/* implicit */_Bool) (unsigned short)4135)) ? (13963109798734800472ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_23 = 2; i_23 < 17; i_23 += 2) 
            {
                var_45 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_74 [i_13] [i_22] [i_23 + 2]))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)180))) / (-1300874309742047367LL)))));
                var_46 = ((/* implicit */signed char) ((arr_48 [i_23 + 1] [i_23 - 2] [i_23 + 2] [i_23 - 1]) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_70 [i_13] [i_13] [(signed char)8] [i_22] [i_23]))))))));
                var_47 = ((/* implicit */_Bool) max((var_47), (((/* implicit */_Bool) ((414266499U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43368))))))));
                var_48 = ((((/* implicit */_Bool) ((unsigned int) arr_41 [i_22]))) || (((/* implicit */_Bool) (short)21789)));
                var_49 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)106)) * (((/* implicit */int) (short)-10772))));
            }
        }
        arr_78 [i_13] = arr_52 [i_13] [i_13] [i_13] [i_13];
    }
    for (unsigned int i_24 = 0; i_24 < 11; i_24 += 2) 
    {
        arr_81 [i_24] = ((/* implicit */unsigned char) ((unsigned int) arr_73 [i_24] [i_24] [i_24]));
        var_50 = ((/* implicit */unsigned short) min(((+(((((/* implicit */_Bool) 2097689604)) ? (16099044857164130616ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22168))))))), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned short)34638)))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_24] [i_24] [i_24] [i_24]))))))))));
        arr_82 [i_24] = ((/* implicit */unsigned int) max((((/* implicit */int) ((min((((/* implicit */int) arr_76 [i_24])), (arr_62 [i_24] [i_24] [i_24] [i_24]))) > (((/* implicit */int) arr_52 [i_24] [i_24] [i_24] [i_24]))))), (max(((~(((/* implicit */int) arr_60 [17U] [i_24] [13] [13])))), (((/* implicit */int) arr_31 [i_24] [i_24] [i_24] [i_24]))))));
    }
    var_51 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
    var_52 |= ((/* implicit */int) ((short) var_15));
}
