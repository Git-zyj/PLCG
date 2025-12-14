/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48808
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
    var_14 = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)53))) * (0U)))) / ((+(var_8))))), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) >= (var_12))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((var_11) + ((-2147483647 - 1)))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))) + (((/* implicit */int) arr_1 [i_0]))))) : (((unsigned int) arr_0 [i_0])))))));
        var_16 *= ((/* implicit */unsigned int) ((signed char) max((((_Bool) arr_0 [i_0])), (arr_1 [i_0]))));
    }
    for (unsigned int i_1 = 1; i_1 < 17; i_1 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) arr_3 [i_1] [14LL]);
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-2147483647 - 1))), (0ULL))))));
        var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) 2147483647)) ? (min((14163337607307840277ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 4294967295U))))))))));
        var_19 *= ((/* implicit */unsigned int) ((unsigned long long int) arr_2 [i_1]));
    }
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        arr_8 [i_2] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) max((arr_6 [i_2] [i_2]), (arr_7 [(signed char)9])))))) ? (max((((((/* implicit */_Bool) arr_7 [(signed char)13])) ? (arr_6 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)253))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0U))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
        var_20 += ((/* implicit */long long int) arr_6 [(signed char)9] [(signed char)9]);
    }
}
