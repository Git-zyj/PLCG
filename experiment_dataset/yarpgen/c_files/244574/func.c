/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244574
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_10)))) : (((6558696889252969956ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))) ? (((/* implicit */int) (signed char)-71)) : (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((unsigned long long int) (+(arr_3 [6ULL] [i_0 - 3] [i_1 + 1])))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
                            {
                                arr_15 [i_0] [11ULL] [i_1] [i_1] [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) arr_9 [(unsigned char)7] [i_2] [i_3 - 1] [i_4]);
                                var_16 *= ((/* implicit */unsigned char) (-(arr_14 [i_1 + 1] [i_4] [i_4] [i_4] [i_4])));
                                var_17 = arr_2 [i_0] [i_1];
                                var_18 = ((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) (unsigned short)8123)))));
                            }
                            arr_16 [i_1] [i_1] [i_2] [i_3] [i_0] [i_3 - 1] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_9 [i_1 + 2] [i_1] [i_1] [i_1])) ? (arr_5 [i_0 + 1] [i_1] [i_1 - 1] [i_1]) : (((/* implicit */long long int) var_11)))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((var_0) << (((/* implicit */int) var_12))))))) ? (((/* implicit */unsigned long long int) arr_5 [i_0 + 2] [i_0 + 1] [i_0] [(unsigned char)4])) : (((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 + 3] [i_1])) ? (arr_7 [i_1 - 2] [i_1 + 1] [i_1]) : (803620897123592132ULL))))))));
                var_20 = ((/* implicit */unsigned long long int) var_10);
                arr_17 [i_0] [i_1] [i_0] = ((/* implicit */signed char) arr_6 [i_0] [i_0] [8LL]);
                var_21 ^= ((/* implicit */unsigned int) arr_3 [8ULL] [i_0] [i_0]);
            }
        } 
    } 
}
