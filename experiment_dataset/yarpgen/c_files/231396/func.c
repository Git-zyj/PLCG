/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231396
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
    var_17 |= ((/* implicit */_Bool) var_8);
    var_18 = ((/* implicit */int) var_10);
    var_19 = ((/* implicit */unsigned char) (_Bool)1);
    var_20 = ((/* implicit */unsigned short) ((((min((var_8), (((/* implicit */unsigned long long int) var_9)))) / (((/* implicit */unsigned long long int) var_5)))) <= (((/* implicit */unsigned long long int) (-(7357364157520558970LL))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            {
                arr_8 [i_0] [i_1] = ((/* implicit */short) (~((~(((/* implicit */int) max((arr_0 [i_0] [i_1]), (((/* implicit */unsigned char) arr_7 [i_0] [i_0])))))))));
                arr_9 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_6 [(unsigned char)3] [i_1 + 1] [i_1 + 3])))) ? (((((/* implicit */_Bool) arr_6 [i_1] [i_1 + 1] [i_1 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)198))) : (arr_6 [i_1 - 1] [i_1 - 1] [i_1 + 3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 3])) : (((/* implicit */int) (short)122)))))));
                arr_10 [(unsigned char)9] [i_1 + 2] = ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((((((/* implicit */int) var_0)) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_0])) - (64883)))))) / ((~(-7357364157520558965LL))))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)44476)))))));
                var_21 *= ((/* implicit */unsigned char) min((((/* implicit */int) arr_7 [i_0] [i_1])), (min((((int) var_6)), (((/* implicit */int) max((var_7), (arr_5 [i_1] [i_0] [i_0]))))))));
            }
        } 
    } 
}
