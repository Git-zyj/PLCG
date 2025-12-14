/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34514
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
    var_20 = ((unsigned int) min((min((((/* implicit */long long int) (unsigned char)107)), (var_11))), (((/* implicit */long long int) var_16))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_13)) * (max((((/* implicit */unsigned long long int) var_0)), (var_9)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_11 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_2 [i_0 - 4] [i_3])) : (((/* implicit */int) arr_8 [i_2] [i_0] [i_2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1717732620U)) ? (arr_7 [i_1] [i_2]) : (((/* implicit */int) (unsigned char)17))))) : (arr_3 [i_0 - 2]))))));
                            var_22 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_4 [i_0] [i_0 + 1] [i_0]) : (var_16))))));
                            var_23 = ((/* implicit */_Bool) (unsigned char)114);
                            var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_2 [i_0 - 2] [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) 552996916366413235ULL))))))) : (arr_3 [i_2])));
                        }
                    } 
                } 
                var_25 = ((/* implicit */int) (((+(((/* implicit */int) (signed char)121)))) != (var_13)));
            }
        } 
    } 
}
