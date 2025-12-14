/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23339
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
    var_18 ^= ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) (signed char)32)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)40))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_15)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))));
                            var_20 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_7 [i_3] [(signed char)1] [i_1 + 1] [(signed char)1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_7 [i_0 + 2] [i_1] [i_3] [i_3])))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16))) >= (max((arr_5 [i_3]), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_0] [i_1])))))))));
                            arr_10 [i_2] = max((317882663782619453ULL), (arr_3 [i_0] [i_0]));
                            arr_11 [i_2] [i_1 - 1] [i_1] [i_2] [i_3] = max((((/* implicit */unsigned long long int) (signed char)28)), (((((unsigned long long int) arr_1 [i_1])) ^ (4611686018427387904ULL))));
                        }
                    } 
                } 
                var_21 ^= ((signed char) max((((/* implicit */int) (signed char)15)), ((-(((/* implicit */int) (signed char)98))))));
                arr_12 [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) (signed char)43)), (var_13)))))) ? (((unsigned long long int) ((var_13) | (arr_9 [i_0 + 1] [i_1] [i_0 + 1] [i_0 - 1] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(13072658909587128984ULL))))))))));
            }
        } 
    } 
    var_22 = (~(max((((var_2) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (var_4))));
}
