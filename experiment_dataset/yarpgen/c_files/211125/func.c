/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211125
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
    var_10 |= ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_7)))))));
    var_11 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) var_6)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_12 *= ((/* implicit */unsigned char) ((min((arr_11 [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1] [i_0]), (arr_11 [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]))) + (arr_11 [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0] [9ULL])));
                                var_13 = ((/* implicit */unsigned int) (short)13706);
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) (_Bool)1))))) ? (min(((-(arr_8 [i_0] [i_1] [i_1] [i_0]))), (((/* implicit */long long int) arr_6 [i_0 - 1])))) : (((/* implicit */long long int) min((arr_2 [i_0] [i_0] [i_0 - 1]), (((/* implicit */int) (unsigned char)33)))))));
                var_14 = ((/* implicit */unsigned long long int) (unsigned char)36);
                arr_15 [(unsigned short)10] [(unsigned short)10] |= ((/* implicit */short) (+(((((/* implicit */_Bool) max((((/* implicit */long long int) arr_9 [i_1] [i_0] [(signed char)6] [i_0] [i_0])), (arr_5 [i_0] [i_1])))) ? (arr_9 [i_1 - 1] [i_1] [(unsigned short)24] [i_0 + 1] [i_0]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [2LL] [i_0] [i_0] [i_0] [(unsigned short)10] [i_1 + 1] [(unsigned short)6])))))))));
            }
        } 
    } 
}
