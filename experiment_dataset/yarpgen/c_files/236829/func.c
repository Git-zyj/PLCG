/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236829
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
    var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) ((((min((((/* implicit */unsigned long long int) var_4)), (18446744073709551615ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 1283724202U)))))))) >> (((max((min((((/* implicit */unsigned int) var_8)), (var_6))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) (_Bool)1))))))) - (118U))))))));
    var_11 = ((/* implicit */unsigned char) ((unsigned long long int) var_2));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_10 [4LL] [i_1] [i_2] [i_0] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((long long int) var_3))) + (min((((/* implicit */unsigned long long int) var_9)), (3ULL))))) * (max((((/* implicit */unsigned long long int) (signed char)3)), (7903292564743788007ULL)))));
                    var_12 &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_1 [i_1] [(signed char)6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_1 [i_0] [i_2]))), (((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) (short)9))) & (arr_8 [i_0] [i_0] [i_2]))))))));
                    var_13 -= (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)));
                }
            } 
        } 
    } 
    var_14 ^= ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) var_0)), (var_5))), (((/* implicit */unsigned long long int) var_6))));
}
