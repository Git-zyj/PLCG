/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41173
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
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) (unsigned short)0)), (9223372036854775807LL))) + (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) * ((-(arr_3 [i_0] [i_0] [i_1])))))));
                var_12 ^= ((/* implicit */unsigned char) (((((_Bool)1) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-61))) != (9223372036854775807LL))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (unsigned char)21)))))))));
                arr_6 [i_0] &= ((/* implicit */signed char) ((((long long int) ((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (1073741824U)))) == (((/* implicit */long long int) (+(((/* implicit */int) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) 1725093381392726634LL))))))))));
                var_13 = (((((-(arr_0 [i_0]))) / (((/* implicit */unsigned long long int) 6415489671178554503LL)))) <= (arr_0 [i_0]));
            }
        } 
    } 
    var_14 = ((/* implicit */short) ((((/* implicit */int) var_3)) >= (((/* implicit */int) ((((var_11) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) <= (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_6)) + (2147483647))) >> (((((/* implicit */int) var_8)) - (161)))))))))));
}
