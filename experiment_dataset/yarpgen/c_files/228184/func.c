/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228184
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_15 = ((/* implicit */short) (~(arr_1 [i_0])));
        var_16 &= ((/* implicit */unsigned char) ((short) ((((1177507185570517098ULL) * (arr_1 [2]))) ^ (((/* implicit */unsigned long long int) -7384816202765014753LL)))));
        var_17 -= ((/* implicit */unsigned char) min((((17269236888139034517ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((2026749471U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)185))))))))), (((arr_1 [12ULL]) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)185))) >= (arr_1 [14LL]))))))));
        var_18 &= ((/* implicit */long long int) (~(min((((/* implicit */unsigned long long int) var_13)), (arr_2 [(unsigned short)4])))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) min((var_19), (var_10)));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) max((0ULL), (arr_7 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((4294967295U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)185))))))) : (1177507185570517109ULL)));
                    var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_9)) : (0ULL)))) && ((!(((/* implicit */_Bool) (short)-30035)))))))) == (((((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_2]), (arr_0 [4U]))))) ^ (((((/* implicit */_Bool) 4233573725U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) : (var_2)))))));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) > (var_8))))));
}
