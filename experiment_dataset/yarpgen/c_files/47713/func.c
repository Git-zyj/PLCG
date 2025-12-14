/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47713
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
    var_12 ^= ((/* implicit */unsigned long long int) min(((-((-(var_6))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */unsigned long long int) 1261938933U))))) ? (min((var_7), (((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) != (var_6)))))))));
    var_13 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) var_10)))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (3584LL)))) - (((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
    var_14 = ((/* implicit */long long int) max(((~(((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))) == (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), ((unsigned short)7253)))))))));
    var_15 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) var_9))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_2] [i_2] [i_1] [i_1] [i_2] [i_2 - 2] = ((((/* implicit */unsigned int) arr_7 [21] [i_1] [i_2 - 1])) & (((((/* implicit */_Bool) 5150811863241825357LL)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32765))))));
                                arr_15 [i_4] [i_2] = ((/* implicit */signed char) ((int) arr_9 [i_0] [i_0] [i_1]));
                                var_16 = ((/* implicit */unsigned int) ((arr_13 [i_3] [i_1] [i_1] [i_3] [i_0]) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [(signed char)22] [i_2] [i_2] [i_3] [i_2] [21])))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_7 [i_0] [i_1] [i_2 - 2]) : (552312102)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (((var_8) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                }
            } 
        } 
        arr_16 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_0])) <= (((/* implicit */int) (unsigned short)46302))));
    }
}
