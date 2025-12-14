/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191444
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
    var_11 = ((/* implicit */unsigned char) min((var_8), (((/* implicit */unsigned long long int) var_3))));
    var_12 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 6745611861360982991LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))) ? (var_8) : (((((/* implicit */unsigned long long int) var_2)) / (var_8)))))));
    var_13 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 5092727780749446132ULL)) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)53))) % (13354016292960105483ULL))))))) ^ (((/* implicit */int) var_4))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) arr_3 [i_0]);
        arr_5 [i_0] = (i_0 % 2 == zero) ? (((((/* implicit */int) arr_2 [i_0])) << (((((/* implicit */int) arr_0 [i_0])) - (90))))) : (((((/* implicit */int) arr_2 [i_0])) << (((((((((/* implicit */int) arr_0 [i_0])) - (90))) + (47))) - (12)))));
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 36028522141057024ULL)))))) + (((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))))))));
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (5092727780749446132ULL) : (13354016292960105512ULL))))));
    }
    /* LoopNest 3 */
    for (short i_1 = 2; i_1 < 7; i_1 += 2) 
    {
        for (short i_2 = 1; i_2 < 8; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                {
                    var_16 = ((/* implicit */int) max((var_0), (((/* implicit */unsigned long long int) var_4))));
                    var_17 -= ((/* implicit */unsigned short) ((0) + (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (arr_8 [i_1])))) < (((/* implicit */int) ((var_0) > (arr_15 [i_1] [i_1] [i_3] [i_2 + 2])))))))));
                }
            } 
        } 
    } 
}
