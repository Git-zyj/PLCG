/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51026
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
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */int) var_3);
        var_15 = ((/* implicit */short) ((int) var_8));
    }
    for (int i_1 = 3; i_1 < 13; i_1 += 4) 
    {
        var_16 = ((/* implicit */short) var_2);
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) arr_5 [i_1]))))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1]))))))))) && (((/* implicit */_Bool) var_12))));
    }
    for (int i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
    {
        var_18 ^= ((/* implicit */short) max((((((/* implicit */unsigned long long int) var_13)) - (arr_8 [2] [i_2]))), (arr_10 [i_2] [i_2])));
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_11))));
        arr_11 [i_2] = ((/* implicit */short) max((-3871492325419419585LL), (3871492325419419584LL)));
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            var_20 *= ((/* implicit */short) var_13);
            /* LoopSeq 1 */
            for (short i_4 = 1; i_4 < 20; i_4 += 3) 
            {
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (var_4) : (((/* implicit */unsigned long long int) 268369920))))) ? (max((((/* implicit */unsigned long long int) (short)2801)), (16429138754898775927ULL))) : (((arr_16 [i_4 - 1] [i_3] [i_4 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4 - 1] [i_4 + 1] [i_4 - 1])))))))));
                arr_17 [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(268369920)))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (var_11))), (((/* implicit */unsigned long long int) ((14151107077013572480ULL) != (((/* implicit */unsigned long long int) 0LL)))))))));
            }
            arr_18 [i_2] = ((/* implicit */short) 16LL);
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) -360924316053397666LL)) && (((/* implicit */_Bool) -8439960155299139873LL))));
        }
    }
    for (int i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
    {
        arr_21 [i_5] [i_5] = ((/* implicit */int) ((unsigned long long int) ((var_4) / (((unsigned long long int) var_8)))));
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) max((((long long int) min((((/* implicit */unsigned long long int) var_9)), (var_3)))), (((/* implicit */long long int) ((arr_14 [i_5] [20LL]) >= (arr_14 [i_5] [16])))))))));
    }
    var_24 = ((((/* implicit */_Bool) var_5)) ? (1116892707587883008LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))));
}
