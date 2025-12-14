/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27657
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_11 *= ((/* implicit */signed char) ((((var_2) & (((/* implicit */long long int) arr_1 [i_0 - 1])))) ^ (((/* implicit */long long int) ((/* implicit */int) ((short) 1ULL))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((var_5), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_5 [i_0 - 1])), (((3135646591U) | (1159320706U))))))));
                    arr_10 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((722378391), (((/* implicit */int) ((unsigned char) arr_7 [i_2] [i_2])))))) | (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0])))))), (18446744073709551614ULL)))));
                    arr_11 [i_2] [i_1 + 1] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_2] [i_1])) ? (((((((arr_7 [i_1 + 4] [i_2]) & (((/* implicit */int) arr_5 [3ULL])))) + (2147483647))) >> (((arr_7 [i_0] [i_1 + 3]) + (1489930325))))) : (((((/* implicit */_Bool) arr_8 [i_0 - 1])) ? (((/* implicit */int) ((_Bool) 12ULL))) : (((/* implicit */int) ((arr_7 [i_0] [(unsigned short)3]) > (var_7))))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) >= (var_8))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (var_6)))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_7)))))))))))));
}
