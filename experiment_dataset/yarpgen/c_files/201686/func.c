/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201686
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
    var_15 = ((/* implicit */short) var_14);
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        var_16 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [19ULL] [i_1])) ? (((/* implicit */int) (unsigned short)56442)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))))), (max((((/* implicit */unsigned long long int) arr_3 [i_2 - 2] [i_0 + 2])), (arr_5 [i_0] [i_0])))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            var_17 *= ((/* implicit */short) var_12);
                            var_18 -= ((/* implicit */unsigned short) ((_Bool) var_2));
                            var_19 = var_1;
                            var_20 = ((/* implicit */unsigned short) (_Bool)1);
                        }
                        arr_11 [i_0] [i_1] [i_2] [i_3] &= ((/* implicit */short) (+(((/* implicit */int) var_3))));
                        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
                        {
                            var_22 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (1667242406749712721ULL))));
                            arr_15 [i_3] [i_2] = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_1))))) * (arr_0 [i_5]))), (((/* implicit */unsigned long long int) min((arr_12 [i_2] [i_0 - 2] [i_0] [i_2] [i_0 - 1] [i_2 + 1] [i_2 - 1]), (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0 - 2] [i_0] [i_3])))))));
                        }
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned short) arr_5 [i_1] [i_6]);
                            arr_19 [i_2] [i_2] [i_2] [i_6] = ((/* implicit */unsigned short) ((16779501666959838890ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)37)))));
                        }
                        for (short i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            var_24 = (((!(((/* implicit */_Bool) arr_3 [i_2 + 2] [5ULL])))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (min((((/* implicit */long long int) var_13)), (var_0))));
                            var_25 -= ((/* implicit */unsigned short) arr_1 [i_3] [i_7]);
                            var_26 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_10)))) >= (((unsigned long long int) min((((/* implicit */long long int) (short)-3)), (var_0))))));
                            var_27 = ((/* implicit */short) (_Bool)1);
                        }
                    }
                    for (short i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned short) min((max(((~(16355346706528282542ULL))), (((/* implicit */unsigned long long int) (~(arr_20 [i_0] [(short)12] [9LL] [i_0] [i_8])))))), (max((((/* implicit */unsigned long long int) arr_4 [i_0 + 1] [i_1] [i_1] [11ULL])), (var_12)))));
                        /* LoopSeq 3 */
                        for (short i_9 = 2; i_9 < 20; i_9 += 3) 
                        {
                            var_29 += ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_1] [(unsigned short)6])))) : ((~(((/* implicit */int) (short)-3))))))) ? ((+(((/* implicit */int) arr_8 [i_0] [i_2] [i_8] [i_0])))) : (((/* implicit */int) arr_22 [i_9 - 1] [i_1] [i_2] [i_8] [i_1] [i_1]))));
                            arr_27 [i_2] [i_9] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_23 [i_0 - 2] [i_2] [i_2] [i_8] [i_8] [i_9]))))))), (max((((((/* implicit */_Bool) (short)3)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_25 [i_9] [i_8] [i_2] [i_2] [i_0] [i_0])), (1981914683))))))));
                            arr_28 [i_0] [i_0] [i_0] [i_2] [i_8] [i_8] [i_9] = ((/* implicit */int) arr_26 [i_2] [i_2] [i_2] [i_2 - 1] [i_2 + 2]);
                        }
                        /* vectorizable */
                        for (int i_10 = 3; i_10 < 17; i_10 += 1) /* same iter space */
                        {
                            var_30 = ((/* implicit */int) (-(2091397367181269049ULL)));
                            var_31 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [15ULL])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)14966)))))));
                        }
                        for (int i_11 = 3; i_11 < 17; i_11 += 1) /* same iter space */
                        {
                            var_32 -= ((/* implicit */signed char) min((3455129122448656325ULL), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(unsigned short)15] [i_1] [i_2] [i_8] [i_1] [i_1] [i_11 + 3]))) ^ (2091397367181269049ULL)))));
                            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) (short)3))));
                            arr_34 [i_0] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_0 - 1])), (((((/* implicit */_Bool) arr_2 [(short)20])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_12)))))) ? (((/* implicit */int) arr_2 [i_8])) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (unsigned short)58913)))))));
                            arr_35 [i_0] [i_1] [i_2] [i_2] [i_11 + 2] = ((/* implicit */_Bool) ((unsigned short) ((arr_18 [i_0 - 1] [i_1] [i_0 - 1] [i_11 - 3] [i_2 + 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))));
                        }
                    }
                    arr_36 [i_0] [i_2] = ((/* implicit */int) min((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */long long int) 1860622367))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 0; i_12 < 21; i_12 += 3) 
                    {
                        var_34 = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2] [i_2 - 1] [i_2]))))), (arr_16 [i_0] [i_0] [i_1] [i_2] [(unsigned short)10]));
                        var_35 = ((/* implicit */_Bool) max((((/* implicit */long long int) -1795059796)), (max((((/* implicit */long long int) (-(((/* implicit */int) var_6))))), (var_10)))));
                        var_36 *= ((/* implicit */short) ((unsigned short) (unsigned short)6085));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                        {
                            {
                                arr_45 [i_2] [i_1] [i_2] [i_13] [(unsigned short)15] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((short) arr_25 [i_0 - 2] [i_0 + 1] [i_2] [i_2] [i_13] [(short)20]))), (((((/* implicit */_Bool) arr_1 [i_13 + 1] [i_14 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (1667242406749712739ULL)))));
                                var_37 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) 14455392629154389471ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))))))));
                                arr_46 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((+(((/* implicit */int) var_4)))), (((/* implicit */int) var_11)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_38 -= ((/* implicit */int) ((var_4) ? (var_9) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) var_6))))), (var_10))))));
    var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((var_4) ? (9371281859509534520ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7))));
}
