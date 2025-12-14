/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37643
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) var_12);
        var_21 -= arr_0 [i_0 - 1];
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((min((var_1), (((/* implicit */long long int) (signed char)125)))) + (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) / (arr_1 [(unsigned char)8] [11U]))))))) ? (((long long int) (short)13898)) : (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-126), ((signed char)125)))))));
        var_23 -= var_11;
        arr_2 [i_0 - 3] = ((/* implicit */unsigned long long int) (~(((arr_1 [i_0] [i_0 + 2]) - (arr_1 [i_0] [i_0 - 1])))));
    }
    /* LoopSeq 2 */
    for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 2; i_2 < 20; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                for (unsigned char i_4 = 2; i_4 < 19; i_4 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            arr_18 [i_2] = ((/* implicit */short) var_2);
                            var_24 -= ((/* implicit */signed char) max((((/* implicit */unsigned int) var_2)), (((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (arr_16 [(signed char)0] [(signed char)0] [i_3] [(signed char)0] [i_5] [(unsigned char)1]))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) arr_15 [i_1] [i_5] [i_3] [7LL] [3U])) : (((/* implicit */int) arr_6 [i_2] [i_1] [(signed char)0])))))))));
                            var_25 = ((/* implicit */signed char) (unsigned char)255);
                        }
                        arr_19 [i_2] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_4 [i_4 - 2] [i_2 - 2])) ? (arr_9 [i_4 + 2] [i_2 - 1]) : (((/* implicit */long long int) arr_4 [i_4 + 2] [i_2 - 2])))), (arr_9 [i_4 + 3] [i_2 + 2])));
                    }
                } 
            } 
        } 
        arr_20 [i_1] &= ((/* implicit */unsigned char) (-(((arr_4 [i_1] [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_15 [(short)9] [i_1] [i_1] [i_1] [i_1])) <= (((/* implicit */int) var_18))))))))));
        var_26 = ((/* implicit */unsigned char) arr_5 [i_1] [i_1]);
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_25 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_6] [i_6])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) arr_21 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126))) : (var_4)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_6] [i_6] [i_6] [i_6] [i_6]))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_6] [i_6] [i_6] [i_6] [i_6]))) : (var_1)))));
        arr_26 [i_6] = ((/* implicit */unsigned int) arr_12 [i_6] [i_6] [(short)0] [11LL]);
    }
}
