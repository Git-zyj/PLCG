/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39751
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) (+(min((((((/* implicit */_Bool) 2945844413340153120ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)65))) : (-4001384882326111781LL))), (((/* implicit */long long int) max((arr_5 [i_0]), (arr_4 [i_0]))))))));
                var_16 *= ((/* implicit */_Bool) arr_0 [i_0] [(short)13]);
                arr_6 [i_0] [i_1] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(-1085259932)))), (9897141978096079522ULL)))) ? (((/* implicit */unsigned long long int) (-(arr_2 [i_1])))) : (min((((/* implicit */unsigned long long int) (unsigned char)31)), (2945844413340153120ULL))));
                arr_7 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_6)) <= (((/* implicit */int) var_6)))) ? ((+(var_13))) : (max((((/* implicit */unsigned long long int) var_10)), (var_13)))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_14)) ? (var_7) : (var_3))) + (max((var_1), (((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))) : (var_8)))));
    var_18 ^= ((max((((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) (-(var_14)))))) >= (((/* implicit */unsigned int) (-(max((var_5), (((/* implicit */int) var_2))))))));
}
