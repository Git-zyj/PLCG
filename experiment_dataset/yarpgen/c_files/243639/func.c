/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243639
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 4; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned int) var_4);
                    arr_9 [i_0] [i_0 + 1] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2 - 3])) && (((/* implicit */_Bool) arr_0 [i_1 + 1]))))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) arr_0 [i_3])) : (min((var_10), (var_10)))))));
                                arr_16 [i_0] [i_0] [i_0] [i_3] [i_0] = ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (((((/* implicit */_Bool) arr_3 [i_3] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1 - 1] [i_2] [i_0] [i_4]))) : (var_10))))) < (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_6)))))))));
                                arr_17 [i_0] = ((/* implicit */unsigned short) var_10);
                                var_15 = ((/* implicit */unsigned short) ((arr_13 [(_Bool)1] [i_0] [i_0] [i_0] [i_0]) > (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) var_14)))) & (((/* implicit */int) arr_4 [i_2 - 2]))))));
                                arr_18 [i_0] [i_0] [i_0] [i_1] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */signed char) ((var_11) == (((arr_1 [i_0]) >> (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_3)))) + (121)))))))) : (((/* implicit */signed char) ((var_11) == (((((arr_1 [i_0]) + (2147483647))) >> (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_3)))) + (121))))))));
                            }
                        } 
                    } 
                    var_16 += ((/* implicit */unsigned int) var_2);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        for (long long int i_6 = 4; i_6 < 19; i_6 += 4) 
        {
            {
                arr_26 [18] [i_5] [i_5] = ((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (((arr_20 [i_5] [i_5]) << (((var_9) - (4917185511293326990ULL))))))), (((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_5] [i_6 + 1]))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_23 [i_5] [i_5] [i_6])))))))));
                var_17 = ((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_23 [i_6 - 2] [(short)4] [(short)4])));
                /* LoopNest 3 */
                for (unsigned short i_7 = 1; i_7 < 19; i_7 += 2) 
                {
                    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 3; i_9 < 17; i_9 += 2) 
                        {
                            {
                                arr_34 [i_5] [i_6] [i_6] [i_5] [i_8] [i_9 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_24 [i_6 + 1] [i_7 - 1]) * (((/* implicit */int) var_0))))) ? (((18263505748576576401ULL) + (((/* implicit */unsigned long long int) 2189121858U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((2189121864U) < (2189121858U))))) == (arr_30 [i_6 - 1])))))));
                                var_18 = ((/* implicit */int) (~(min((((/* implicit */unsigned int) (_Bool)1)), (2105845437U)))));
                                var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_8] [i_8] [i_8] [i_8] [i_9 + 1] [i_9 + 1])) ? (arr_29 [i_6] [i_6] [i_6] [i_8] [i_9 + 1] [i_6]) : (arr_29 [i_5] [i_9] [i_9] [i_5] [i_9 + 3] [i_9 + 3])))) ? (min((arr_29 [i_8] [i_9] [i_9] [(signed char)5] [i_9 + 3] [i_9]), (arr_29 [i_5] [i_5] [i_5] [i_5] [i_9 - 1] [i_9 - 1]))) : (((((/* implicit */_Bool) 917090025)) ? (15059366284365753260ULL) : (((/* implicit */unsigned long long int) 2105845422U)))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_27 [i_5] [i_6 - 2] [i_5] [i_5]), (arr_28 [i_5] [i_5] [i_6])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (var_14))))) : (arr_29 [i_6] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6] [i_6 + 1])))) ? (((/* implicit */unsigned long long int) min((arr_20 [i_5] [i_6 + 1]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5)))))))) : (((((((/* implicit */int) var_2)) >= (((/* implicit */int) var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) % (var_11)))) : (((((/* implicit */unsigned long long int) arr_21 [i_5] [i_5])) * (var_9))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_7))));
    var_22 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_13)), (var_1)));
}
