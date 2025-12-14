/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28883
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
    var_12 = ((/* implicit */unsigned long long int) var_11);
    var_13 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) (signed char)-27)), ((~(1537188658699164547ULL))))), (((/* implicit */unsigned long long int) var_10))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                var_14 += ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_0] [(unsigned short)15] [i_1 - 1])) ? (arr_4 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_0 + 1] [i_0]))))) * (((/* implicit */unsigned int) ((var_3) ? (((/* implicit */int) (unsigned short)36823)) : (((/* implicit */int) var_4)))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2391))) + (arr_4 [i_0])))) ? (((/* implicit */unsigned long long int) 0)) : (((((/* implicit */_Bool) 0)) ? (11213436777175911686ULL) : (var_8)))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_14 [i_2] [i_3] [i_2] [i_1] [i_2] = ((/* implicit */long long int) arr_2 [i_1] [i_3 - 1]);
                                arr_15 [i_4] [i_4] [i_2] [i_4] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (min((697776627751205896ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2372508103U)) ? (1922459189U) : (4294967295U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_3 - 2])))));
                                var_15 += ((/* implicit */long long int) ((unsigned int) max((var_11), (((/* implicit */long long int) (~(-1827473505)))))));
                                var_16 |= ((/* implicit */int) max((17748967445958345734ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28712)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (2372508085U)))))))));
                                arr_16 [i_0 + 2] [i_3] &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_1])) ? (((unsigned int) var_11)) : (((((/* implicit */_Bool) (unsigned short)28696)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_2]))))))) * (((/* implicit */unsigned int) (-(((/* implicit */int) var_0)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        var_17 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) 4294967289U)) ^ (arr_7 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_5] [(short)10] [i_1]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 134209536U)))))) : (((var_6) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_4 [i_0])) > (var_6)))))))));
                        arr_20 [i_0 - 2] [i_1 + 1] [i_2] [i_5] [9LL] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_10)), (((17748967445958345719ULL) - (((((/* implicit */_Bool) 1922459169U)) ? (((/* implicit */unsigned long long int) 134209536U)) : (697776627751205903ULL)))))));
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (1827473523) : (var_10)));
                    }
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 3; i_7 < 15; i_7 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned int) max((var_19), (max((max((arr_4 [i_6]), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)103))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) arr_24 [i_0] [i_1] [i_0])) : (var_6)))))))))));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_10))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_8 = 3; i_8 < 18; i_8 += 1) 
                        {
                            arr_27 [i_1] [6ULL] [i_2] [i_1] [i_1] [(signed char)14] [i_2] = ((/* implicit */signed char) (-(((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24))) : (134209532U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                            var_21 = ((/* implicit */_Bool) 15U);
                            var_22 = ((/* implicit */int) (-(arr_8 [i_0])));
                        }
                        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) 
                        {
                            arr_31 [i_0] [i_2] = ((((/* implicit */_Bool) max((((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [5])) ? (((/* implicit */unsigned int) arr_22 [i_2] [i_2] [17U] [i_2] [(unsigned short)3] [i_2])) : (var_7))))))) ? (((1922459169U) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_18 [(_Bool)1] [i_2] [i_2] [i_2] [9ULL])) > (((/* implicit */int) var_5)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(arr_28 [i_0] [i_0] [i_0] [i_0] [i_0])))) <= (max((((/* implicit */unsigned long long int) 3013584860U)), (11799060749721101303ULL))))))));
                            var_23 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(697776627751205881ULL)))) ? (((/* implicit */int) arr_10 [i_0] [i_0 - 1] [i_0 + 2] [i_2])) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_1 + 1] [i_2]))))), (min((max((((/* implicit */unsigned long long int) var_5)), (arr_7 [i_0] [i_1 - 1] [i_9] [i_6] [i_9] [i_1]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_6] [i_2] [i_1 - 1]))))))));
                            var_24 = ((/* implicit */_Bool) min((max((2372508077U), (((((/* implicit */_Bool) 2630588509U)) ? (1425477129U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-88))))))), (((/* implicit */unsigned int) (+(((/* implicit */int) max((arr_12 [i_2]), (((/* implicit */unsigned char) (signed char)(-127 - 1)))))))))));
                        }
                        for (long long int i_10 = 0; i_10 < 19; i_10 += 3) 
                        {
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_0 - 1] [i_1 - 1] [i_2]))))) - (min((((/* implicit */unsigned int) arr_6 [i_1] [i_1] [i_10])), (var_7))))))));
                            arr_36 [i_2] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) (-(2372508085U)));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((3013584860U) < (((/* implicit */unsigned int) 1))))) : (min((-1827473505), (((/* implicit */int) (_Bool)1))))));
                        }
                        var_27 |= ((/* implicit */long long int) ((17748967445958345734ULL) ^ (((/* implicit */unsigned long long int) 1827473522))));
                    }
                    arr_37 [i_2] [i_1 - 1] = max(((+(max((var_8), (((/* implicit */unsigned long long int) var_11)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1] [i_2])) ? (var_2) : (((/* implicit */unsigned int) var_10))))));
                }
                var_28 = ((/* implicit */short) 260934104973393399ULL);
            }
        } 
    } 
}
