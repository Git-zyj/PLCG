/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216166
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
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_10))));
    var_16 = ((/* implicit */long long int) var_14);
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */long long int) min((((/* implicit */int) (unsigned char)175)), (var_10)))) - (((((/* implicit */_Bool) var_5)) ? (-4451186670795061078LL) : (var_7))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_9))))))))));
    var_18 ^= ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [12ULL] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) arr_1 [7])) - (var_5)));
                var_19 ^= ((/* implicit */unsigned short) var_10);
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) var_1)) - (var_11)))))) && (arr_2 [i_1])));
            }
        } 
    } 
}
