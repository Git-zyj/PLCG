/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249300
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1355290636U)) ? (0ULL) : (((/* implicit */unsigned long long int) 4294967295U))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_13 ^= ((/* implicit */short) 9LL);
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4009897559U)) ? ((-(((((/* implicit */_Bool) 4294967278U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)234))) : (var_8))))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
        var_15 = ((/* implicit */int) max((var_9), (((/* implicit */long long int) ((((((/* implicit */int) var_3)) > (((/* implicit */int) var_3)))) ? ((+(arr_6 [i_1]))) : (max((((/* implicit */unsigned int) 268435455)), (4294967289U))))))));
        var_16 ^= ((/* implicit */_Bool) (~(((/* implicit */int) var_4))));
    }
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        for (short i_3 = 1; i_3 < 22; i_3 += 3) 
        {
            {
                var_17 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 281474976710655ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((7ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) : ((-(((/* implicit */int) var_3)))))) : (((/* implicit */int) (!(((((/* implicit */int) (short)-7030)) <= (((/* implicit */int) var_3)))))))));
                var_18 = ((/* implicit */_Bool) min((((((/* implicit */int) ((((/* implicit */int) (unsigned char)234)) > (((/* implicit */int) (_Bool)1))))) >> (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_9 [i_2] [i_2] [i_2])) : (((/* implicit */int) (unsigned short)33849)))) - (23931))))), (((/* implicit */int) var_6))));
                var_19 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */unsigned long long int) 1056964608LL)) : (var_0)))))) ? ((~(max((var_1), (((/* implicit */long long int) var_3)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_1)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33831))) / (4U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))))))));
            }
        } 
    } 
}
