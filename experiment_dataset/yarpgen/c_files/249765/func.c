/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249765
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (7818944713775899436ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23824))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)41711), (((/* implicit */unsigned short) (unsigned char)7))))))))) ? ((-(((int) (unsigned short)36439)))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)15)), ((short)-10077))))));
    var_15 = ((/* implicit */signed char) ((((_Bool) (~(((/* implicit */int) (unsigned char)251))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)12328), (((/* implicit */unsigned short) (short)-10072)))))) : (max((((/* implicit */unsigned long long int) (unsigned short)36439)), ((-(var_7)))))));
    var_16 ^= ((/* implicit */signed char) var_9);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_1]))));
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((int) arr_5 [i_1])))));
                var_19 = ((/* implicit */unsigned short) max(((-(((/* implicit */int) var_4)))), ((-(((/* implicit */int) (unsigned short)29097))))));
                var_20 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_1])) ? (arr_4 [i_0 + 1] [i_1]) : (arr_4 [i_1] [i_1])))) ? (min((((((/* implicit */int) (unsigned short)24178)) ^ (((/* implicit */int) var_4)))), (((/* implicit */int) min(((unsigned char)246), (var_1)))))) : ((~(((((/* implicit */int) var_4)) + (((/* implicit */int) (short)-12964)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) var_5)))), (((((((/* implicit */int) (unsigned short)35101)) >> (((((/* implicit */int) (unsigned short)41357)) - (41332))))) >> ((((+(((/* implicit */int) (unsigned short)35115)))) - (35089))))))))));
}
