/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48657
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
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */short) arr_0 [i_0]))))) + (max((((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_2)))), (min((((/* implicit */int) arr_5 [i_0] [i_1] [i_1])), (-902888642)))))));
                var_12 *= max(((-(((/* implicit */int) max((arr_1 [i_1]), (arr_1 [i_1])))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_1 [i_0])), (var_0)))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_5 [(_Bool)1] [i_1] [i_1])))))));
                var_13 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (arr_3 [(short)9] [5ULL])))) < (((/* implicit */int) arr_1 [i_0]))))), ((-(((/* implicit */int) arr_4 [i_0]))))));
                var_14 *= ((/* implicit */signed char) min((((/* implicit */int) arr_4 [i_0])), (((((((((/* implicit */_Bool) arr_1 [(unsigned char)9])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_1])))) + (2147483647))) << (((min((arr_2 [i_0] [i_0]), (((/* implicit */int) (unsigned char)221)))) - (221)))))));
                var_15 *= ((/* implicit */int) ((_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)26))))), (((((-319128094612723342LL) + (9223372036854775807LL))) >> (((/* implicit */int) var_0)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            {
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) var_10))));
                arr_13 [i_2] [i_3] = ((/* implicit */short) arr_9 [7]);
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)7)) + (((((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))) + (((((/* implicit */int) var_10)) - (((/* implicit */int) (unsigned char)221))))))));
    var_18 ^= ((/* implicit */long long int) var_0);
}
