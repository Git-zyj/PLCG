/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194194
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(max((120LL), (((/* implicit */long long int) 2799051843U))))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (var_8))))));
    var_11 = ((/* implicit */unsigned int) var_5);
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) (signed char)18)))))) ? (10675947664866735475ULL) : (((/* implicit */unsigned long long int) 2799051837U))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 2799051831U);
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) ((signed char) arr_4 [i_0] [i_2]))) : (((arr_6 [i_2] [i_2 + 1] [12U]) ? (((/* implicit */int) arr_6 [i_2] [i_2 + 1] [i_2])) : (((/* implicit */int) arr_6 [i_2] [i_2 + 1] [i_2]))))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] [i_0] [i_3] = ((/* implicit */long long int) arr_3 [i_1] [i_1]);
                        var_14 = ((/* implicit */unsigned long long int) min((min((-7441669806558627680LL), (min((-8883316830195611487LL), (((/* implicit */long long int) -1357436403)))))), (((/* implicit */long long int) min((max(((unsigned char)27), ((unsigned char)77))), (((/* implicit */unsigned char) (signed char)101)))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)15] = ((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0]);
                        arr_14 [(signed char)18] = var_0;
                        arr_15 [i_4] [10] [i_0] [i_0] [i_0] [i_0] = max((((/* implicit */unsigned int) var_1)), (1371204673U));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_15 = ((/* implicit */long long int) min((var_0), (((/* implicit */signed char) var_4))));
                        arr_20 [i_5] [i_5] [i_2 + 2] [i_1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_19 [i_0] [16ULL] [3U] [i_5] [i_2 - 2])), (max((((var_8) << (((((/* implicit */int) var_2)) + (118))))), (((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) arr_6 [(unsigned char)12] [i_0] [i_0])) : (arr_3 [i_5] [i_0]))))))));
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_18 [i_2] [i_2] [i_1] [i_0]))) % (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) min((arr_16 [(short)18] [i_5] [i_2] [i_1] [i_1] [16]), (((/* implicit */int) max(((_Bool)1), (var_7))))))) : (min((min((-9223372036854775805LL), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) min((((/* implicit */short) arr_5 [i_1] [i_2 + 1])), (var_3))))))));
                        var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (((unsigned int) max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_2])), (arr_9 [i_1] [i_0] [(signed char)4] [i_5]))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 4; i_6 < 16; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 19; i_7 += 1) 
                        {
                            {
                                arr_26 [i_7] [i_7] [i_2] [i_6] [i_7] = min(((~(((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_7])) ? (((/* implicit */int) arr_11 [i_0])) : (((/* implicit */int) var_5)))))), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)253)) >= (((/* implicit */int) var_6))))) == (((((/* implicit */_Bool) arr_9 [i_0] [i_7] [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))))));
                                arr_27 [i_7] [i_2 + 2] [i_6] = (unsigned char)0;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 19; i_9 += 1) 
                        {
                            {
                                arr_33 [i_1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_9] = ((/* implicit */signed char) ((((((/* implicit */long long int) ((((/* implicit */int) var_2)) & (((/* implicit */int) arr_24 [i_0] [i_0] [i_2] [i_2] [i_0] [2] [i_9]))))) + (((long long int) arr_5 [i_0] [i_0])))) ^ (((/* implicit */long long int) ((/* implicit */int) max((((((/* implicit */_Bool) 14922207235276529533ULL)) || (((/* implicit */_Bool) (unsigned char)255)))), ((!(((/* implicit */_Bool) 1979725325))))))))));
                                arr_34 [i_9] [i_1] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) (unsigned char)31)) % (arr_8 [i_0] [i_0] [i_1] [i_2] [i_8] [(short)5]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */long long int) 1979725319)) == (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) -1979725298)), (1371204673U)))) : (3560681837390634671LL)))));
}
