/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42063
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
    for (unsigned char i_0 = 2; i_0 < 6; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [3] [(unsigned char)9] = ((/* implicit */long long int) ((2147483647) >> (((((/* implicit */int) (unsigned short)61054)) - (61028)))));
                var_16 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((-(var_0))), (((/* implicit */long long int) (+(((/* implicit */int) var_1)))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_1]))))) : ((~(67108352U)))));
                var_17 = ((/* implicit */long long int) min((((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-19581))))) : (((/* implicit */int) var_11)))), (((/* implicit */int) var_1))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 4; i_2 < 10; i_2 += 2) 
    {
        for (int i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            {
                arr_13 [(short)2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483647)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)-22368))));
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) 2147483647))));
                var_19 = ((/* implicit */unsigned long long int) (~(2444349718078955291LL)));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((int) min((((/* implicit */unsigned long long int) max(((-2147483647 - 1)), (((/* implicit */int) var_15))))), (min((((/* implicit */unsigned long long int) var_6)), (var_12))))));
    var_21 *= ((/* implicit */short) min((((((/* implicit */_Bool) min((((/* implicit */long long int) var_14)), (2444349718078955295LL)))) ? (((/* implicit */int) var_10)) : (min((((/* implicit */int) (unsigned char)239)), (-2147483647))))), (((/* implicit */int) var_15))));
}
