/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30481
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
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1]))) + (arr_1 [i_0 - 1])))) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) (unsigned char)0))));
        arr_4 [i_0 + 1] = ((/* implicit */_Bool) (short)26166);
        var_20 = ((/* implicit */signed char) max((max((arr_1 [i_0 + 1]), (((/* implicit */unsigned long long int) var_15)))), (max((((/* implicit */unsigned long long int) (signed char)-50)), (arr_1 [i_0 + 1])))));
    }
    for (long long int i_1 = 2; i_1 < 11; i_1 += 4) 
    {
        arr_9 [i_1] = var_0;
        arr_10 [i_1 - 1] [i_1] = ((/* implicit */_Bool) max(((((~(var_0))) / (((/* implicit */long long int) ((/* implicit */int) min((arr_6 [i_1] [i_1]), (((/* implicit */signed char) arr_2 [i_1])))))))), (((/* implicit */long long int) ((int) (~(((/* implicit */int) (_Bool)1))))))));
    }
    for (long long int i_2 = 4; i_2 < 11; i_2 += 4) 
    {
        var_21 -= ((/* implicit */_Bool) ((unsigned short) ((((((/* implicit */int) var_1)) << (((/* implicit */int) arr_2 [i_2])))) * (((/* implicit */int) max((var_14), (((/* implicit */signed char) (_Bool)0))))))));
        arr_14 [i_2] = ((/* implicit */short) (+((+(((/* implicit */int) arr_12 [i_2 - 3] [i_2 + 2]))))));
        var_22 = ((/* implicit */short) (-(((/* implicit */int) min((arr_2 [i_2 + 1]), (arr_13 [i_2 - 1]))))));
        arr_15 [i_2] [(unsigned char)3] = ((/* implicit */_Bool) var_11);
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_4 = 3; i_4 < 12; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 4) 
            {
                {
                    var_23 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) arr_18 [i_3] [(unsigned short)1])) / (-6328808937643615876LL)))))), (((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [i_4]))))) & (min((((/* implicit */unsigned long long int) var_2)), (137438953472ULL)))))));
                    arr_25 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_5 - 1])) / (((/* implicit */int) arr_20 [i_5 - 1]))))) ? (((/* implicit */int) ((signed char) arr_20 [i_5 + 1]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_5 - 1])) && (((/* implicit */_Bool) (short)-26167)))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_6 = 1; i_6 < 15; i_6 += 3) 
        {
            var_24 = ((/* implicit */long long int) min((((/* implicit */int) (((!(((/* implicit */_Bool) -744686029)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 6328808937643615876LL)) ? (((/* implicit */int) (signed char)119)) : (-1396992309))))))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_14))) + (arr_27 [i_3] [i_3])))) ? (((((/* implicit */int) arr_20 [i_3])) % (934852047))) : (((/* implicit */int) arr_20 [i_3]))))));
            var_25 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_6 + 1] [i_6 + 1]))) | (-4844269905399200463LL)))) && (((/* implicit */_Bool) ((long long int) (unsigned short)20567)))))), ((-(((/* implicit */int) arr_23 [i_6 - 1] [i_6] [i_3]))))));
        }
        for (long long int i_7 = 1; i_7 < 12; i_7 += 1) 
        {
            arr_32 [i_7] [i_7 + 2] [i_7] &= ((/* implicit */_Bool) (((~(arr_0 [i_7 - 1] [i_7 - 1]))) / ((+(arr_26 [i_3 - 1])))));
            arr_33 [i_3] = ((/* implicit */signed char) min((((((/* implicit */int) arr_24 [i_3 + 3] [i_7 + 2])) + (((/* implicit */int) arr_24 [i_3 + 2] [i_7 + 4])))), (((/* implicit */int) min((arr_24 [i_3 - 2] [i_7 + 4]), (((/* implicit */unsigned short) var_19)))))));
            arr_34 [i_3] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_29 [i_3 + 1])) : (((/* implicit */int) arr_29 [i_3 + 3]))))));
        }
        arr_35 [i_3 + 2] [(unsigned short)10] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_24 [i_3] [i_3 + 2])) ? (((/* implicit */int) arr_24 [i_3 - 2] [i_3 + 1])) : (((/* implicit */int) arr_24 [9ULL] [i_3 - 1])))) < (((/* implicit */int) arr_21 [i_3 + 4] [(_Bool)1] [i_3]))));
    }
    for (short i_8 = 2; i_8 < 13; i_8 += 2) 
    {
        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) arr_19 [i_8]))));
        var_27 = ((/* implicit */short) min(((!(((((/* implicit */_Bool) arr_17 [i_8])) || (((/* implicit */_Bool) arr_23 [i_8] [5] [i_8 + 2])))))), (((arr_2 [i_8 + 3]) && (arr_2 [i_8 - 2])))));
    }
    var_28 = ((/* implicit */int) max((var_28), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) (signed char)50)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-4096)))) : (((/* implicit */int) ((_Bool) -9127858589899706772LL)))))) ? ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)42009)) >= (1396992308)))) >= (((/* implicit */int) (short)-32759)))))))));
    /* LoopNest 3 */
    for (signed char i_9 = 2; i_9 < 11; i_9 += 3) 
    {
        for (signed char i_10 = 1; i_10 < 14; i_10 += 4) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    var_29 ^= ((/* implicit */_Bool) (-(((/* implicit */int) min((arr_23 [i_9 + 1] [i_10 + 1] [i_10 - 1]), (arr_23 [i_9 + 1] [i_10 + 1] [i_10 - 1]))))));
                    var_30 = (+(((/* implicit */int) arr_21 [i_9 + 1] [i_10 - 1] [i_11])));
                    var_31 *= ((/* implicit */signed char) arr_37 [i_9 - 1]);
                    arr_45 [(_Bool)1] [i_10] [(_Bool)1] [i_11] = ((/* implicit */unsigned short) arr_28 [i_9 + 2]);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (int i_12 = 3; i_12 < 24; i_12 += 3) 
    {
        var_32 |= ((/* implicit */unsigned char) (~(max((((((/* implicit */int) arr_46 [5ULL])) * (1396992328))), ((+(((/* implicit */int) arr_46 [i_12]))))))));
        /* LoopNest 3 */
        for (signed char i_13 = 1; i_13 < 23; i_13 += 4) 
        {
            for (unsigned long long int i_14 = 4; i_14 < 24; i_14 += 2) 
            {
                for (long long int i_15 = 2; i_15 < 24; i_15 += 3) 
                {
                    {
                        var_33 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((~(((/* implicit */int) arr_47 [i_12 + 1]))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_2))))))) : ((~(8562503515763738548LL)))));
                        arr_57 [i_13] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)32767)) ? (((/* implicit */int) (unsigned short)25765)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_53 [i_13 - 1] [i_13 + 2] [i_13 + 2] [i_13])) && (((/* implicit */_Bool) arr_51 [i_13 + 1] [i_14] [i_14])))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned long long int i_16 = 2; i_16 < 24; i_16 += 1) 
        {
            var_34 = ((/* implicit */_Bool) arr_48 [(signed char)24]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_17 = 1; i_17 < 23; i_17 += 4) 
            {
                arr_63 [14ULL] = ((/* implicit */signed char) ((arr_56 [2]) - (((arr_54 [i_12] [i_17 + 2]) ? (((/* implicit */int) arr_59 [(signed char)0] [i_16] [i_12])) : (((/* implicit */int) arr_46 [i_12]))))));
                /* LoopSeq 1 */
                for (long long int i_18 = 4; i_18 < 24; i_18 += 1) 
                {
                    arr_68 [i_18] [(unsigned short)13] [i_18] [i_16] [(_Bool)1] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */int) arr_58 [i_12] [i_17 + 2])) : (((/* implicit */int) arr_58 [24ULL] [i_17 + 2]))));
                    arr_69 [i_17 + 1] [i_18] = ((/* implicit */_Bool) ((unsigned long long int) arr_52 [i_18]));
                }
                arr_70 [i_12] [i_16] [i_17] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_47 [i_12]))))));
            }
        }
        for (signed char i_19 = 1; i_19 < 22; i_19 += 3) 
        {
            var_35 -= ((/* implicit */unsigned long long int) (~(min((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned short)7357)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((short) var_3)))))));
            arr_75 [(signed char)19] [(_Bool)1] &= ((/* implicit */signed char) arr_64 [i_19] [(unsigned short)0] [i_12] [(_Bool)1] [(unsigned short)0]);
        }
        for (unsigned long long int i_20 = 1; i_20 < 21; i_20 += 1) 
        {
            arr_78 [i_20] [(short)6] [i_20] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_65 [i_20] [(signed char)13] [10LL] [i_20]) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_60 [i_12]), (((/* implicit */short) var_13)))))) / ((~(arr_51 [i_12] [i_12] [i_12 + 1])))))));
            /* LoopSeq 1 */
            for (signed char i_21 = 3; i_21 < 24; i_21 += 3) 
            {
                arr_82 [i_20] [22ULL] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1396992308)) ? (((/* implicit */int) (signed char)-4)) : (-2090243341))))));
                /* LoopNest 2 */
                for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                {
                    for (unsigned long long int i_23 = 1; i_23 < 22; i_23 += 3) 
                    {
                        {
                            var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) (+((-(arr_51 [i_20 - 1] [i_20 - 1] [i_21 - 2]))))))));
                            var_37 = ((/* implicit */short) (!((((-(((/* implicit */int) var_16)))) >= (((((/* implicit */_Bool) arr_81 [i_12] [i_12] [(signed char)8])) ? (arr_80 [i_12] [i_12 - 3] [12ULL] [i_12]) : (((/* implicit */int) var_10))))))));
                            var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_66 [(_Bool)1] [13U] [i_20] [3LL] [(unsigned char)7] [i_23 - 1])) ? (((unsigned long long int) min((((/* implicit */short) arr_76 [i_20] [i_22 - 1] [i_22])), ((short)1023)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_76 [i_20] [(unsigned char)5] [(_Bool)1]), (((/* implicit */unsigned char) arr_59 [i_20 + 4] [10] [i_20]))))))));
                            var_39 -= (+(137438953472ULL));
                        }
                    } 
                } 
            }
        }
        /* LoopSeq 1 */
        for (signed char i_24 = 1; i_24 < 23; i_24 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
            {
                for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
                {
                    {
                        var_40 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) + (arr_72 [i_12 + 1] [i_12])))));
                        arr_94 [i_25] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_50 [(_Bool)1] [12ULL] [i_25]), (((/* implicit */unsigned short) var_2))))) ? (arr_56 [i_25]) : (((/* implicit */int) var_13))))) > (arr_89 [i_12] [i_24 - 1] [i_25] [21LL])));
                    }
                } 
            } 
            var_41 &= ((/* implicit */long long int) min((((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)25))))) & (var_11))), (((/* implicit */int) arr_53 [i_12] [i_24 - 1] [i_24 + 2] [(_Bool)1]))));
            var_42 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_49 [i_24] [(signed char)9])) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((signed char) var_1)))))) ? ((-(max((((/* implicit */int) arr_62 [i_12])), (arr_80 [(unsigned short)9] [i_12] [i_12 - 1] [i_12]))))) : ((~(((/* implicit */int) (unsigned char)136))))));
        }
    }
    for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
    {
        arr_97 [i_27] |= ((/* implicit */short) ((((/* implicit */_Bool) max((var_18), ((~(((/* implicit */int) arr_91 [i_27]))))))) ? (var_0) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_86 [(_Bool)1])) ? (((/* implicit */int) ((((/* implicit */int) arr_88 [i_27] [i_27] [i_27])) == (((/* implicit */int) (_Bool)1))))) : (8388607))))));
        var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_76 [(_Bool)1] [i_27 - 1] [i_27 - 1])), (((((/* implicit */_Bool) 712712627216767669LL)) ? (((/* implicit */int) (short)10815)) : (((/* implicit */int) arr_91 [i_27]))))))) ? (min((((/* implicit */unsigned long long int) arr_66 [i_27] [i_27 - 1] [(_Bool)1] [i_27 - 1] [i_27 - 1] [i_27 - 1])), (((arr_46 [(_Bool)1]) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3840))))))) : (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_62 [(_Bool)1])))))))));
        var_44 -= ((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) (short)32767))) / (2197139258235568794LL))), (((2197139258235568794LL) / (((/* implicit */long long int) ((/* implicit */int) arr_85 [i_27 - 1] [i_27 - 1] [i_27 - 1] [20ULL] [i_27 - 1] [i_27 - 1] [i_27 - 1])))))));
    }
}
