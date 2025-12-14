/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26747
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
    var_17 = ((/* implicit */unsigned short) var_9);
    var_18 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */int) min(((signed char)68), (((/* implicit */signed char) ((((-8069386938814307890LL) / (((/* implicit */long long int) 297424244)))) <= (((/* implicit */long long int) ((/* implicit */int) (short)12865))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */short) max((((arr_2 [i_0] [i_0] [i_0]) ? (((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_3] [i_4]))) : (3446936415U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-22997))))), (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) -867345595))))), (((int) -1LL)))))));
                                var_21 = ((/* implicit */signed char) var_16);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) max((((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) arr_11 [i_1] [i_1] [i_2] [i_2] [i_2])) : (arr_9 [i_0] [i_1] [i_1] [i_1] [i_1]))))), (arr_11 [i_0] [i_1] [i_1] [i_2] [i_2]))))));
                    var_23 = ((/* implicit */unsigned int) ((short) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (var_16)))) == (max((((/* implicit */long long int) (short)-12873)), (arr_11 [i_2] [i_1] [i_1] [i_2] [i_2]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_2] [i_6] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */unsigned int) -297424244)) : (arr_13 [i_0] [i_2] [i_0] [i_2] [i_5] [i_6])))) ? (((/* implicit */long long int) 4294967295U)) : (-12LL))), (((/* implicit */long long int) var_8))));
                                arr_17 [i_0] [i_2] [i_2] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_6] [i_1])) ? (((/* implicit */int) arr_4 [i_5] [i_6])) : (((/* implicit */int) (short)14))))) * (min((arr_7 [i_2]), (arr_7 [i_2])))));
                                var_24 = ((/* implicit */unsigned int) max((arr_5 [i_0] [i_2] [i_2]), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (7878859647533985051LL)))) ? (var_5) : (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (var_2)))))))));
                                arr_18 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((var_5) * (arr_14 [i_2] [i_2]))), (arr_14 [i_2] [i_5])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) 
    {
        var_25 = ((/* implicit */unsigned char) arr_20 [i_7]);
        /* LoopSeq 1 */
        for (signed char i_8 = 0; i_8 < 18; i_8 += 3) 
        {
            arr_24 [i_8] = ((/* implicit */short) var_14);
            arr_25 [i_7] [i_8] [i_8] = ((/* implicit */signed char) arr_22 [i_8]);
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -12LL)) ? (var_10) : (((/* implicit */unsigned long long int) arr_21 [i_7] [i_8] [i_8]))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_10 = 0; i_10 < 18; i_10 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 18; i_11 += 4) 
                {
                    for (unsigned char i_12 = 0; i_12 < 18; i_12 += 3) 
                    {
                        {
                            var_27 = -220751034;
                            arr_35 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */int) 46170288U);
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned char) (_Bool)1);
                arr_36 [i_7] [i_7] [i_7] = ((/* implicit */signed char) arr_19 [i_9] [i_9]);
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 18; i_13 += 4) 
                {
                    for (unsigned short i_14 = 0; i_14 < 18; i_14 += 1) 
                    {
                        {
                            arr_42 [i_14] [i_13] [i_10] [6ULL] [i_7] = ((/* implicit */short) ((((/* implicit */int) arr_40 [i_7] [i_9] [i_9] [i_14] [i_9] [i_14] [i_9])) <= (((/* implicit */int) (unsigned short)18965))));
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_22 [i_13])) : (((/* implicit */int) arr_31 [i_7] [i_9] [i_10] [i_13] [i_14]))));
                            var_30 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_41 [i_10] [i_13])) ? (arr_41 [i_7] [i_13]) : (((/* implicit */int) arr_31 [i_7] [i_7] [i_7] [i_7] [i_7]))));
                        }
                    } 
                } 
            }
            for (unsigned char i_15 = 0; i_15 < 18; i_15 += 3) 
            {
                var_31 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) / (arr_30 [i_9] [i_9] [i_9] [i_7])));
                /* LoopNest 2 */
                for (unsigned char i_16 = 0; i_16 < 18; i_16 += 1) 
                {
                    for (long long int i_17 = 0; i_17 < 18; i_17 += 3) 
                    {
                        {
                            var_32 = ((/* implicit */signed char) arr_21 [i_7] [i_15] [i_17]);
                            var_33 = ((/* implicit */unsigned int) arr_34 [i_9]);
                            var_34 = ((/* implicit */unsigned long long int) ((arr_21 [i_17] [i_15] [i_9]) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_17]))) > (arr_48 [(signed char)7] [(signed char)7] [i_15] [(signed char)7] [i_17])))))));
                            var_35 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) (_Bool)1)))))) / (arr_47 [i_17] [i_15] [i_15] [i_15] [i_7])));
                        }
                    } 
                } 
                var_36 &= ((/* implicit */_Bool) 1774170192);
                /* LoopNest 2 */
                for (signed char i_18 = 0; i_18 < 18; i_18 += 1) 
                {
                    for (unsigned short i_19 = 0; i_19 < 18; i_19 += 1) 
                    {
                        {
                            arr_58 [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_50 [i_19] [i_15] [i_15] [i_9] [i_15] [i_7])) ? (arr_21 [i_7] [i_15] [i_18]) : (1152921504606715904LL)));
                            arr_59 [i_19] [i_19] [i_19] [i_19] [i_15] = ((/* implicit */unsigned long long int) (unsigned short)44325);
                            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_26 [i_7] [i_9] [i_9]))) ? (((/* implicit */long long int) arr_44 [i_15] [i_15] [i_18] [i_19])) : (1008806316530991104LL)));
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (unsigned short i_20 = 0; i_20 < 18; i_20 += 2) 
            {
                for (unsigned short i_21 = 0; i_21 < 18; i_21 += 3) 
                {
                    for (unsigned int i_22 = 0; i_22 < 18; i_22 += 4) 
                    {
                        {
                            var_38 += ((/* implicit */signed char) arr_45 [i_22] [i_22] [i_7]);
                            var_39 ^= ((/* implicit */unsigned char) ((arr_52 [i_7] [i_7] [i_9] [i_20] [i_9] [i_20]) - (arr_52 [i_7] [i_7] [i_7] [i_7] [i_9] [i_22])));
                            arr_67 [i_7] [i_9] [i_22] = ((/* implicit */short) ((arr_66 [(short)2] [i_9] [i_9] [3U] [i_20] [i_9] [i_9]) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_1))))));
                        }
                    } 
                } 
            } 
            var_40 = ((/* implicit */_Bool) (short)-11038);
        }
    }
    for (unsigned char i_23 = 0; i_23 < 12; i_23 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_24 = 0; i_24 < 12; i_24 += 2) 
        {
            arr_74 [i_23] [i_23] = (signed char)63;
            arr_75 [i_24] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_34 [i_23])) < (((/* implicit */int) arr_20 [i_24]))));
            var_41 = ((/* implicit */short) ((((/* implicit */int) max((arr_69 [i_23]), (arr_69 [i_23])))) < (((min((arr_41 [i_23] [i_24]), (((/* implicit */int) arr_15 [i_23] [i_23] [i_23] [i_24])))) ^ (((/* implicit */int) arr_12 [i_23] [i_24] [i_23] [i_23]))))));
            var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_70 [i_24])) ? (((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-58))) == (arr_28 [i_23] [i_23] [i_23] [i_23])))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_24]))))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_25 = 0; i_25 < 12; i_25 += 3) 
        {
            for (signed char i_26 = 0; i_26 < 12; i_26 += 3) 
            {
                {
                    arr_82 [i_25] [i_25] = (i_25 % 2 == 0) ? (((/* implicit */int) ((((/* implicit */_Bool) ((min((arr_14 [i_25] [i_25]), (((/* implicit */unsigned int) (unsigned short)36301)))) << (((arr_55 [i_26] [i_25] [i_23]) - (2495681305U)))))) ? (max((min((((/* implicit */unsigned long long int) arr_26 [i_23] [i_23] [i_26])), (arr_9 [i_23] [i_25] [i_25] [i_26] [i_26]))), (((/* implicit */unsigned long long int) arr_80 [i_23] [i_25])))) : (((/* implicit */unsigned long long int) 403679334))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((min((arr_14 [i_25] [i_25]), (((/* implicit */unsigned int) (unsigned short)36301)))) << (((((arr_55 [i_26] [i_25] [i_23]) - (2495681305U))) - (4285785141U)))))) ? (max((min((((/* implicit */unsigned long long int) arr_26 [i_23] [i_23] [i_26])), (arr_9 [i_23] [i_25] [i_25] [i_26] [i_26]))), (((/* implicit */unsigned long long int) arr_80 [i_23] [i_25])))) : (((/* implicit */unsigned long long int) 403679334)))));
                    var_43 = (signed char)-64;
                    var_44 = ((((/* implicit */long long int) var_16)) / (7878859647533985066LL));
                    arr_83 [(signed char)1] [i_23] [i_25] [i_25] = ((/* implicit */unsigned long long int) arr_41 [(_Bool)1] [i_23]);
                    var_45 = ((/* implicit */short) min((((/* implicit */unsigned long long int) 5002282507652519217LL)), (max((((unsigned long long int) (unsigned short)10)), (((/* implicit */unsigned long long int) ((_Bool) 2742581747639937599LL)))))));
                }
            } 
        } 
        arr_84 [i_23] = ((/* implicit */unsigned char) 715555537U);
    }
}
