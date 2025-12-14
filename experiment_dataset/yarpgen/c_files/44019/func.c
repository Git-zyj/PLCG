/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44019
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
    var_17 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (((/* implicit */_Bool) ((unsigned int) (signed char)52)))));
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1328702952665634810LL)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((_Bool) (signed char)-17))) : (((((((/* implicit */int) arr_10 [i_4] [i_4] [i_1] [i_4] [i_2] [i_1] [i_4])) + (2147483647))) >> (((((/* implicit */int) (signed char)-26)) + (43)))))))) ? (max((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_13))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [6LL]))) > (6207319596710513125ULL)))))) : (((((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_2]))))) | (min((((/* implicit */long long int) arr_5 [i_3] [i_4])), (var_12)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 2; i_5 < 13; i_5 += 3) 
                {
                    for (unsigned char i_6 = 2; i_6 < 13; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) -79503586996896367LL))));
                                var_21 = ((/* implicit */unsigned char) var_3);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        for (int i_10 = 0; i_10 < 15; i_10 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-5)) / (((/* implicit */int) arr_1 [i_9])))))))) > (((((/* implicit */long long int) ((unsigned int) arr_14 [1U] [1U] [i_9] [i_10]))) | (var_7))))))));
                                arr_27 [i_0] [i_0] [i_8] [i_8] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((arr_13 [i_1]) >> (((arr_8 [i_10] [i_0] [i_8] [i_0] [i_0] [i_0]) - (4031961498U))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0])) || (((/* implicit */_Bool) arr_13 [i_10]))))))));
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-26)), (arr_23 [i_10] [i_1] [i_1] [i_0]))))) == (((((/* implicit */_Bool) arr_5 [i_9] [i_10])) ? (arr_0 [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))) + (min((((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0])) ? (var_1) : (((/* implicit */long long int) arr_25 [i_0] [(signed char)8] [i_1] [i_1] [0ULL] [(signed char)8] [(signed char)8])))), (var_12))))))));
                                arr_28 [(unsigned char)11] [1LL] [4U] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_23 [i_0] [i_8] [i_8] [i_10]), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-17))) != (arr_13 [i_1]))))))) || ((!(((/* implicit */_Bool) min((var_12), (var_12))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) var_13);
}
