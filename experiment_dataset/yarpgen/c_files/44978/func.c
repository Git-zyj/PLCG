/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44978
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
    var_13 &= ((/* implicit */signed char) 4294967294U);
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((short) 4294967280U))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (14U)))))) && (((/* implicit */_Bool) min((((long long int) var_3)), (var_9)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_15 += ((/* implicit */short) ((unsigned char) ((signed char) 0U)));
                    arr_9 [i_0] [(unsigned short)18] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2147221504LL)), (9699716762238416058ULL)))) ? (-2147221526LL) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (short)-11037))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) min((var_7), (((/* implicit */long long int) var_6)))))));
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (min((((/* implicit */unsigned long long int) min(((unsigned short)51132), (((/* implicit */unsigned short) (signed char)3))))), (var_1))))))));
}
