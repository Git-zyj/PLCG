/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37468
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
    var_17 -= var_16;
    var_18 = ((/* implicit */short) var_9);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) arr_0 [i_0]);
        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        arr_3 [0U] [i_0] = ((/* implicit */int) (~(((arr_1 [i_0] [i_0]) << (((1055074893) - (1055074855)))))));
        var_20 = ((/* implicit */signed char) max((5105902243061281781LL), (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0])))))));
    }
    for (int i_1 = 4; i_1 < 15; i_1 += 3) 
    {
        /* LoopSeq 4 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) 5105902243061281781LL);
            arr_8 [6] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29533)) ? (8112170934900285465ULL) : (17911855960690919ULL))))));
            arr_9 [1] = ((/* implicit */long long int) arr_5 [(_Bool)1]);
        }
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-9790)) ? (0) : (-6)));
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                for (long long int i_5 = 1; i_5 < 15; i_5 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 283726776524341248LL)) ? (((/* implicit */int) arr_4 [i_5 + 1])) : (5)));
                        var_24 = ((/* implicit */unsigned short) arr_11 [i_5 + 1] [i_5 + 1] [i_5]);
                        arr_19 [i_1] [3LL] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_1 - 4] [i_5 - 1])) ? (((((/* implicit */_Bool) 5105902243061281781LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_15 [(unsigned short)9] [i_3] [i_3] [i_3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)45292)))))));
                        var_25 = ((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) / (arr_10 [i_5] [i_4] [i_1])));
                    }
                } 
            } 
        }
        for (int i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) max((((((/* implicit */_Bool) var_6)) ? (arr_20 [i_1 - 2] [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) arr_7 [i_1 - 3] [i_6] [i_6])))))));
            var_27 = arr_13 [i_1] [i_1] [i_1] [i_1];
            /* LoopNest 2 */
            for (unsigned short i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                for (unsigned short i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    {
                        var_28 = ((/* implicit */long long int) min((var_28), (((((/* implicit */_Bool) min((-5105902243061281765LL), (((/* implicit */long long int) min((arr_17 [(_Bool)1] [(_Bool)1]), (((/* implicit */int) (unsigned short)20271)))))))) ? ((~(arr_29 [i_1 + 1]))) : (var_1)))));
                        var_29 ^= ((((/* implicit */_Bool) (short)2655)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2055363361U));
                    }
                } 
            } 
            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_6])) ? (((((/* implicit */_Bool) arr_23 [i_1 - 3] [i_1 - 1])) ? (arr_23 [i_1 + 1] [i_1 + 1]) : (arr_23 [i_1 - 3] [i_1 - 2]))) : (((((/* implicit */_Bool) min(((signed char)127), ((signed char)-5)))) ? (arr_23 [i_1 - 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45287)))))));
            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) var_6))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (short i_10 = 1; i_10 < 15; i_10 += 3) 
            {
                for (long long int i_11 = 1; i_11 < 14; i_11 += 1) 
                {
                    {
                        arr_38 [i_1] [8ULL] [13LL] [i_1] [1LL] [i_10] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_31 [i_1 - 4] [i_1 - 3])) | (arr_17 [i_11 + 1] [i_9])))));
                        /* LoopSeq 1 */
                        for (long long int i_12 = 2; i_12 < 14; i_12 += 1) 
                        {
                            var_32 = ((/* implicit */short) min((max(((unsigned short)11), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_40 [i_1] [i_9] [i_10] [(unsigned short)10] [8] [i_11 + 2])))))));
                            var_33 = ((/* implicit */unsigned short) arr_21 [10ULL] [i_9] [(short)1]);
                            var_34 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(-1LL))))));
                            var_35 = ((/* implicit */int) max((var_35), ((-(((/* implicit */int) max((arr_33 [i_10 + 1] [i_10 + 1] [i_1 + 1]), (arr_33 [i_10 + 1] [i_9] [i_1 + 1]))))))));
                            var_36 += ((/* implicit */int) max(((+(((((/* implicit */unsigned long long int) var_15)) - (arr_23 [i_1 - 3] [7LL]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
                        }
                    }
                } 
            } 
            arr_41 [i_9] [i_9] [i_1] = ((/* implicit */signed char) var_13);
            var_37 = ((/* implicit */int) (unsigned short)61679);
            var_38 = ((/* implicit */signed char) var_16);
            arr_42 [i_1] [i_9] = ((/* implicit */long long int) var_9);
        }
        var_39 = ((/* implicit */unsigned long long int) arr_7 [i_1] [i_1 - 3] [i_1]);
    }
    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
    {
        var_40 = ((/* implicit */long long int) (((~(arr_44 [i_13 + 1]))) / (((((/* implicit */_Bool) arr_44 [i_13 + 1])) ? (arr_44 [i_13 + 1]) : (2239603935U)))));
        arr_45 [i_13] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(283726776524341254LL)))) != (((var_2) ^ (((/* implicit */unsigned long long int) arr_44 [i_13 + 1]))))));
        var_41 = ((/* implicit */signed char) -5105902243061281746LL);
        arr_46 [i_13] = ((/* implicit */signed char) arr_43 [i_13] [10ULL]);
        /* LoopSeq 1 */
        for (unsigned short i_14 = 0; i_14 < 19; i_14 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_15 = 1; i_15 < 15; i_15 += 4) 
            {
                var_42 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_50 [i_13])), (var_2)))) ? (((/* implicit */long long int) arr_50 [i_13])) : (var_1)));
                /* LoopNest 2 */
                for (long long int i_16 = 1; i_16 < 18; i_16 += 3) 
                {
                    for (long long int i_17 = 3; i_17 < 15; i_17 += 3) 
                    {
                        {
                            var_43 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (arr_51 [i_13] [i_15] [i_15] [i_15] [i_17] [i_13])))) ? (((/* implicit */unsigned long long int) arr_54 [(unsigned short)4] [(_Bool)1] [(signed char)15] [(_Bool)1] [i_13 + 1] [i_13])) : (max((((/* implicit */unsigned long long int) var_4)), (18014123631575040ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((!(((/* implicit */_Bool) arr_47 [i_13] [i_13])))), (((((/* implicit */_Bool) arr_53 [i_13] [i_13] [6LL] [17LL] [i_13 + 1])) && (((/* implicit */_Bool) arr_50 [i_13 + 1])))))))) : (min((((/* implicit */unsigned int) max((-1557303410), (((/* implicit */int) var_11))))), (arr_50 [i_13 + 1])))));
                            var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_47 [i_13] [i_17 - 2])) ? (arr_51 [i_13] [i_17 + 4] [i_15] [i_16 + 1] [i_15 + 1] [i_13 + 1]) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
                            var_45 = ((/* implicit */int) arr_44 [i_14]);
                            var_46 -= ((/* implicit */long long int) var_2);
                        }
                    } 
                } 
                var_47 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((2505366681U) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? ((-(((/* implicit */int) (signed char)-75)))) : (((/* implicit */int) ((((/* implicit */long long int) -2035778754)) < (1249510663564168427LL)))))))));
            }
            for (unsigned short i_18 = 1; i_18 < 16; i_18 += 2) 
            {
                arr_60 [i_13 + 1] [i_13 + 1] [i_13] = ((/* implicit */_Bool) var_2);
                var_48 = ((/* implicit */_Bool) min((var_48), (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((arr_52 [i_13] [i_13] [i_13] [i_13]) / (((/* implicit */unsigned long long int) var_15))))) || (((/* implicit */_Bool) arr_48 [i_13 + 1] [(short)4] [6LL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_13 + 1] [i_13] [i_13 + 1] [i_14] [i_14] [i_18])))))) : (((((/* implicit */_Bool) arr_52 [i_13 + 1] [i_18 + 2] [i_13 + 1] [i_13])) ? (arr_52 [i_18 + 1] [i_18 - 1] [i_13 + 1] [i_13]) : (arr_52 [i_18] [i_18 + 3] [i_13 + 1] [i_13]))))))));
                /* LoopNest 2 */
                for (unsigned short i_19 = 0; i_19 < 19; i_19 += 1) 
                {
                    for (unsigned short i_20 = 0; i_20 < 19; i_20 += 4) 
                    {
                        {
                            var_49 = ((/* implicit */long long int) 3607641839U);
                            var_50 = ((/* implicit */long long int) min((arr_58 [i_13] [i_14] [i_14] [i_19]), (((/* implicit */unsigned long long int) (!(arr_43 [i_18 + 3] [i_13 + 1]))))));
                            arr_66 [i_13] [i_14] [i_13] [i_19] [i_20] = ((/* implicit */long long int) arr_52 [i_14] [i_14] [6ULL] [i_19]);
                        }
                    } 
                } 
            }
            for (long long int i_21 = 1; i_21 < 16; i_21 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_22 = 4; i_22 < 15; i_22 += 1) 
                {
                    for (short i_23 = 3; i_23 < 17; i_23 += 4) 
                    {
                        {
                            arr_76 [(short)9] [i_13] [i_21] [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((1827566420740224690ULL) % (((/* implicit */unsigned long long int) 283726776524341231LL))))) ? (((9223372036854775793LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-2655))))) : (max((max((((/* implicit */long long int) (unsigned short)53087)), (-283726776524341261LL))), (((/* implicit */long long int) (_Bool)1))))));
                            var_51 += ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((367793731U) >> (((1023U) - (1022U)))))) ? (((/* implicit */int) ((9223372036854775807LL) <= (((/* implicit */long long int) -643237353))))) : (((/* implicit */int) arr_74 [i_13 + 1] [(_Bool)1] [(unsigned short)0] [8] [i_13 + 1]))))), (arr_44 [(signed char)15])));
                            var_52 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_13] [i_23 - 2] [i_21])) ? (4580887441684223966LL) : (((/* implicit */long long int) arr_59 [i_13] [i_23 + 2] [i_21]))))));
                        }
                    } 
                } 
                var_53 = ((/* implicit */long long int) arr_49 [i_13] [i_14] [i_13] [i_13]);
                arr_77 [i_13] [i_13] [i_21] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) * (((/* implicit */int) (unsigned short)44340))))) ? (((/* implicit */int) (short)-11490)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned long long int) 1329691644373559500LL)) * (9389089162479609199ULL)))));
            }
            var_54 = ((/* implicit */short) arr_74 [i_13] [i_13] [i_13] [i_13] [i_13]);
        }
    }
}
