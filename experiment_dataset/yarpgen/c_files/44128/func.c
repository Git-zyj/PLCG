/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44128
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
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_2 [i_0 - 1] [i_1 - 1]) + (arr_2 [i_0 + 3] [i_1 - 1])))) ? (max((18446744073709551611ULL), (24ULL))) : (max((((/* implicit */unsigned long long int) var_14)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)220))) : (24ULL))))))))));
                var_19 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (var_10)))) ? (((/* implicit */int) max(((unsigned short)961), (((/* implicit */unsigned short) var_2))))) : ((-(((/* implicit */int) var_9)))))) > (max((((int) 21ULL)), (((((/* implicit */_Bool) (unsigned short)64575)) ? (var_17) : (((/* implicit */int) var_12))))))));
                var_20 = ((/* implicit */unsigned long long int) var_8);
            }
        } 
    } 
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) 18446744073709551575ULL))) ? (max((var_10), (((/* implicit */unsigned int) (unsigned short)961)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) (unsigned short)961)), (18446744073709551597ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)58))))))))))));
    var_22 = ((/* implicit */signed char) ((unsigned short) -1980948108));
}
