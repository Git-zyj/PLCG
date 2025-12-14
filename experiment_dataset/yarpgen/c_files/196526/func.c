/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196526
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
    var_11 &= ((/* implicit */long long int) ((((/* implicit */_Bool) 2954393880922547245ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) (unsigned char)183))));
    var_12 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 4; i_2 < 22; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */signed char) var_7);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_12 [(unsigned char)5] [i_1] [i_1] [i_1] [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_2] [i_3] [i_4]))) : ((~(((((/* implicit */_Bool) (unsigned char)61)) ? (arr_4 [i_1] [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
                                var_14 = ((/* implicit */long long int) 15492350192787004370ULL);
                                var_15 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) var_0)))));
                                var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((var_3), (arr_9 [i_3] [i_3] [i_2 - 2] [i_1])))), (max((((((/* implicit */_Bool) 17651300753343519307ULL)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
