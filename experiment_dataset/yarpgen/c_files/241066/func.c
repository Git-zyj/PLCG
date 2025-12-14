/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241066
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) var_1);
        var_17 = ((/* implicit */long long int) var_7);
    }
    /* LoopSeq 4 */
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        var_18 &= ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_10)), (var_7)))), (((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64))))))) <= (((/* implicit */unsigned long long int) ((((var_10) + (2147483647))) << (((((((/* implicit */int) arr_3 [i_1])) + (31988))) - (7))))))));
        arr_4 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_3 [i_1])))) | (((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))));
    }
    for (int i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        arr_7 [8U] |= ((/* implicit */unsigned char) max((min((arr_5 [i_2]), (((/* implicit */unsigned long long int) -311085206)))), (((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned int) (unsigned short)23431)))))));
        var_19 = ((/* implicit */signed char) 72057594037862400ULL);
    }
    /* vectorizable */
    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 2) 
    {
        var_20 = (_Bool)1;
        var_21 = ((/* implicit */signed char) 1184967053U);
    }
    for (int i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        var_22 -= ((/* implicit */_Bool) ((((var_11) ^ (((/* implicit */long long int) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) (_Bool)1))))))) / (((var_0) - (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
        arr_12 [3LL] = 18446744073709551596ULL;
    }
    var_23 = ((/* implicit */_Bool) min((-997757035), ((-(((/* implicit */int) var_3))))));
}
