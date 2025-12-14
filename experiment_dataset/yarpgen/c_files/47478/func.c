/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47478
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
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) 2204922311648776174ULL))) ? ((-(((16241821762060775420ULL) - (((/* implicit */unsigned long long int) var_16)))))) : (((((/* implicit */_Bool) var_10)) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) var_9)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] = ((((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2451457588U)) && (((/* implicit */_Bool) 554153860399104LL)))))) : (max((((/* implicit */unsigned long long int) -1)), (18446744073709551614ULL))))) >> (((18446744073709551614ULL) - (18446744073709551576ULL))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        arr_11 [i_1] = ((/* implicit */long long int) arr_8 [i_0] [i_0] [i_2] [i_3]);
                        arr_12 [i_0] [i_3] [8ULL] [9] [i_3] [4U] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2204922311648776174ULL)) ? (((18446744073709551615ULL) + (9986058745038692822ULL))) : (((/* implicit */unsigned long long int) -818920987))))) ? (((/* implicit */unsigned int) 384)) : (503316480U)));
                        var_18 += ((min((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_4 [i_0] [i_1] [i_0])), (-384)))), (((16241821762060775420ULL) * (18446744073709551606ULL))))) | (arr_0 [i_0]));
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((-385) + (2147483647))) << (((503316480U) - (503316480U)))));
}
