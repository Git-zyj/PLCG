/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28275
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */int) ((signed char) max((((/* implicit */int) var_8)), ((~(((/* implicit */int) var_3)))))));
        arr_3 [i_0] = min(((signed char)7), (min(((signed char)85), (var_10))));
        var_14 = ((/* implicit */signed char) min((var_14), (var_2)));
        arr_4 [7LL] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_2 [(unsigned char)8])))) & (min((((/* implicit */int) var_10)), (((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_5)) - (191)))))))));
    }
    for (unsigned char i_1 = 2; i_1 < 9; i_1 += 2) /* same iter space */
    {
        var_15 *= ((/* implicit */signed char) var_4);
        var_16 = ((/* implicit */unsigned char) var_10);
        arr_8 [i_1] |= ((/* implicit */int) min((((/* implicit */long long int) ((int) var_9))), (((long long int) max((var_8), (var_2))))));
    }
    for (unsigned char i_2 = 2; i_2 < 9; i_2 += 2) /* same iter space */
    {
        arr_12 [i_2] &= ((/* implicit */signed char) var_1);
        arr_13 [i_2] [i_2] = ((/* implicit */int) min((((signed char) (signed char)-7)), (var_12)));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        arr_17 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_3])) || (((/* implicit */_Bool) ((signed char) var_4)))));
        var_17 *= ((/* implicit */int) ((((/* implicit */int) arr_14 [i_3])) == (((/* implicit */int) var_7))));
        arr_18 [i_3] = (+(arr_16 [i_3]));
    }
    var_18 &= var_9;
}
