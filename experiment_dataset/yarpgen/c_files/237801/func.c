/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237801
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
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_1 [i_0 - 2]))))));
                arr_4 [i_0] [i_0] &= ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 9007199221186560LL)) ? (-9101345939683924097LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)3))))), (((/* implicit */long long int) (~(var_7))))))) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) arr_1 [(signed char)14])));
                var_21 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) (unsigned short)46040)))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [(unsigned char)7] [i_1] [i_1])));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_11);
    /* LoopSeq 3 */
    for (long long int i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned char) (-(6147739894191930648ULL)));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -9101345939683924091LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_2] [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) <= (9101345939683924105LL))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_2]))) == (((((/* implicit */_Bool) arr_7 [i_2])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_2])))))))) : ((-(((/* implicit */int) (unsigned char)15))))));
        arr_8 [i_2] = ((/* implicit */int) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_6 [(unsigned char)8] [i_2]))))), (((((/* implicit */_Bool) 1474679207)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (3882382025U))))) != (var_17)));
    }
    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 3; i_4 < 21; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        var_25 = min((max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) arr_16 [i_3] [6U] [i_5] [i_6] [i_3])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_19)))))), (((/* implicit */int) (signed char)119)));
                        arr_19 [0ULL] [0ULL] [i_5] [i_5] = ((/* implicit */unsigned char) arr_10 [i_3]);
                        var_26 = 666948998;
                        var_27 = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_16 [i_4 - 1] [i_4 - 2] [i_4 + 1] [i_4 - 2] [i_4 - 1])))) == (max((((((/* implicit */_Bool) arr_15 [i_3] [i_3])) ? (((/* implicit */long long int) var_17)) : (5468115976761515660LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_4] [i_5])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3] [i_4] [i_5] [i_5] [i_3])))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned char) arr_5 [i_5] [i_4 - 1]);
                                arr_25 [i_3] [i_4] [i_3] [i_7] [i_7] [i_3] [i_8] = ((/* implicit */signed char) min((max((((/* implicit */long long int) min((-1076407636), (((/* implicit */int) var_4))))), (arr_15 [i_3] [i_8]))), (((/* implicit */long long int) ((((/* implicit */int) min((var_13), ((_Bool)1)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
                                var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_4 + 1] [(signed char)6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_4 + 1] [i_8]))) : (arr_15 [i_4 + 1] [i_4 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_4 + 1] [i_7]))))) : (((/* implicit */int) ((unsigned char) arr_15 [i_4 + 1] [i_4 - 1]))));
                                var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_7] [i_7] [i_5] [i_7] [i_7] [8])) ? (((/* implicit */int) ((((/* implicit */int) var_9)) != (max((var_7), (((/* implicit */int) (unsigned char)128))))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (signed char)59))))) == (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)34)))))))))))));
                                var_31 = ((/* implicit */long long int) (+(max((((((/* implicit */_Bool) arr_21 [i_7] [19LL])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (signed char)0))))))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_17 [i_3] [i_3] [i_5] [i_4] [i_4 - 1])))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) max((var_3), (var_19)))) <= (((/* implicit */int) ((((/* implicit */int) var_15)) != (888618722)))))))));
                }
            } 
        } 
        arr_26 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_3] [i_3]))) <= (9101345939683924073LL))) ? (((/* implicit */long long int) max((65520U), (((/* implicit */unsigned int) var_10))))) : (var_0)))) ? (((/* implicit */unsigned long long int) (-(arr_12 [i_3] [i_3])))) : (min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)51))) / (var_11)))))));
        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min(((unsigned char)1), (((/* implicit */unsigned char) var_18))))), (((((/* implicit */_Bool) arr_7 [i_3])) ? (11909527208493743403ULL) : (((/* implicit */unsigned long long int) 4294967295U))))))) ? (var_11) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) (_Bool)1))))) : ((-(((/* implicit */int) (signed char)72))))))))))));
    }
    for (unsigned char i_9 = 0; i_9 < 15; i_9 += 1) 
    {
        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((min((((/* implicit */int) var_18)), (1961190373))) == (((/* implicit */int) (((((_Bool)1) ? (-9101345939683924074LL) : (arr_12 [i_9] [i_9]))) == (((/* implicit */long long int) ((/* implicit */int) ((4294967274U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_9])))))))))))))));
        var_35 &= ((/* implicit */unsigned char) max(((+(((((/* implicit */_Bool) 11909527208493743403ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_9] [i_9] [i_9] [(signed char)15] [i_9] [i_9]))) : (6141292471714577647ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_9] [i_9] [i_9] [i_9] [i_9]))) <= (853016932034888922ULL))))));
    }
    var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_14)), (max(((unsigned char)204), (var_19)))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) 6872007472252453441ULL))))), (var_5))))));
}
