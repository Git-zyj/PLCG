/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233944
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
    var_14 -= ((/* implicit */signed char) (_Bool)0);
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) + (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_10))))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
        var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)22965)) | (((/* implicit */int) arr_3 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 13; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1] [i_1])) <= (((/* implicit */int) arr_0 [i_1] [i_1]))));
        var_18 |= ((/* implicit */short) ((arr_3 [i_1] [i_1]) ? (arr_1 [i_1]) : (var_7)));
        /* LoopSeq 1 */
        for (signed char i_2 = 1; i_2 < 10; i_2 += 1) 
        {
            arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_2 + 1] [i_2 - 1])) & (var_8)));
            var_19 = ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
            arr_11 [i_1] [i_1] = ((/* implicit */unsigned int) var_8);
            var_20 = ((/* implicit */int) arr_6 [i_1]);
        }
    }
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        var_21 = ((/* implicit */signed char) max((var_21), (((signed char) arr_2 [i_3]))));
        var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_5 [(short)0])) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (short)-20922))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) (unsigned short)59248))))) ? (((/* implicit */int) max((arr_14 [i_3]), ((signed char)-112)))) : (((/* implicit */int) ((_Bool) var_2)))))));
        arr_15 [i_3] = ((/* implicit */unsigned short) ((int) (!((_Bool)1))));
        var_23 -= ((/* implicit */unsigned short) max((((arr_12 [i_3]) == (arr_12 [i_3]))), (((((/* implicit */_Bool) ((unsigned int) arr_2 [i_3]))) || (((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (var_4))))))));
        /* LoopSeq 1 */
        for (unsigned char i_4 = 3; i_4 < 8; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    {
                        arr_24 [i_3] [(unsigned char)7] [i_6] = ((/* implicit */short) var_13);
                        /* LoopSeq 2 */
                        for (short i_7 = 4; i_7 < 9; i_7 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (844734809) : (((/* implicit */int) arr_26 [i_3] [i_4] [(_Bool)1] [i_6] [i_4]))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))), ((_Bool)0)));
                            arr_28 [i_3] [i_4] |= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_13 [i_4] [i_4])), (var_2)))) ? (((/* implicit */int) (short)24576)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) & (var_11)))));
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (14596289018186439724ULL))))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
                        {
                            arr_32 [i_3] [i_4 + 1] [(signed char)2] [i_8] &= ((/* implicit */short) ((((/* implicit */unsigned long long int) var_8)) | (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(_Bool)1] [i_4]))) : (5768405406838762902ULL)))));
                            var_26 = ((/* implicit */long long int) ((int) ((unsigned char) (unsigned short)18114)));
                            var_27 = ((/* implicit */unsigned char) -716771165);
                            var_28 &= ((/* implicit */short) min(((!(((/* implicit */_Bool) ((unsigned int) 18446744073709551601ULL))))), (((((/* implicit */long long int) ((/* implicit */int) (short)-24576))) < (-1LL)))));
                        }
                    }
                } 
            } 
            var_29 = ((/* implicit */short) max((((/* implicit */unsigned int) arr_21 [i_3] [(unsigned char)10] [i_3] [i_3])), (var_7)));
            var_30 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_4 - 3] [i_4 + 2] [i_4 + 3] [i_4 - 1] [i_4 + 3])) ? (((/* implicit */int) (signed char)51)) : (((/* implicit */int) var_13))))), (((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
        }
    }
    for (long long int i_9 = 0; i_9 < 22; i_9 += 3) 
    {
        arr_35 [(signed char)4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)203))) - (arr_34 [i_9])))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)61440)) : (((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) (unsigned short)18011)) ? (((/* implicit */int) (unsigned short)61420)) : (((/* implicit */int) (signed char)109))))))) ? (((/* implicit */int) (unsigned short)18004)) : (((/* implicit */int) ((unsigned char) ((var_8) <= (((/* implicit */int) var_12))))))));
        var_31 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((2714913805694076997LL) & (((/* implicit */long long int) arr_34 [i_9])))) | (((/* implicit */long long int) ((/* implicit */int) (short)-24577)))))) ? (5768405406838762902ULL) : (((unsigned long long int) (short)-18202))));
        var_32 &= ((/* implicit */unsigned int) ((signed char) var_4));
        var_33 = ((/* implicit */short) max((((/* implicit */long long int) ((signed char) var_1))), (((long long int) (unsigned short)18010))));
        /* LoopSeq 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 2) 
            {
                arr_41 [i_9] [i_10] [i_10] [i_9] = ((/* implicit */signed char) ((int) max(((unsigned short)61440), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 18014398509481984ULL))))))));
                var_34 = ((/* implicit */short) (~(((arr_34 [i_10]) | (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                var_35 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) 17061479)) ? (8879250921924482859ULL) : (((/* implicit */unsigned long long int) arr_33 [i_11] [i_10])))));
            }
            for (unsigned short i_12 = 0; i_12 < 22; i_12 += 3) 
            {
                var_36 = ((/* implicit */_Bool) -2724399674975217651LL);
                var_37 -= ((/* implicit */long long int) ((((int) (_Bool)1)) % (((/* implicit */int) ((unsigned char) (unsigned char)132)))));
                var_38 = ((/* implicit */signed char) max((-1LL), (((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) 18014398509482012ULL))))), (((((/* implicit */_Bool) 7240834936048468449LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10)))))))));
            }
            for (long long int i_13 = 1; i_13 < 21; i_13 += 1) 
            {
                arr_48 [i_9] [i_9] [i_10] [i_13] = ((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_38 [i_13] [i_13] [i_13 - 1])) : (((/* implicit */int) arr_38 [i_13] [i_13 + 1] [i_13 + 1])))) + (2147483647))) << (((((((((/* implicit */int) arr_38 [i_13] [i_13 + 1] [i_13 + 1])) - (((/* implicit */int) (unsigned short)18010)))) + (40092))) - (10))));
                var_39 = (unsigned short)18013;
                var_40 |= ((/* implicit */unsigned long long int) arr_45 [i_9] [13ULL] [1] [i_9]);
                var_41 = ((/* implicit */short) var_7);
            }
            arr_49 [i_10] = ((/* implicit */unsigned char) ((_Bool) (unsigned char)57));
            arr_50 [i_9] [i_9] = ((/* implicit */long long int) var_7);
        }
        for (unsigned int i_14 = 0; i_14 < 22; i_14 += 4) 
        {
            var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) var_10))));
            var_43 |= ((/* implicit */unsigned char) var_9);
        }
    }
    var_44 = ((/* implicit */short) var_7);
}
