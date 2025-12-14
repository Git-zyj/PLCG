/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39393
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) != ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_6)) : (11249651827832585130ULL))))))));
        var_13 += ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_2))))), (((/* implicit */unsigned long long int) (_Bool)1))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */short) 2U);
        arr_8 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (+(7197092245876966481ULL))))) ? (((long long int) arr_0 [i_1])) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2146435072U)) || (((/* implicit */_Bool) 1698210377))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                var_15 = ((/* implicit */short) ((2U) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_9)) | (((/* implicit */int) (signed char)123)))))))));
                arr_16 [10ULL] [10ULL] = ((/* implicit */long long int) (!(var_7)));
                arr_17 [i_2] [i_2] [i_4] [i_4] = ((/* implicit */int) var_9);
            }
            /* LoopSeq 3 */
            for (int i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                arr_21 [i_5] [i_3] [i_3] [i_2] = ((/* implicit */_Bool) arr_1 [i_3]);
                arr_22 [i_2] [i_3] [i_5] [i_5] = ((/* implicit */int) var_7);
                arr_23 [i_2] [i_3] = ((/* implicit */long long int) arr_13 [i_5]);
            }
            for (short i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_7 = 2; i_7 < 14; i_7 += 3) 
                {
                    var_16 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)76)))), (((/* implicit */int) (short)-16384))));
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_28 [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 1] [i_7 + 1])) && (((/* implicit */_Bool) arr_28 [i_7] [i_7 + 1] [i_7] [i_7 - 1] [i_7 - 2])))) || (((((/* implicit */_Bool) 25U)) && (((/* implicit */_Bool) (unsigned short)43267)))))))));
                    arr_29 [i_2] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_15 [i_2] [i_3] [i_6] [i_7 + 1])))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_12)))))));
                }
                /* vectorizable */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_14 [i_2] [i_6]))));
                    var_19 &= ((unsigned long long int) 7197092245876966481ULL);
                }
                arr_32 [i_6] [i_6] [(unsigned char)0] [i_2] = ((/* implicit */long long int) var_0);
                arr_33 [i_6] [i_3] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242))) + (7197092245876966450ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_2]), (((/* implicit */short) (unsigned char)21))))))));
            }
            /* vectorizable */
            for (unsigned short i_9 = 0; i_9 < 15; i_9 += 3) 
            {
                var_20 = ((/* implicit */unsigned char) -6965729100078211159LL);
                arr_38 [i_3] [i_2] = ((/* implicit */_Bool) var_6);
            }
            /* LoopSeq 2 */
            for (int i_10 = 3; i_10 < 12; i_10 += 3) /* same iter space */
            {
                arr_43 [i_2] [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) >> (((arr_10 [i_10 + 1] [i_3]) - (510750519U)))))) ? (((((/* implicit */_Bool) var_0)) ? (arr_10 [i_10 - 3] [i_3]) : (arr_10 [i_10 - 2] [i_3]))) : (min((arr_10 [i_10 + 1] [i_3]), (((/* implicit */unsigned int) (_Bool)1)))));
                /* LoopSeq 2 */
                for (int i_11 = 0; i_11 < 15; i_11 += 2) 
                {
                    arr_46 [i_2] [i_3] [5] [i_3] = ((/* implicit */unsigned char) ((int) min((var_0), (((/* implicit */short) arr_35 [i_10 + 2] [i_10] [i_10 + 3])))));
                    arr_47 [i_2] [i_3] [i_10 + 1] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) arr_6 [i_3])))));
                    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)122))))))))));
                    arr_48 [i_2] [i_3] [i_10] [i_11] = ((/* implicit */short) min((arr_34 [i_11] [i_11] [i_10 + 2] [(signed char)9]), (((/* implicit */long long int) (_Bool)1))));
                }
                for (signed char i_12 = 0; i_12 < 15; i_12 += 1) 
                {
                    arr_51 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)22267))));
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_42 [i_2] [i_2] [i_10] [13ULL])) : (((/* implicit */int) arr_6 [i_10 + 2])))))));
                }
            }
            for (int i_13 = 3; i_13 < 12; i_13 += 3) /* same iter space */
            {
                var_23 = ((/* implicit */_Bool) var_9);
                var_24 &= ((((((/* implicit */_Bool) min((arr_53 [i_13] [4ULL] [4ULL]), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */unsigned long long int) -1205653979028897444LL)), (17592186044288ULL))))) & (((/* implicit */unsigned long long int) min((((2305843009213693952LL) / (((/* implicit */long long int) -1988713072)))), (((/* implicit */long long int) ((((/* implicit */int) var_12)) > (((/* implicit */int) arr_26 [i_13 - 3] [i_13] [i_3] [i_2])))))))));
                var_25 ^= (+(((((/* implicit */_Bool) arr_40 [i_2] [i_2] [i_13 - 3])) ? (((/* implicit */int) arr_40 [i_2] [(_Bool)0] [i_13 + 3])) : (((/* implicit */int) var_9)))));
            }
            arr_55 [i_3] [12U] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_28 [i_2] [i_2] [i_2] [i_2] [i_3])) ? ((~(((/* implicit */int) var_9)))) : (((((/* implicit */int) var_4)) >> (((arr_30 [(unsigned short)0] [(_Bool)1] [(unsigned short)0]) + (1179518818))))))) - (536646988)));
        }
        for (int i_14 = 0; i_14 < 15; i_14 += 3) 
        {
            var_26 = ((var_1) < (((/* implicit */long long int) ((arr_39 [14LL] [i_2] [i_2] [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
            arr_58 [i_2] [i_14] = ((/* implicit */unsigned short) ((((6841820282201051939ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14053))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)0)))))))));
            var_27 = ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_30 [i_14] [i_2] [i_14])))) / (min((var_1), (((/* implicit */long long int) (short)-17374)))));
            arr_59 [i_14] [i_14] [i_14] = arr_9 [i_2] [i_2];
        }
        arr_60 [i_2] = ((/* implicit */long long int) arr_27 [i_2] [i_2] [i_2] [i_2]);
        arr_61 [i_2] = ((/* implicit */signed char) ((unsigned int) arr_25 [i_2] [i_2] [i_2] [i_2]));
        arr_62 [i_2] = ((/* implicit */signed char) arr_12 [i_2] [i_2]);
    }
    var_28 *= ((/* implicit */unsigned short) var_7);
}
