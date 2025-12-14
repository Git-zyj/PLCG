/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202267
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
    for (long long int i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_13 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) (short)-16100))));
                var_14 = ((/* implicit */unsigned int) (-((-(((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1])) ? (var_5) : (((/* implicit */long long int) 3505973856U))))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) (short)11808)) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) (short)-16961)))))));
                    var_16 = max((min((var_5), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_2])) ? (((/* implicit */int) arr_6 [5LL] [5LL] [i_2])) : (((/* implicit */int) var_3))))))), ((+(((((/* implicit */_Bool) arr_4 [i_2])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_0] [13LL] [i_2]))))) | (min((4536075641352525831LL), (((/* implicit */long long int) arr_4 [i_2]))))));
                }
                /* LoopSeq 1 */
                for (signed char i_3 = 1; i_3 < 15; i_3 += 1) 
                {
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4536075641352525831LL)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) (unsigned short)42875))))) ? (((long long int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_3])) != (((/* implicit */int) arr_6 [i_0] [i_1] [i_3]))))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned short)42881)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_4 [i_0])))))))));
                    arr_9 [i_0 - 2] [i_0] [i_0] [i_0] |= ((((/* implicit */_Bool) ((short) ((8917443337254518740LL) >> (((((/* implicit */int) (short)(-32767 - 1))) + (32801))))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_3] [i_1])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (short)-24257))))), (var_7))) : (max((((/* implicit */long long int) ((arr_8 [i_3] [i_1] [i_0 - 4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19)))))), (arr_3 [i_1] [i_3 + 1]))));
                    arr_10 [i_3] [i_3] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) arr_4 [i_3 + 1])) / (((/* implicit */int) arr_7 [i_0] [i_0 - 1] [i_3 + 1])))));
                }
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (_Bool)1))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((unsigned short) max((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)122)))), (((/* implicit */int) var_10)))));
}
