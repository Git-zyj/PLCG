/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191211
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
    var_17 = ((/* implicit */signed char) (+(max((((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_12))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11))))))));
    var_18 = ((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))) * (((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (+((+(arr_1 [i_0] [i_2 - 1]))))))));
                    var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2 + 1] [i_2 - 1])))))));
                    var_21 ^= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_2 + 1])) && (((/* implicit */_Bool) arr_0 [i_0] [i_2 - 2])))), ((!(((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1] [8ULL] [i_2 - 1]))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned char) (+((~(arr_6 [i_0] [i_0] [i_0] [i_0])))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            for (unsigned short i_4 = 4; i_4 < 7; i_4 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)28)))))));
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [i_4 + 3] [i_4 + 4] [i_3])), (arr_2 [i_3])))) / (((/* implicit */int) min((arr_5 [i_4] [i_4] [i_4] [i_4 + 4]), (arr_5 [i_4] [i_4] [i_3] [i_4 - 1]))))));
                }
            } 
        } 
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [(unsigned char)9] [i_5] [i_5] [i_5])) || (((/* implicit */_Bool) arr_5 [i_5] [i_5] [i_5] [i_5])))))));
        var_26 = ((/* implicit */short) min(((+((~(((/* implicit */int) arr_14 [(_Bool)1] [i_5])))))), (((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [i_5]))));
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_7 [i_5])))) % (((/* implicit */int) arr_15 [i_5] [i_5]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [6ULL] [i_5] [(signed char)0] [i_5])) ? (((/* implicit */int) arr_2 [0])) : (((/* implicit */int) arr_10 [(unsigned char)9] [i_5] [i_5] [(unsigned char)9]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_15 [10] [10]))))) : ((~(arr_12 [i_5]))))) : (((/* implicit */unsigned long long int) (~(arr_6 [i_5] [i_5] [i_5] [i_5])))))))));
        var_28 = ((/* implicit */unsigned short) (+(((/* implicit */int) max((arr_10 [i_5] [i_5] [i_5] [i_5]), (arr_10 [i_5] [i_5] [i_5] [i_5]))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_6 = 3; i_6 < 8; i_6 += 2) 
    {
        for (unsigned int i_7 = 1; i_7 < 10; i_7 += 4) 
        {
            {
                arr_22 [i_6] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_21 [i_6 + 3] [i_7 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_6 - 1] [i_7 + 2])))))) : (((((/* implicit */_Bool) arr_21 [i_6 + 4] [i_7 + 1])) ? (arr_21 [i_6 - 3] [i_7 + 1]) : (arr_21 [i_6 + 3] [i_7 + 2])))));
                /* LoopNest 3 */
                for (signed char i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    for (long long int i_9 = 4; i_9 < 11; i_9 += 4) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (+(-2371514246231582760LL))))));
                                var_30 = ((/* implicit */signed char) arr_21 [i_7 - 1] [i_8]);
                                var_31 = ((/* implicit */signed char) (+((+(arr_17 [i_6])))));
                                var_32 = ((arr_27 [i_6 + 3] [i_7 + 1]) ? (max((arr_24 [10LL] [i_9 + 1] [i_8] [i_9]), (((/* implicit */long long int) 4294967295U)))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_18 [8] [(unsigned char)0])), (arr_21 [i_8] [i_7 - 1])))));
                                var_33 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_29 [i_6 + 4] [i_7 + 2]))))));
                            }
                        } 
                    } 
                } 
                var_34 -= ((/* implicit */short) (+(max((arr_19 [i_6 + 3] [i_6 + 1]), (((/* implicit */unsigned int) arr_27 [i_6 - 2] [i_6 - 2]))))));
            }
        } 
    } 
}
