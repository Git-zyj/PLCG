/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214608
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_0)) ^ (((((/* implicit */_Bool) (short)72)) ? (14704186123654724928ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1023)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_18)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [(signed char)10] = ((/* implicit */unsigned short) ((arr_0 [(_Bool)0]) | (((((/* implicit */_Bool) arr_0 [8LL])) ? (arr_0 [0LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(_Bool)1])))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_0 [i_0]) - (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))))));
                arr_6 [i_0] [i_1] [(unsigned short)0] |= min((((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_0 [(unsigned char)4]) : (arr_0 [6ULL]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [(signed char)0])) ? (((/* implicit */int) arr_1 [2LL])) : (((/* implicit */int) arr_1 [(unsigned short)10]))))));
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 9; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            arr_12 [10ULL] [i_0] [0U] = ((/* implicit */signed char) min((((/* implicit */int) min((arr_9 [i_0] [i_1]), (arr_9 [i_0] [3U])))), (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_10 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 - 2]))))));
                            arr_13 [i_0] [i_2] [i_2 - 2] [0ULL] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_2]);
                        }
                    } 
                } 
                arr_14 [(signed char)10] [0LL] [(signed char)10] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]))) / (arr_0 [8ULL])));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) var_6)) & (((/* implicit */int) var_12))))));
}
