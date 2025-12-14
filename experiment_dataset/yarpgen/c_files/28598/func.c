/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28598
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        arr_4 [i_0] = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [(short)12]))) : ((+(-3049248745040247240LL))));
        var_12 |= ((/* implicit */unsigned short) -3049248745040247240LL);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned long long int) (short)-1);
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) arr_6 [i_1] [(signed char)3]))));
        var_15 = ((/* implicit */unsigned long long int) ((arr_7 [i_1]) << (((((/* implicit */int) arr_6 [i_1] [i_1])) - (24)))));
        arr_8 [i_1] [(unsigned short)14] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(unsigned short)8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))) : (((long long int) arr_7 [2]))));
    }
    for (short i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) (~((+(2147483647ULL)))));
        var_17 = ((/* implicit */unsigned char) (~(((int) (!(((/* implicit */_Bool) arr_11 [i_2] [i_2])))))));
    }
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_8))) ^ (6087325606615399279LL)));
}
