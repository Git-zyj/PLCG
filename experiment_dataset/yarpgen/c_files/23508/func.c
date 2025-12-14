/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23508
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
    var_16 &= ((/* implicit */_Bool) (-(((var_9) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) > (295787154371333565ULL))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) 13855085472317843759ULL))));
                            /* LoopSeq 4 */
                            for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 1) 
                            {
                                arr_12 [i_0] [i_0] [i_4 + 1] = var_14;
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_6 [i_1] [i_2] [i_3] [i_4])))) + (((((/* implicit */int) var_8)) + (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))))))))));
                            }
                            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                            {
                                arr_15 [i_0] [i_1] [i_2 + 1] [i_3] [i_0] [i_5] = ((/* implicit */_Bool) ((arr_8 [4ULL] [4ULL] [i_0] [i_3]) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [i_5] [i_1] [i_2]))))) ? (((((/* implicit */_Bool) 15101874224131707579ULL)) ? (arr_0 [i_0] [i_1]) : (var_7))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_1 [i_0] [i_0])))))));
                                arr_16 [i_0] [i_0] [i_2] [i_3] [i_5] = ((/* implicit */_Bool) var_10);
                                var_19 = max((max((((_Bool) arr_4 [(_Bool)1] [(_Bool)1] [i_2] [i_2])), (min(((_Bool)1), (var_8))))), (max((var_2), ((_Bool)1))));
                                arr_17 [i_5] [i_5 - 1] [i_5] [i_0] [i_5] = (!(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) || ((_Bool)1))));
                            }
                            /* vectorizable */
                            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                            {
                                arr_22 [i_0] [i_0] [13ULL] [i_3] = (~(var_14));
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))))));
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : (11066110815303307355ULL)))));
                                var_22 = var_11;
                            }
                            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                            {
                                arr_27 [10ULL] [i_3] [i_2] |= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((~(arr_3 [i_0] [i_0] [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 608592122070015161ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                                arr_28 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) arr_18 [i_0] [(_Bool)1] [i_2] [i_3])), (7106430719755666197ULL)))))) ? (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) ((_Bool) var_14))))) : (((/* implicit */int) var_9))));
                                var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1679423033035761743ULL)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (var_0))) : (((unsigned long long int) var_14))))) ? (var_14) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))))));
                                arr_29 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17487083283007442935ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) min((arr_19 [i_0] [i_0] [i_0]), ((_Bool)1)))))), (((/* implicit */int) var_11))));
                            }
                        }
                    } 
                } 
                arr_30 [i_0] [i_1] [i_0] = (((_Bool)1) ? (17879158919113495625ULL) : (7433551448311388199ULL));
            }
        } 
    } 
}
