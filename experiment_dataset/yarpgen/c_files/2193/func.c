/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2193
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
    var_13 += ((/* implicit */signed char) (~((+(2812753819121863951ULL)))));
    var_14 &= ((/* implicit */int) var_8);
    var_15 = ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (signed char)42)) >= (((/* implicit */int) (signed char)-49))))), (min((((/* implicit */long long int) var_9)), (var_12)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-106))))) : (max((((((/* implicit */_Bool) (short)20756)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-87))) : (var_1))), (((/* implicit */long long int) var_5)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) var_4);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */short) arr_3 [(short)1] [4LL] [i_1 + 2]);
                        var_18 ^= (-(arr_7 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0]));
                    }
                    for (signed char i_4 = 1; i_4 < 11; i_4 += 1) 
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_4 + 1] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)172))))) ? (((((/* implicit */_Bool) var_11)) ? (arr_7 [i_0] [i_0] [(signed char)8] [i_2] [i_2] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_2] [i_4 + 3]))))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)253)))))))) ^ (((((/* implicit */_Bool) ((int) (short)-253))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))));
                        var_19 = ((/* implicit */_Bool) arr_8 [i_4] [i_2] [i_0]);
                    }
                    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_2] [i_2] [i_0] [i_1])), (var_7)))) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [1] [i_2] [i_0] [i_1] [i_0])) : (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [4] [i_1] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_9 [i_0] [(signed char)8] [i_0] [i_0] [i_0] [(unsigned char)8]))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))))));
}
