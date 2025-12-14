/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191138
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */long long int) arr_0 [i_0]);
                var_20 ^= ((/* implicit */unsigned int) -1227142959);
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) max((min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (unsigned char)26)))))), (((/* implicit */int) (signed char)-117))));
    /* LoopNest 2 */
    for (signed char i_2 = 1; i_2 < 19; i_2 += 2) 
    {
        for (int i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            {
                var_22 -= ((/* implicit */signed char) ((arr_4 [i_2 + 1]) ? (((((/* implicit */_Bool) var_9)) ? (12217679902994265976ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2 + 1])))));
                arr_9 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8791139182059003429LL)) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((short) (signed char)115))), (var_18))))));
            }
        } 
    } 
    var_23 *= ((/* implicit */unsigned int) var_11);
}
