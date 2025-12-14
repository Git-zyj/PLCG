/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28414
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
    var_20 = (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) - (8LL)))) & (((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (18446744073709551615ULL)))))));
    var_21 = ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (var_14));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((1357039729U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))), (arr_1 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */long long int) (short)32761);
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) arr_13 [i_0] [i_2] [i_2] [i_3] [i_3])) : (arr_9 [i_3] [i_2] [i_1] [i_0]))));
                        arr_15 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) var_18);
                        arr_16 [i_0] [i_2] = ((/* implicit */signed char) ((arr_1 [i_2]) != (arr_1 [i_3])));
                        arr_17 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] = ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) & (((((/* implicit */_Bool) ((16205473977518614045ULL) - (((/* implicit */unsigned long long int) 1357039738U))))) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18))))));
                        arr_18 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_1 [i_0]) : (arr_1 [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (arr_1 [i_1]) : (arr_1 [i_3]))))));
                    }
                } 
            } 
        } 
        arr_19 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_0] [i_0])), (min((524272U), (((/* implicit */unsigned int) (unsigned short)14256)))))))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 1; i_4 < 21; i_4 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            for (unsigned char i_6 = 3; i_6 < 22; i_6 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_25 [i_4] [i_4]))))));
                    arr_30 [i_6] [i_6] [i_6] = ((((/* implicit */_Bool) (signed char)-114)) || (arr_23 [i_4 - 1]));
                    arr_31 [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) -7174782574049117580LL)) ? (arr_21 [i_5] [i_4 - 1]) : (((/* implicit */long long int) (~(((/* implicit */int) var_6)))))));
                    arr_32 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) arr_23 [i_5])) : (((/* implicit */int) arr_23 [i_4 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 2; i_7 < 20; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 1; i_8 < 22; i_8 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) 17148937472652813174ULL);
                                arr_38 [i_4] [i_4] [i_4] [i_4 + 2] [i_4] [i_6] [i_4 + 1] = ((/* implicit */unsigned int) arr_26 [i_8 - 1] [i_4 - 1]);
                                arr_39 [i_6] [i_5] [i_6] = ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_29 [i_4 + 1] [i_7 + 1]));
                                arr_40 [i_8] [i_7 - 2] [i_6] [i_5] [i_4] = ((/* implicit */unsigned int) ((((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (2937927567U))) >= (arr_36 [i_4] [i_4 + 2] [i_6] [i_7] [i_8] [i_8 - 1])));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_37 [i_4] [i_4] [i_4 + 2] [(_Bool)1] [i_4]))));
        arr_41 [i_4] [i_4] = ((/* implicit */signed char) arr_35 [i_4] [8LL] [i_4] [i_4] [i_4] [i_4 - 1]);
        arr_42 [i_4] = ((/* implicit */short) arr_24 [i_4] [i_4] [i_4]);
        /* LoopSeq 2 */
        for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 1) 
        {
            arr_45 [i_9] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) >= (-713678881))))) - (((((/* implicit */_Bool) (unsigned short)96)) ? (524299U) : (2937927579U)))));
            arr_46 [i_9] = ((/* implicit */unsigned int) (~(((((/* implicit */long long int) ((/* implicit */int) var_9))) + (var_0)))));
            arr_47 [i_9] = ((/* implicit */short) ((1357039729U) < (1357039717U)));
            /* LoopNest 2 */
            for (long long int i_10 = 0; i_10 < 23; i_10 += 1) 
            {
                for (long long int i_11 = 2; i_11 < 20; i_11 += 1) 
                {
                    {
                        arr_53 [i_4] [i_4 + 2] [i_9] [i_10] [i_10] [i_11] = ((/* implicit */int) ((unsigned short) var_5));
                        arr_54 [i_4] [i_9] [i_9] [i_10] [i_10] [i_11] = ((/* implicit */int) arr_27 [i_11] [i_10] [i_9] [i_4]);
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) arr_44 [(signed char)20]))));
                        arr_55 [i_4] [i_4] [i_10] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_9])) ? (((/* implicit */int) (unsigned short)32767)) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (2738503736U)));
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (!(((/* implicit */_Bool) 288230376151707648LL)))))));
                    }
                } 
            } 
        }
        for (unsigned short i_12 = 0; i_12 < 23; i_12 += 3) 
        {
            arr_58 [i_4] [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_12]))) | (1914512729U)))) ? (((/* implicit */int) var_12)) : (((((/* implicit */int) arr_37 [i_4 + 1] [i_12] [i_4 + 1] [i_12] [i_12])) * (((/* implicit */int) var_12))))));
            arr_59 [i_4] [i_12] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_12] [i_12] [i_12] [i_4] [i_4 + 1] [i_4])) || (((/* implicit */_Bool) 1914512725U))));
        }
    }
    for (unsigned int i_13 = 1; i_13 < 21; i_13 += 2) /* same iter space */
    {
        arr_64 [i_13 + 2] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20659)) ? (524281U) : (2573782021U)));
        var_28 = ((/* implicit */unsigned int) ((max((4936821114520034712LL), (((/* implicit */long long int) arr_43 [18LL])))) != (((/* implicit */long long int) ((((/* implicit */_Bool) 2937927570U)) ? (((((/* implicit */_Bool) arr_29 [i_13] [i_13])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)-121)))) : (((((/* implicit */int) arr_57 [i_13] [i_13] [i_13])) & (((/* implicit */int) arr_57 [i_13] [i_13] [i_13 + 2])))))))));
    }
}
