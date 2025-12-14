/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192629
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) | ((+(((/* implicit */int) var_10))))))) ? (max((((/* implicit */int) (short)-19831)), (-1341400346))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)65520)) == (((((/* implicit */_Bool) var_9)) ? (var_18) : (((/* implicit */int) var_11)))))))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1862776780U)) ? (22U) : (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 28U))))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [(short)0] = min((arr_4 [i_0] [i_0] [i_0]), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) < (((/* implicit */int) arr_2 [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (13086740336619044654ULL))))));
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) max((min((min((arr_6 [i_0] [i_1] [i_0]), (((/* implicit */unsigned long long int) var_9)))), (((unsigned long long int) 4294967273U)))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) -1139486784)) ? (-1139486784) : (((/* implicit */int) var_5)))))))));
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(18446744073709551604ULL)))) && (((/* implicit */_Bool) (short)24538))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1341400364)), (arr_8 [i_0]))))))) / (((int) 2095648317623643123ULL))));
        var_23 = ((/* implicit */int) ((((var_17) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (18446744073709551615ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))));
        arr_11 [i_0] = ((/* implicit */unsigned long long int) 32U);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_4 = 2; i_4 < 11; i_4 += 3) 
        {
            var_24 = ((((((/* implicit */_Bool) arr_13 [(_Bool)1])) ? (((/* implicit */int) arr_7 [4] [i_4] [i_3] [i_4])) : (((/* implicit */int) (short)32753)))) != (((/* implicit */int) (_Bool)1)));
            /* LoopSeq 4 */
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
            {
                arr_20 [i_3] [i_4 - 1] [4U] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 5360003737090506962ULL))))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3] [i_4 - 2] [i_5] [i_5])))))));
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_4 + 1] [i_4 - 1] [i_4 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_15 [i_4 - 1] [i_4 - 2]))));
            }
            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
            {
                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (+(((/* implicit */int) arr_3 [i_6] [i_4 - 1] [i_4 - 1])))))));
                var_27 = ((/* implicit */unsigned short) ((arr_5 [i_4 - 1] [i_3] [3]) > (((/* implicit */unsigned int) arr_21 [i_4 - 2] [10U]))));
            }
            for (signed char i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                var_28 = ((/* implicit */_Bool) (+(arr_17 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_7])));
                arr_25 [i_3] [i_4] [i_4] [i_3] = ((/* implicit */int) arr_15 [i_3] [i_3]);
                /* LoopSeq 1 */
                for (signed char i_8 = 4; i_8 < 11; i_8 += 3) 
                {
                    var_29 = ((/* implicit */int) ((((arr_0 [i_3]) - (((/* implicit */int) (unsigned short)31854)))) <= (((((/* implicit */int) arr_23 [i_8] [i_8])) ^ (((/* implicit */int) (short)4236))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        var_30 = ((/* implicit */int) min((var_30), ((+(((/* implicit */int) arr_23 [i_3] [i_3]))))));
                        var_31 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_8 - 3] [i_8] [i_9]))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (5360003737090506962ULL)))));
                    }
                    for (signed char i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        arr_32 [i_3] [i_4] [i_10] [i_10] [i_3] = ((/* implicit */signed char) (((-(17ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_3] [i_3] [i_10])))));
                        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26882))) : (arr_17 [i_3] [i_3] [(_Bool)1] [i_10])))) ? (var_0) : (((/* implicit */unsigned long long int) var_18))));
                        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_29 [i_3] [8] [i_4] [i_4] [i_8 - 4] [i_10] [i_3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13664))) : (arr_18 [i_3] [(unsigned short)10] [i_10])))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_2))));
                    }
                    for (unsigned long long int i_11 = 2; i_11 < 10; i_11 += 3) 
                    {
                        var_34 = (~(((/* implicit */int) (!(((/* implicit */_Bool) 2U))))));
                        arr_36 [i_8] [i_3] [i_3] = ((/* implicit */unsigned int) var_16);
                        arr_37 [i_11] [i_8 - 2] [i_8] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) (_Bool)1);
                        var_35 = (+(((/* implicit */int) var_1)));
                    }
                }
                /* LoopSeq 4 */
                for (int i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    arr_40 [(_Bool)1] [i_3] [i_3] [i_3] = arr_29 [i_3] [i_3] [(_Bool)0] [i_3] [i_3] [10ULL] [i_3];
                    var_36 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_4 - 2])) || (((/* implicit */_Bool) 2730689795U))));
                    /* LoopSeq 2 */
                    for (signed char i_13 = 2; i_13 < 10; i_13 += 2) 
                    {
                        arr_43 [i_3] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                        arr_44 [i_12] [i_12] [i_12] [i_3] [i_12] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_3 [i_3] [i_12] [i_3]) || (arr_3 [i_3] [i_12] [i_13]))))));
                    }
                    for (unsigned long long int i_14 = 1; i_14 < 10; i_14 += 3) 
                    {
                        arr_47 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)45)) ? (5360003737090506960ULL) : (((/* implicit */unsigned long long int) (+(4294967278U))))));
                        var_37 = ((/* implicit */_Bool) arr_34 [i_3] [i_4] [i_7] [i_12] [i_14] [i_14]);
                        var_38 = ((/* implicit */unsigned long long int) (-(4294967291U)));
                    }
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    arr_51 [i_3] [i_3] [i_3] [i_3] [i_3] = ((int) var_9);
                    var_39 += ((/* implicit */signed char) ((arr_48 [i_4 - 2] [i_4] [i_7] [i_4 - 2]) != (arr_48 [0U] [i_4] [i_7] [i_4])));
                }
                for (int i_16 = 0; i_16 < 12; i_16 += 4) 
                {
                    var_40 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 5360003737090506962ULL)) && (arr_23 [i_7] [i_7]))) ? (((/* implicit */int) (unsigned short)51488)) : (((/* implicit */int) (_Bool)1))));
                    arr_54 [i_3] [i_4] [i_3] = ((/* implicit */unsigned long long int) (((-(var_0))) < (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) -1341400346)) : (arr_17 [i_3] [i_3] [i_3] [i_3])))));
                    var_41 = ((/* implicit */_Bool) min((var_41), ((!((!(((/* implicit */_Bool) (signed char)-22))))))));
                }
                for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                {
                    var_42 = ((/* implicit */unsigned long long int) var_11);
                    var_43 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_17) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_16 [i_17 + 1] [(short)4] [i_4 + 1]))))) ? (((/* implicit */unsigned int) 983040)) : ((-(22U)))));
                    var_44 = ((/* implicit */_Bool) arr_8 [i_17]);
                }
                /* LoopSeq 2 */
                for (int i_18 = 0; i_18 < 12; i_18 += 4) 
                {
                    var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? ((+(((/* implicit */int) (signed char)92)))) : (((/* implicit */int) arr_60 [i_3] [i_3]))));
                    arr_61 [i_3] [i_4 - 2] [i_4] [i_3] = ((/* implicit */unsigned short) (short)-10400);
                    var_46 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 5360003737090506958ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26053))) : (1313779236958644380ULL)))));
                    var_47 = ((((/* implicit */_Bool) 16U)) && (((/* implicit */_Bool) arr_56 [i_3] [i_4 - 1] [i_4] [i_3])));
                }
                for (unsigned short i_19 = 0; i_19 < 12; i_19 += 3) 
                {
                    var_48 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1139486784))));
                    var_49 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_60 [i_7] [i_3])) ? (((/* implicit */int) arr_63 [i_3] [i_3] [i_4 - 1] [i_19] [i_7])) : (((/* implicit */int) arr_63 [i_3] [i_4] [i_4 - 1] [i_3] [i_19]))));
                }
            }
            for (unsigned short i_20 = 0; i_20 < 12; i_20 += 4) 
            {
                var_50 = ((/* implicit */unsigned int) ((unsigned short) (-(var_12))));
                var_51 = ((/* implicit */int) (!(((/* implicit */_Bool) 4294967271U))));
                /* LoopSeq 1 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_18))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [i_3] [i_3]))));
                    arr_69 [i_3] [i_3] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1431974331)) ? (526808847757944060ULL) : (((/* implicit */unsigned long long int) 27538433))));
                }
                var_53 = (~(((/* implicit */int) arr_49 [i_3] [i_3] [i_3])));
            }
        }
        for (unsigned int i_22 = 0; i_22 < 12; i_22 += 4) 
        {
            var_54 ^= var_6;
            arr_73 [i_3] [i_22] [i_3] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) 15U)))))))));
            var_55 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_64 [i_3])))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_1 [i_3]))))) : (((/* implicit */int) ((((arr_8 [i_22]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) >= (((/* implicit */unsigned long long int) (+(-1656318519)))))))));
        }
        arr_74 [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) < (((unsigned long long int) 6ULL)))))));
        /* LoopNest 2 */
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            for (unsigned int i_24 = 4; i_24 < 11; i_24 += 3) 
            {
                {
                    var_56 = ((/* implicit */unsigned int) (-(-726973093)));
                    /* LoopSeq 2 */
                    for (unsigned int i_25 = 0; i_25 < 12; i_25 += 2) 
                    {
                        var_57 = ((/* implicit */_Bool) ((signed char) (unsigned short)13663));
                        arr_84 [i_3] [i_24] [i_23] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1439613579)) ? (((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (short)2047)))) : (((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) (_Bool)1))));
                        var_58 = ((/* implicit */_Bool) arr_35 [i_23] [i_23] [i_23] [i_23] [i_23] [i_3] [i_3]);
                        var_59 |= ((/* implicit */int) (+((+(((5871756804221597968ULL) ^ (arr_34 [0] [i_3] [i_3] [i_23] [i_23] [i_25])))))));
                    }
                    for (int i_26 = 3; i_26 < 10; i_26 += 3) 
                    {
                        var_60 = ((/* implicit */unsigned short) -1431974332);
                        var_61 = ((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_78 [i_26 + 2]))) + (arr_24 [i_26 + 1] [i_23] [i_26 + 1] [i_24 - 2]))), (((/* implicit */unsigned int) ((unsigned short) arr_78 [i_26 - 3])))));
                        var_62 = ((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_49 [i_3] [i_23] [i_26 + 2]), (((/* implicit */unsigned short) arr_28 [i_3] [(_Bool)1] [i_24 - 1] [i_26] [i_3])))))));
                    }
                }
            } 
        } 
    }
    var_63 = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) % (min((((/* implicit */unsigned long long int) var_8)), (var_7))))), (((/* implicit */unsigned long long int) 4294967294U))));
}
