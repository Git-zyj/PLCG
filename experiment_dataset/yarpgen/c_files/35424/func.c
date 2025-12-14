/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35424
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
    var_16 = ((/* implicit */_Bool) var_14);
    var_17 = ((/* implicit */signed char) var_8);
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) var_14)) / (max((((/* implicit */int) (short)-1)), (1919533874)))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_19 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (6874551705334617994ULL)))) ? (arr_0 [i_0]) : (((((/* implicit */_Bool) 1622347566U)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)194))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2336392420U)), (17348840123867996019ULL))))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 4) /* same iter space */
                        {
                            var_21 *= ((/* implicit */int) (~(((arr_10 [i_4] [i_3] [i_3] [i_4 - 1] [i_4]) << (((arr_10 [i_4] [i_3] [i_3] [i_4 - 1] [i_3]) - (1963265969071965954ULL)))))));
                            var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_2))))))));
                            arr_14 [i_0] [i_1 - 3] [i_2] [i_2] [i_1] [i_3] [i_4 + 1] = ((/* implicit */short) var_2);
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 4) /* same iter space */
                        {
                            var_23 -= ((/* implicit */short) max((max((((/* implicit */long long int) var_1)), (var_10))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-16336)), (0U))))));
                            arr_17 [14U] [i_5 - 1] [i_2] [i_5 + 1] [i_1] = (short)23155;
                            arr_18 [i_0] [i_1 + 1] [i_1 + 1] [i_3] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((13498866973994076887ULL), (((/* implicit */unsigned long long int) var_9))))) ? ((~(((/* implicit */int) (unsigned char)0)))) : (((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) arr_13 [i_1 - 2] [i_1 + 1] [i_5 + 1] [i_1 - 2] [i_5 + 1] [i_1 - 2]))))));
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) (signed char)-118))));
                        }
                        for (short i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            arr_21 [i_0] [i_1] = ((/* implicit */short) ((min((730162706), (((/* implicit */int) (short)(-32767 - 1))))) ^ ((+(((/* implicit */int) (unsigned char)194))))));
                            arr_22 [i_0] [i_0] [i_1] [18U] [i_3] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)15086))));
                        }
                        var_25 ^= ((/* implicit */signed char) max((3373215437U), (((/* implicit */unsigned int) (unsigned char)194))));
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)-120)), (((((/* implicit */_Bool) var_6)) ? (arr_7 [i_0] [i_1] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1])))))))) : ((~(max((-3107491506841407300LL), (((/* implicit */long long int) (short)4428))))))));
                        var_27 = ((/* implicit */unsigned char) var_13);
                    }
                } 
            } 
        } 
        arr_23 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (max((((/* implicit */long long int) 477186395U)), (8345754970495497593LL)))))) ? (max((arr_4 [i_0] [i_0] [(short)2]), (arr_4 [i_0] [18LL] [(_Bool)1]))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 0ULL)))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) (short)(-32767 - 1))))))))))));
        var_28 = ((/* implicit */unsigned int) arr_15 [i_0] [(unsigned char)12]);
    }
    for (int i_7 = 0; i_7 < 15; i_7 += 3) 
    {
        var_29 *= ((/* implicit */unsigned short) ((unsigned int) max((6555702396953657555LL), (((/* implicit */long long int) 32767U)))));
        var_30 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (short)(-32767 - 1))), (1113991464)));
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
        {
            for (signed char i_9 = 3; i_9 < 14; i_9 += 3) 
            {
                {
                    arr_34 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15030)) ? (((/* implicit */int) arr_31 [i_7] [i_7] [i_7])) : (-1150364174)))) ? (max((arr_9 [i_9] [i_7] [i_7] [i_7]), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) arr_28 [i_7]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_9 - 2] [i_8]))))) : (-1919533857)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_10 = 0; i_10 < 15; i_10 += 2) 
                    {
                        arr_38 [i_7] = ((/* implicit */short) ((6874551705334617994ULL) | (((/* implicit */unsigned long long int) (((_Bool)1) ? (10U) : (0U))))));
                        var_31 = ((/* implicit */unsigned long long int) (signed char)-105);
                    }
                    var_32 = ((/* implicit */short) (~(((/* implicit */int) max((arr_2 [i_7]), (arr_12 [i_8] [i_7]))))));
                    arr_39 [i_8] [i_7] [i_7] [i_9 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_8]))) : (((((/* implicit */_Bool) arr_3 [i_7] [i_9])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (short)-32751)))))))) ? (((/* implicit */int) arr_25 [i_7] [i_8])) : (((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) 921751877U))))))))));
                }
            } 
        } 
    }
    for (unsigned int i_11 = 0; i_11 < 20; i_11 += 1) /* same iter space */
    {
        arr_42 [i_11] [3] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((8589934591ULL) * (((/* implicit */unsigned long long int) 0U))))) ? (((/* implicit */int) arr_11 [i_11] [i_11] [i_11] [i_11] [6])) : (((/* implicit */int) arr_13 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))))));
        var_33 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_1)) ? (1919533874) : (((/* implicit */int) (_Bool)0)))), (((((/* implicit */int) (unsigned char)42)) + (((/* implicit */int) (short)20904))))))), (((((/* implicit */_Bool) var_12)) ? (arr_16 [(short)12] [i_11] [i_11] [i_11] [(short)18] [i_11] [i_11]) : (arr_16 [14ULL] [14ULL] [i_11] [i_11] [8ULL] [i_11] [i_11])))));
        var_34 ^= ((/* implicit */signed char) max((3910094510U), (((/* implicit */unsigned int) (signed char)-1))));
        arr_43 [i_11] [6U] = ((/* implicit */short) (~(min((arr_4 [i_11] [i_11] [14LL]), (arr_4 [10ULL] [i_11] [12U])))));
    }
    for (unsigned int i_12 = 0; i_12 < 20; i_12 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_13 = 0; i_13 < 20; i_13 += 1) 
        {
            for (unsigned char i_14 = 2; i_14 < 17; i_14 += 1) 
            {
                for (unsigned long long int i_15 = 3; i_15 < 19; i_15 += 4) 
                {
                    {
                        arr_55 [i_12] [i_14] [i_14] [8U] = ((/* implicit */long long int) var_14);
                        arr_56 [i_13] [i_14] [i_15] = (i_14 % 2 == zero) ? (((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_6 [(signed char)4] [i_15] [(signed char)4])), (arr_45 [i_15] [i_14 - 2])))) ? (min((((/* implicit */unsigned long long int) arr_40 [i_14])), (arr_0 [i_12]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_13]))))) << (((max((arr_10 [i_14] [i_14] [i_14 + 1] [i_14] [i_14 - 1]), (((/* implicit */unsigned long long int) max((var_5), (var_9)))))) - (1963265969071965952ULL))))) : (((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_6 [(signed char)4] [i_15] [(signed char)4])), (arr_45 [i_15] [i_14 - 2])))) ? (min((((/* implicit */unsigned long long int) arr_40 [i_14])), (arr_0 [i_12]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_13]))))) << (((((max((arr_10 [i_14] [i_14] [i_14 + 1] [i_14] [i_14 - 1]), (((/* implicit */unsigned long long int) max((var_5), (var_9)))))) - (1963265969071965952ULL))) - (12364770432149908899ULL)))));
                        var_35 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_14 + 3])) ? (min((((/* implicit */unsigned long long int) var_9)), (arr_51 [i_13] [i_14 + 3]))) : (((/* implicit */unsigned long long int) max((3709019012U), (((/* implicit */unsigned int) 1196057770))))))))));
                        var_36 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)-15005)) : (((/* implicit */int) (short)-2843))))) < (((((/* implicit */unsigned long long int) 0U)) | (min((((/* implicit */unsigned long long int) (signed char)-105)), (3627362266287564348ULL)))))));
                    }
                } 
            } 
        } 
        var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) max(((short)226), (((/* implicit */short) max((((/* implicit */unsigned char) arr_15 [i_12] [12ULL])), (arr_3 [18ULL] [18ULL])))))))));
        arr_57 [i_12] = ((/* implicit */short) max(((((_Bool)0) ? (max((((/* implicit */unsigned long long int) var_14)), (arr_16 [i_12] [i_12] [i_12] [i_12] [0U] [i_12] [i_12]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_12] [(unsigned char)4]))))), (((/* implicit */unsigned long long int) arr_8 [i_12] [i_12] [i_12] [i_12]))));
        var_38 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((arr_45 [i_12] [i_12]) & (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)57)) ? (((/* implicit */int) (short)-16599)) : (((/* implicit */int) (short)15888))))))))));
        var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1091012177)) % (arr_53 [i_12] [i_12])))) ? (min((((/* implicit */unsigned int) arr_46 [i_12])), (var_5))) : (((/* implicit */unsigned int) (((_Bool)0) ? (-1221942196) : ((-2147483647 - 1))))))))));
    }
    var_40 = ((/* implicit */unsigned int) var_10);
}
