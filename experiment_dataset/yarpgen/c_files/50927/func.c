/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50927
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
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((short) (short)-30337)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((7081337314075094280ULL) >> (((/* implicit */int) var_11))))))) ? (((((long long int) 8373587269477510512ULL)) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 - 1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */int) arr_0 [i_1])) - (((/* implicit */int) var_0)))))))));
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (arr_4 [i_1 - 2]) : (626335066520081341ULL)))) ? (((((arr_3 [i_1 + 1] [i_0]) & (arr_4 [i_1]))) - (((/* implicit */unsigned long long int) arr_2 [i_1] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned short)29424)) * (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) arr_0 [i_1 - 1]))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) 65011712U)), (-1491885170391851803LL)))))));
}
