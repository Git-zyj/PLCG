/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239296
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) var_14)) > (arr_5 [i_3 + 1] [i_1])))) - (((/* implicit */int) arr_2 [i_3 + 1]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_9)))) / (arr_7 [i_3 + 1] [i_3 + 1] [i_3] [i_3])))));
                            arr_10 [14] [i_1] [i_2] [i_3 + 1] [i_3] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) var_6)))));
                            /* LoopSeq 3 */
                            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                            {
                                var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) (((_Bool)1) && (((/* implicit */_Bool) var_2))))))));
                                var_17 |= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) arr_5 [i_3] [i_0])) < (var_13)))))) / (min((((/* implicit */long long int) ((var_3) ^ (((/* implicit */int) var_0))))), ((~(var_5)))))));
                                arr_13 [i_0] [i_0] [i_2] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_0] [i_0] [i_3 - 1] [i_3] [14]))))) ? (((/* implicit */int) ((_Bool) arr_8 [i_0] [i_1] [i_3 - 1] [i_3 - 1]))) : (((/* implicit */int) ((0) != (((/* implicit */int) arr_11 [i_0] [i_0] [i_3 - 1] [(_Bool)1] [i_4])))))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 24; i_5 += 2) 
                            {
                                var_18 = ((/* implicit */unsigned int) 1436584122);
                                arr_17 [i_2] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_6)))) && (((/* implicit */_Bool) arr_15 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1]))));
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? ((((_Bool)1) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_3] [i_5])))));
                            }
                            for (int i_6 = 3; i_6 < 22; i_6 += 4) 
                            {
                                var_19 = min((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [(unsigned char)2]))) - (var_12)))) ? (((/* implicit */int) arr_1 [i_2])) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_1)))))), (((((/* implicit */int) arr_19 [i_3 + 1] [i_6 + 2] [i_6] [i_6 - 2] [i_6 - 3])) / (((/* implicit */int) arr_19 [i_3 + 1] [i_6 - 2] [i_6] [i_6 + 2] [i_6 + 2])))));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (-(arr_15 [i_0] [i_1] [i_3] [i_6])));
                            }
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_1 [i_0])))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))) * (var_12)));
    /* LoopNest 3 */
    for (signed char i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        for (int i_8 = 0; i_8 < 15; i_8 += 4) 
        {
            for (unsigned char i_9 = 1; i_9 < 12; i_9 += 3) 
            {
                {
                    var_22 *= ((/* implicit */unsigned short) arr_11 [21LL] [i_8] [i_8] [i_8] [i_8]);
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((1545613918), (((/* implicit */int) arr_11 [i_7] [i_7] [i_8] [i_9] [i_9]))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (2147483647)))) : (arr_7 [i_9 + 2] [i_8] [(signed char)6] [i_7])))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_25 [i_7] [i_7])) && (((/* implicit */_Bool) var_5)))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_23 [i_7] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_9)))))))));
                }
            } 
        } 
    } 
    var_24 -= ((/* implicit */int) min((((((((/* implicit */_Bool) var_4)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) | (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) * (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) min((((/* implicit */int) var_2)), (min((8388576), (((/* implicit */int) var_4)))))))));
}
