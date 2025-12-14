/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201795
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
    for (long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_20 -= ((/* implicit */short) min((((/* implicit */unsigned long long int) (unsigned short)54914)), (12416846296357675689ULL)));
                arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 12416846296357675687ULL)) ? (((/* implicit */int) arr_4 [i_0 - 2])) : (((/* implicit */int) arr_4 [i_0 - 2]))))) ^ (((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 2]))) : (var_12)))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    arr_10 [i_0] [i_0] [i_0] [(signed char)2] = ((/* implicit */short) var_1);
                    var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_5 [(signed char)8] [i_1] [i_0 + 1]))));
                    arr_11 [i_0] [i_1] |= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)31421))));
                }
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    var_22 = ((/* implicit */_Bool) var_1);
                    var_23 = ((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (short)-30733)) ? (12U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                    arr_14 [i_0] [i_3] [i_3] = max((((/* implicit */unsigned int) ((((6029897777351875904ULL) | (((/* implicit */unsigned long long int) var_15)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1])))))), (((((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_1]))) - (var_9))) - (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))))));
                    var_24 = ((unsigned char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_9 [i_1] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [(unsigned char)13] [i_0]))) : (arr_9 [i_1] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) var_10)), ((signed char)0)))))));
                }
                for (int i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    arr_18 [i_0] [i_0 + 1] [i_1] [i_4] = ((((((/* implicit */_Bool) (short)-22907)) && (((/* implicit */_Bool) (signed char)7)))) ? (((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) var_1)) ? (-1089953411) : (((/* implicit */int) var_17)))) : (((((/* implicit */int) var_14)) << (((-2113040865130409734LL) + (2113040865130409763LL))))))) : (((((/* implicit */int) arr_12 [i_0 - 2] [i_0] [i_0 + 1])) >> (((9223372036854775807LL) - (9223372036854775778LL))))));
                    var_25 = ((/* implicit */unsigned char) arr_0 [i_1]);
                }
                arr_19 [i_0] [2] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-26828)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)96))) : (921637721U)))), (((max((((/* implicit */unsigned long long int) 1152921503533105152LL)), (6029897777351875929ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_0), (((/* implicit */short) var_4))))))))));
            }
        } 
    } 
    var_26 = ((unsigned char) ((var_15) << (((((((/* implicit */int) var_0)) + (8774))) - (17)))));
    var_27 = ((/* implicit */unsigned short) var_9);
}
