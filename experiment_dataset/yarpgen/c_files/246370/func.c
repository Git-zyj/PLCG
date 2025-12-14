/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246370
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (short i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (long long int i_4 = 3; i_4 < 9; i_4 += 3) 
                        {
                            var_18 &= (+(5206817803103582680LL));
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_11 [(short)11] [(short)11] [i_2] [i_2] [i_2] [(short)11]))) ? (((/* implicit */long long int) ((var_15) ? (((/* implicit */int) (short)-23685)) : (((/* implicit */int) (_Bool)1))))) : (arr_10 [i_0 + 3]))))));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3] [i_1]))) : (arr_9 [i_0 + 1] [i_1] [i_2] [i_3]))))))));
                            arr_12 [i_0 - 1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3] [i_4 + 1]))) : (-8256592773059146427LL)));
                        }
                        for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                        {
                            arr_16 [i_3] = ((/* implicit */unsigned int) ((arr_13 [i_0] [i_1] [i_2] [(_Bool)1] [i_5]) + (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                            arr_17 [i_0] [i_3] [(signed char)5] [i_3] [i_0] = ((/* implicit */unsigned int) (((!((_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_5] [i_3] [i_3] [i_0]))))) : (((/* implicit */int) ((2381684763U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_5]))))))));
                            arr_18 [i_3] [i_1] [i_2] [i_3] [i_5] = ((-806357678764905562LL) ^ (((/* implicit */long long int) ((((/* implicit */int) (short)23676)) ^ (((/* implicit */int) (short)-23701))))));
                        }
                        for (long long int i_6 = 1; i_6 < 11; i_6 += 2) 
                        {
                            var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3098527186862041779LL)) ? (-2886949471571253616LL) : (-740715494586796102LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-23681)) < (((/* implicit */int) arr_14 [i_2] [8LL] [i_2 - 2] [8LL] [i_6])))))) : (var_2)));
                            var_22 = (+(arr_6 [i_2 + 1] [i_2 + 1] [i_6 + 2] [i_6 + 2]));
                        }
                        for (long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_15 [i_2 + 2] [i_1] [i_2] [i_0 + 3]))));
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((signed char) (_Bool)1)))));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_8 = 3; i_8 < 12; i_8 += 1) 
                        {
                            var_25 = ((/* implicit */short) (-(arr_11 [i_8 - 1] [i_2 - 2] [i_8 - 1] [i_3] [i_0 - 1] [i_2 - 2])));
                            var_26 = ((/* implicit */signed char) 997785619U);
                            arr_28 [i_3] [i_3] [11U] [11U] [i_3] = ((/* implicit */signed char) (~((-(((/* implicit */int) (_Bool)1))))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (-(arr_15 [i_2 + 2] [i_2 - 2] [i_2 - 1] [i_2]))))));
                            arr_31 [i_0 + 3] [i_2 - 2] [i_2] [i_3] [i_2 - 1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_22 [i_0] [i_0 + 1] [i_0] [(short)2] [i_0] [i_0] [1LL]))));
                            arr_32 [i_1] [i_2 + 2] [i_3] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3884)) ? (5206817803103582672LL) : (arr_10 [i_1])));
                        }
                        arr_33 [i_0] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_26 [i_0 - 1] [i_0 + 1] [i_3] [i_0 + 3] [i_0 + 1]))));
                        var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [(signed char)8] [i_3]))));
                    }
                } 
            } 
            arr_34 [i_1] = ((/* implicit */signed char) (~(arr_6 [i_0] [i_0 - 1] [5U] [i_1])));
            /* LoopNest 3 */
            for (short i_10 = 1; i_10 < 11; i_10 += 2) 
            {
                for (short i_11 = 0; i_11 < 13; i_11 += 2) 
                {
                    for (short i_12 = 2; i_12 < 11; i_12 += 4) 
                    {
                        {
                            var_29 ^= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) (unsigned short)56458)) : (((/* implicit */int) (signed char)127))));
                            arr_43 [i_0] [i_1] [(signed char)2] [i_11] [i_1] &= ((/* implicit */unsigned short) arr_3 [i_1] [i_10]);
                            arr_44 [i_0 + 2] [i_12 - 2] [i_10] [i_12 - 2] [i_12] [i_11] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -923779074787135223LL)) ? (((/* implicit */int) arr_4 [i_1] [(signed char)12])) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [(unsigned short)0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_1] [i_12 + 2] [i_11] [i_12] [i_0] [i_10 + 2]))) : (-596600353287542203LL)))));
                        }
                    } 
                } 
            } 
            arr_45 [(unsigned short)6] [i_0] = ((/* implicit */long long int) (_Bool)1);
        }
        for (unsigned short i_13 = 0; i_13 < 13; i_13 += 4) 
        {
            arr_48 [i_0 + 3] = ((/* implicit */unsigned int) arr_35 [i_0] [i_13] [(short)6]);
            var_30 = ((((((/* implicit */_Bool) (unsigned short)32764)) ? (-8256592773059146411LL) : (6684469307241732112LL))) < (((/* implicit */long long int) ((/* implicit */int) var_3))));
        }
        for (short i_14 = 1; i_14 < 9; i_14 += 4) 
        {
            arr_52 [i_14] [i_14] = ((/* implicit */long long int) ((8256592773059146404LL) <= (arr_24 [i_0 + 3])));
            var_31 = ((/* implicit */signed char) (~(((/* implicit */int) arr_27 [i_0 + 2] [i_14] [i_14 + 4] [i_14 - 1] [i_14 + 1]))));
        }
        var_32 = ((/* implicit */unsigned int) (!(((arr_35 [i_0] [i_0] [i_0]) < (-8256592773059146426LL)))));
        var_33 += ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
    }
    /* LoopSeq 3 */
    for (long long int i_15 = 0; i_15 < 24; i_15 += 2) 
    {
        arr_56 [i_15] [19U] = ((/* implicit */long long int) max(((+((+(((/* implicit */int) arr_54 [i_15])))))), (((/* implicit */int) arr_54 [i_15]))));
        arr_57 [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)59221)) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (967034056U))))));
        var_34 = max((((/* implicit */long long int) max(((short)7), (((/* implicit */short) ((((/* implicit */int) arr_54 [i_15])) > (((/* implicit */int) (unsigned short)7926)))))))), (((max((3642544550144949610LL), (arr_53 [i_15] [i_15]))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_54 [i_15])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_54 [i_15]))))))));
    }
    /* vectorizable */
    for (unsigned short i_16 = 0; i_16 < 20; i_16 += 1) 
    {
        var_35 = ((/* implicit */signed char) ((((/* implicit */int) arr_60 [i_16])) == (((/* implicit */int) arr_60 [(_Bool)1]))));
        var_36 = ((/* implicit */long long int) (+(((/* implicit */int) arr_60 [i_16]))));
    }
    for (signed char i_17 = 0; i_17 < 21; i_17 += 1) 
    {
        var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_62 [i_17]))) && (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_55 [i_17] [i_17])), (var_3))))) >= (((((/* implicit */_Bool) arr_62 [i_17])) ? (arr_62 [i_17]) : (((/* implicit */long long int) ((/* implicit */int) (short)-9134)))))))));
        arr_63 [i_17] [i_17] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_55 [i_17] [i_17])))) ? (((/* implicit */long long int) var_16)) : (((((/* implicit */_Bool) arr_55 [i_17] [i_17])) ? (arr_62 [i_17]) : (((/* implicit */long long int) ((/* implicit */int) (short)23700)))))));
        var_38 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9011993328585347292LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_17] [i_17]))) : (arr_53 [i_17] [i_17])))));
    }
    var_39 &= ((/* implicit */_Bool) min((max((((/* implicit */long long int) (+(((/* implicit */int) var_3))))), (var_11))), (((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) (short)23700))))) ? (((/* implicit */long long int) var_16)) : (var_2)))));
}
