/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234600
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
    var_10 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) (unsigned char)224);
                                var_12 = arr_11 [i_0] [i_0];
                                arr_13 [i_2] [i_1] [i_2] [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-107)) <= (((/* implicit */int) (signed char)127))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) min((((((/* implicit */_Bool) ((int) (signed char)-28))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)48)), ((-2147483647 - 1))))) : (((1857811133U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))))), (((2437156162U) ^ (2437156148U))))))));
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 35958428274786304ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -871257147))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((6381448790211932069LL) == (((/* implicit */long long int) ((/* implicit */int) var_5))))))) : (((9534638496007282879ULL) >> (((604562188446725058LL) - (604562188446725037LL)))))));
                    arr_14 [i_0] [i_1] &= ((/* implicit */short) var_3);
                }
            } 
        } 
    } 
}
