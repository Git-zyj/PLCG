/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202728
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
    for (short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 13993112962623806807ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)97)), ((unsigned short)16483))))) : (((((/* implicit */_Bool) 1737129673)) ? (13387158148757271846ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1])))))));
                var_19 = ((/* implicit */int) ((long long int) arr_4 [i_1]));
                var_20 = ((/* implicit */unsigned short) (unsigned char)7);
                var_21 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0 - 1])) * (((/* implicit */int) arr_0 [i_0]))))) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)1543), ((unsigned short)47834)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((8153315015061226337ULL) != (((/* implicit */unsigned long long int) var_12)))) ? (70368744177663ULL) : (((((/* implicit */_Bool) var_14)) ? (var_7) : (var_2)))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)29986))));
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned short) (unsigned char)104)), ((unsigned short)15978))), (((/* implicit */unsigned short) var_18))))) ? (max((((/* implicit */unsigned int) (unsigned char)203)), (2905164772U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    var_24 = ((/* implicit */unsigned int) ((long long int) max((max((((/* implicit */unsigned long long int) var_0)), (1512203218237443018ULL))), (((/* implicit */unsigned long long int) ((int) (unsigned short)27696))))));
    var_25 = ((/* implicit */signed char) (unsigned short)60773);
}
