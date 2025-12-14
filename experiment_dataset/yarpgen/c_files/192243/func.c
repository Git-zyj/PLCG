/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192243
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
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_3 [(signed char)18] [(signed char)5] &= ((/* implicit */_Bool) var_0);
        var_13 = ((/* implicit */unsigned int) var_11);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 3) 
    {
        var_14 = ((/* implicit */unsigned long long int) var_7);
        var_15 = ((/* implicit */short) var_3);
        arr_6 [i_1] [(_Bool)1] = ((/* implicit */_Bool) var_9);
    }
    for (unsigned long long int i_2 = 4; i_2 < 14; i_2 += 2) 
    {
        arr_9 [i_2] [(_Bool)1] = ((/* implicit */unsigned long long int) var_10);
        arr_10 [i_2 + 2] = ((/* implicit */unsigned char) var_0);
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_6))));
        var_17 = ((/* implicit */unsigned long long int) var_0);
    }
    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
    {
        var_18 |= ((/* implicit */_Bool) var_8);
        arr_17 [i_4] [i_4] &= ((/* implicit */signed char) var_4);
        arr_18 [i_4] = ((/* implicit */long long int) var_1);
    }
    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
    {
        var_19 *= ((/* implicit */unsigned int) var_11);
        var_20 = ((/* implicit */signed char) var_11);
        arr_22 [9LL] = ((/* implicit */long long int) var_7);
        var_21 *= ((/* implicit */signed char) var_2);
    }
}
