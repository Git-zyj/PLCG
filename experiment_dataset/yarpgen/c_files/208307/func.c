/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208307
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
    var_12 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) 0U)) : (0ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)70))) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (0U)))))));
    var_13 = ((/* implicit */short) 856802098);
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_7))))), ((-(((/* implicit */int) var_11))))))) ? (2206431790U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 1299105430)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6)))) >= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 8; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 8; i_4 += 3) 
                        {
                            {
                                arr_13 [i_4] [i_1] [i_2] [i_4] [i_4] [i_0 + 1] [i_4] = (unsigned short)5235;
                                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) max((((((/* implicit */int) min(((unsigned short)20857), (var_9)))) | (((/* implicit */int) (!(arr_5 [i_0] [i_2] [i_0])))))), ((-(((/* implicit */int) var_10)))))))));
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_2] [i_1 + 1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((~(0U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_2] [i_0] [i_0]))) : ((+((-(24U)))))));
                    arr_15 [(signed char)10] |= ((/* implicit */short) (((_Bool)1) ? (0) : (((/* implicit */int) (unsigned char)170))));
                    arr_16 [i_1] [(signed char)3] [3U] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) (unsigned short)8350)) > (((/* implicit */int) var_10))))), ((-(((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)245)) >> (((((/* implicit */int) (unsigned short)50093)) - (50063)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 2] [i_0 - 2])) == (((/* implicit */int) var_11)))))) - (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (arr_1 [i_0] [i_1])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_5 = 2; i_5 < 9; i_5 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned short) var_4);
                        arr_19 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_5])))))));
                    }
                    /* vectorizable */
                    for (short i_6 = 3; i_6 < 11; i_6 += 2) 
                    {
                        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-25787))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7))) / (arr_1 [i_6] [i_0])))));
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) var_7)) != (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))))))));
                        var_19 |= ((/* implicit */short) arr_12 [(unsigned short)2] [i_1] [(unsigned short)2] [(unsigned short)2] [(unsigned short)2] [i_6] [i_6]);
                        /* LoopSeq 4 */
                        for (int i_7 = 3; i_7 < 9; i_7 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
                            arr_27 [i_1] [(signed char)1] [5ULL] [i_1] [i_1] [(signed char)1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(13282246975071793248ULL)))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_2] [i_6 - 2] [i_2])))))));
                            var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0 - 1] [i_1] [i_1] [(_Bool)1]))));
                        }
                        for (long long int i_8 = 2; i_8 < 11; i_8 += 2) /* same iter space */
                        {
                            arr_32 [i_0] [i_1] [i_1] [i_2] [(unsigned char)7] [i_1] [i_1] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_6] [i_0])))))));
                            var_22 = ((/* implicit */unsigned char) var_10);
                            var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_4)))) == (((/* implicit */int) var_9)))))));
                        }
                        for (long long int i_9 = 2; i_9 < 11; i_9 += 2) /* same iter space */
                        {
                            arr_35 [i_9 + 1] [i_1] [i_2] [i_1] [i_0 - 2] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [(short)9] [i_1] [i_0]))));
                            var_25 = ((/* implicit */int) arr_4 [i_9]);
                        }
                        for (unsigned short i_10 = 1; i_10 < 11; i_10 += 2) 
                        {
                            var_26 = ((/* implicit */short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (5164497098637758368ULL)))));
                            var_27 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned short)8354)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)56535))))));
                            arr_39 [i_10] [i_6] [i_1] [i_2 + 4] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_22 [i_1] [i_6])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_1] [i_6 - 2] [i_2] [(signed char)4] [i_1])) && (((/* implicit */_Bool) arr_34 [i_0 - 2] [i_1 + 1] [i_2 + 4] [i_6 - 2] [i_10])))))));
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_0] [(unsigned short)2] [i_6] [i_10]))))) <= (5164497098637758368ULL))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_29 &= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-25787)), (var_8)))))))));
}
