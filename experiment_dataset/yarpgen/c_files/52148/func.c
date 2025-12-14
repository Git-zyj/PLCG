/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52148
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
    var_10 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((((/* implicit */_Bool) 31)) ? (((/* implicit */int) var_0)) : (var_5))))) + (((((/* implicit */int) var_2)) - (((/* implicit */int) ((signed char) (_Bool)1)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 3; i_2 < 22; i_2 += 4) /* same iter space */
                {
                    arr_7 [i_0 + 1] [i_0] = ((/* implicit */_Bool) arr_5 [i_0]);
                    arr_8 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_3 [i_0 - 1] [i_0] [i_2]))));
                }
                for (unsigned long long int i_3 = 3; i_3 < 22; i_3 += 4) /* same iter space */
                {
                    arr_13 [i_3 + 1] [i_0] [i_0] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-3)) ^ (((/* implicit */int) (unsigned short)36168))));
                    arr_14 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) == (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 8318718378134145147LL)) : (arr_9 [i_0])))))) == (min((((/* implicit */int) var_0)), ((+(((/* implicit */int) var_0))))))));
                    var_11 += ((/* implicit */long long int) var_5);
                }
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        {
                            arr_20 [i_0] [i_1] [i_4] [i_5] [i_0] = ((/* implicit */signed char) (unsigned short)21861);
                            /* LoopSeq 1 */
                            for (unsigned int i_6 = 3; i_6 < 21; i_6 += 2) 
                            {
                                var_12 = ((/* implicit */signed char) ((min((((/* implicit */long long int) 271405103U)), (-697524761725480831LL))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0]))))))));
                                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)39013)))) != ((+(((/* implicit */int) ((((/* implicit */int) (unsigned short)15)) < (((/* implicit */int) (signed char)-55))))))))))));
                                arr_24 [i_0] [i_1 + 1] [i_4] [i_5] [i_0] [i_0 - 1] = ((/* implicit */signed char) max((((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_1) : (((/* implicit */unsigned int) var_5)))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0 - 1] [i_0 + 1]))))), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) != (arr_1 [i_0]))))) != (3690386393853745994LL)))));
                            }
                            arr_25 [i_4] [i_4 - 2] [i_1 - 1] [i_1] [i_4] &= ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_19 [i_0] [i_4]), (((/* implicit */unsigned long long int) var_0)))))))), (max((arr_21 [i_5] [i_5] [i_5] [i_4 + 2] [i_0 + 1]), (arr_21 [i_5] [i_5] [i_5] [i_4 - 2] [i_0 - 1])))));
                            arr_26 [i_0 - 1] [i_0] [i_1 + 2] [i_4] [i_5] = (unsigned short)21849;
                            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_4] [i_1])) || ((_Bool)1)))) : ((~(((/* implicit */int) (signed char)-16)))))), (((/* implicit */int) arr_12 [i_4] [i_1 + 2] [i_0 - 1])))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) var_9))));
            }
        } 
    } 
    var_16 = ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (((var_1) * (((/* implicit */unsigned int) ((var_0) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))))));
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_0)), (max((var_3), (var_3))))))) > ((+(min((((/* implicit */unsigned long long int) 3260897095U)), (17720789664153046340ULL))))))))));
}
