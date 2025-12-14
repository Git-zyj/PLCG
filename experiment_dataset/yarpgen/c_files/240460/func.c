/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240460
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) | (arr_3 [i_0] [i_0] [4ULL]))) <= (((/* implicit */long long int) max((arr_2 [i_1] [i_0]), (((/* implicit */int) ((unsigned short) arr_1 [2U]))))))));
                var_12 *= ((min((((unsigned long long int) arr_1 [i_0])), (((/* implicit */unsigned long long int) ((3978120906U) & (((/* implicit */unsigned int) -226170139))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((1157181075320255176LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)149)))))))));
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned int) 226170145)));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) (-(18446744073709551608ULL)));
    var_14 = ((/* implicit */long long int) ((((((/* implicit */int) var_6)) + (2147483647))) << (((((unsigned int) ((((/* implicit */int) var_4)) != (-1)))) - (1U)))));
}
