/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22017
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((_Bool) 427852833U)) ? (((/* implicit */unsigned long long int) ((int) var_3))) : ((((_Bool)1) ? (var_8) : (max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_1])), (11393269173854263540ULL)))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) max((min(((~(11393269173854263540ULL))), (11393269173854263540ULL))), (((/* implicit */unsigned long long int) arr_10 [i_4] [i_4] [i_3] [i_2] [i_1] [i_0] [i_0]))));
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) : (var_14)))) ? (((/* implicit */long long int) (+(((/* implicit */int) min((arr_2 [i_0] [i_2] [i_1]), (((/* implicit */signed char) arr_11 [i_3])))))))) : ((((-(arr_8 [i_0] [i_0] [i_0] [i_0] [i_1] [(signed char)5]))) / (((/* implicit */long long int) arr_7 [i_1]))))));
                                arr_12 [i_0] [i_0] [(unsigned char)10] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(min((var_9), (((/* implicit */int) (signed char)127))))))) ? (((/* implicit */unsigned long long int) var_9)) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1])))))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] |= ((/* implicit */short) arr_6 [i_4]);
                            }
                        } 
                    } 
                } 
                arr_14 [i_1] [i_1] [3ULL] = ((/* implicit */long long int) var_15);
                /* LoopNest 3 */
                for (long long int i_5 = 1; i_5 < 10; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            {
                                arr_23 [i_0] [i_0] [i_5] [8U] [i_7] [i_7] &= ((/* implicit */_Bool) max((((short) min((((/* implicit */unsigned long long int) 4294967274U)), (var_0)))), (((/* implicit */short) (((+(arr_0 [i_5 + 1]))) == (((/* implicit */unsigned long long int) arr_17 [(unsigned short)4] [i_1] [i_5] [i_0])))))));
                                var_19 = ((/* implicit */short) min(((~(((/* implicit */int) var_10)))), (((/* implicit */int) min((arr_2 [i_1] [0ULL] [i_1]), (((/* implicit */signed char) ((_Bool) var_12))))))));
                                arr_24 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) 3ULL);
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_11 [i_0]))));
            }
        } 
    } 
    var_21 = ((((/* implicit */_Bool) var_9)) ? (((unsigned long long int) max((((/* implicit */unsigned long long int) 4294967274U)), (var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))));
    var_22 ^= min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))))), ((((+(var_1))) / (((/* implicit */unsigned int) (-(((/* implicit */int) var_12))))))));
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) & (((int) ((var_6) ? (11393269173854263543ULL) : (((/* implicit */unsigned long long int) 31U)))))));
}
