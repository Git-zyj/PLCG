/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2474
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
    var_14 = ((var_6) < (((((/* implicit */_Bool) max((var_3), (((/* implicit */signed char) (_Bool)0))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) var_7)) | (((/* implicit */int) var_5)))))));
    var_15 = ((((var_8) + (2147483647))) << (((((((((/* implicit */_Bool) ((var_10) / (((/* implicit */int) var_3))))) ? (min((var_8), (((/* implicit */int) var_13)))) : (((/* implicit */int) ((_Bool) var_6))))) + (673693594))) - (22))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 4; i_2 < 23; i_2 += 4) 
                {
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 263657887044228120LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2 - 3] [i_1]))) : (arr_8 [i_0] [i_2] [i_2] [i_2 - 3])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 - 1] [i_2] [i_2] [i_2 + 1]))) : (((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (arr_2 [(signed char)9]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))))))));
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_11))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1))));
                }
                var_19 = ((/* implicit */short) min((var_19), (var_13)));
                /* LoopSeq 3 */
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    /* LoopSeq 4 */
                    for (int i_4 = 1; i_4 < 23; i_4 += 4) 
                    {
                        arr_15 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((max((var_12), (arr_0 [i_0 - 1] [i_0 - 1]))) ? (max((((/* implicit */int) arr_0 [17] [i_0 - 1])), (var_6))) : (((/* implicit */int) ((var_4) < (((/* implicit */unsigned long long int) arr_8 [i_4 + 1] [i_0] [i_0 - 1] [i_4 - 1])))))));
                        var_20 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_13 [i_0])) ? ((+(((/* implicit */int) var_12)))) : (((((/* implicit */int) var_12)) & (2147483647))))), (min((((/* implicit */int) (_Bool)1)), (((arr_0 [i_1] [i_1]) ? (((/* implicit */int) var_5)) : (var_6)))))));
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1))))));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [(signed char)4] [i_1] [i_1] [i_3])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-95))))))));
                        var_23 ^= ((((((/* implicit */int) arr_11 [i_1] [i_1] [i_3])) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_20 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) max((((/* implicit */int) (_Bool)1)), (-430077086))))) ? (17847929882246401547ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_24 = (+(((arr_10 [i_0] [i_3 - 1]) ? (((/* implicit */int) arr_6 [i_0 - 1] [i_0] [i_3] [i_3])) : (((/* implicit */int) arr_10 [i_0] [i_3 - 1])))));
                    }
                    for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (int i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            var_25 = 581096008;
                            var_26 = ((/* implicit */signed char) ((unsigned long long int) var_6));
                            arr_26 [i_8] [i_1] [i_0] [i_1] [i_0 - 1] = ((/* implicit */short) arr_7 [i_7] [i_3] [(short)1]);
                            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) arr_5 [(short)12] [i_1] [i_0]))));
                        }
                        var_28 = ((/* implicit */int) arr_24 [i_0] [i_0]);
                        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0 - 1] [i_1] [i_3])) + (var_6)))) ? (((/* implicit */int) ((_Bool) (signed char)-65))) : (((var_11) ? (((/* implicit */int) arr_23 [i_0] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_23 [i_0] [i_3 - 1] [i_3] [i_0] [i_3 - 1] [i_0] [i_0 - 1])))))))));
                    }
                    arr_27 [i_0] [i_0] [i_0] = var_9;
                }
                for (long long int i_9 = 0; i_9 < 24; i_9 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_19 [i_0] [i_0] [i_0] [i_0])))))), (((((var_0) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
                        var_31 = ((/* implicit */int) min((((/* implicit */long long int) arr_8 [i_10] [i_0] [i_10] [18U])), (max((max((((/* implicit */long long int) var_6)), (4174032161702922032LL))), (((/* implicit */long long int) var_6))))));
                    }
                    var_32 = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_13 [i_0])))))), (((max((var_10), (((/* implicit */int) var_12)))) | (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_21 [4] [i_1] [i_1] [i_0])) : (((/* implicit */int) (_Bool)1))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        var_33 -= ((/* implicit */unsigned long long int) max((arr_5 [i_0] [i_1] [i_9]), ((_Bool)1)));
                        arr_39 [i_11] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_12))) | (var_2))) == (((/* implicit */long long int) -609748164))))), (max((-2147483647), (-2147483647)))));
                    }
                }
                for (long long int i_12 = 0; i_12 < 24; i_12 += 3) /* same iter space */
                {
                    arr_42 [i_0] [i_0] [i_12] = ((/* implicit */short) var_12);
                    var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) -8628364390732863319LL)) ? (((((/* implicit */int) var_7)) | (max((((/* implicit */int) var_3)), (-2147483638))))) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_12]))));
                    var_35 = ((/* implicit */int) (~(((unsigned long long int) (!(((/* implicit */_Bool) var_1)))))));
                    var_36 |= ((/* implicit */int) arr_5 [i_1] [i_1] [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 2; i_13 < 23; i_13 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (short i_14 = 1; i_14 < 22; i_14 += 3) 
                        {
                            arr_48 [i_14 + 2] [i_0] [i_13] [i_12] [i_1] [i_0] [i_0 - 1] = min((((((/* implicit */int) (signed char)-115)) == (((/* implicit */int) arr_37 [i_13 - 1] [i_13] [i_13 - 2] [i_13])))), ((!(((var_8) != (((/* implicit */int) var_12)))))));
                            var_37 ^= ((/* implicit */int) ((15946243836404059451ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2621)))));
                        }
                        for (int i_15 = 0; i_15 < 24; i_15 += 2) 
                        {
                            var_38 = ((/* implicit */signed char) min((((unsigned long long int) max((((/* implicit */int) arr_36 [i_0] [i_13])), (2147483647)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((3101363586661865029ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))))));
                            var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) ((((((/* implicit */_Bool) 2147483637)) ? (((var_4) + (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((int) var_0))))) / (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) ((var_0) ^ (var_6))))))))))));
                            arr_52 [i_0] [(signed char)7] [i_13 - 1] [i_15] = ((/* implicit */short) ((min((((/* implicit */int) var_11)), (var_10))) + (((/* implicit */int) min((var_12), (arr_41 [i_0 - 1] [i_13 + 1] [i_15]))))));
                        }
                        /* LoopSeq 3 */
                        for (long long int i_16 = 0; i_16 < 24; i_16 += 2) 
                        {
                            var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) var_6))));
                            arr_55 [i_0] [i_0] [i_0] [i_0] [i_16] [i_16] = ((/* implicit */int) var_9);
                            var_41 = ((/* implicit */unsigned long long int) -528537575);
                        }
                        for (short i_17 = 0; i_17 < 24; i_17 += 3) 
                        {
                            arr_59 [i_0] [i_0] [i_0] [i_0] [i_0] [i_13] [i_17] = ((/* implicit */_Bool) (((_Bool)1) ? (((long long int) arr_28 [i_13] [i_13 - 1] [i_13 + 1] [i_13])) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_57 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1])))) ? (max((-2063795419), (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_16 [i_0 - 1] [i_1] [i_0 - 1] [i_0 - 1] [i_17] [i_13])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11)))))))));
                            var_42 = ((/* implicit */signed char) (!(((((/* implicit */unsigned long long int) (-(arr_45 [i_0] [i_1] [i_1] [i_13 - 2] [i_1] [i_0])))) == (((var_5) ? (2500500237305492191ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            var_43 *= ((/* implicit */_Bool) ((int) -1510680691));
                            var_44 ^= max((var_0), (((/* implicit */int) ((((/* implicit */int) arr_60 [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1])) <= (((/* implicit */int) arr_60 [i_1] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0]))))));
                        }
                    }
                }
            }
        } 
    } 
    var_45 = ((/* implicit */int) ((_Bool) var_7));
}
