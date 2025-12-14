/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218285
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_6)) <= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), (var_17))))) : (((((/* implicit */_Bool) (unsigned char)254)) ? (15569812189198230112ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    var_21 = ((/* implicit */short) var_17);
                    var_22 = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0])), (15569812189198230119ULL)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) ((arr_12 [i_3] [i_3] [i_2] [i_1] [i_0] [(signed char)20]) - (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (max((-559334164014755304LL), (((/* implicit */long long int) 284573843U)))) : (((/* implicit */long long int) ((arr_2 [i_0]) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (unsigned char)1))))))))))));
                                var_24 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_17)), (((((/* implicit */_Bool) arr_6 [i_3 - 1] [i_3 + 1])) ? (9009863003621358038LL) : (((/* implicit */long long int) arr_6 [i_3 + 1] [i_3 - 1]))))));
                                var_25 = ((/* implicit */unsigned char) ((long long int) max((((((/* implicit */_Bool) 2251799813685247LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_0))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_2 [i_2])), (var_12)))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */signed char) (-(((/* implicit */int) ((var_18) <= (((((/* implicit */long long int) ((/* implicit */int) arr_2 [1]))) | (9009863003621358038LL))))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */short) arr_7 [i_5] [(short)5] [i_5] [7U]);
                            var_28 = ((/* implicit */unsigned long long int) arr_8 [i_5] [i_5] [i_5]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
    {
        for (long long int i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            for (short i_9 = 0; i_9 < 22; i_9 += 3) 
            {
                {
                    var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) min((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_8] [i_9])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) | (((((/* implicit */_Bool) var_18)) ? (-2814110508788654094LL) : (var_18))))), (arr_20 [i_9]))))));
                    var_30 = ((/* implicit */_Bool) arr_14 [i_7] [i_7]);
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */int) ((var_16) % (((/* implicit */long long int) ((/* implicit */int) var_10)))));
}
