/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240887
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    var_17 = ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_5))) == (6814746228311769104LL))) ? (((((/* implicit */_Bool) (short)32766)) ? (((/* implicit */int) (short)32759)) : (((/* implicit */int) (short)-32752)))) : ((-(((/* implicit */int) var_13))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-32759)) || (((/* implicit */_Bool) 2147483647))))), (var_6))))) : (((((((/* implicit */_Bool) var_16)) ? (var_1) : (((/* implicit */unsigned long long int) 1471692640U)))) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))))))));
                    arr_8 [i_0] = ((/* implicit */unsigned short) (+(((5275976357641376828LL) % (((/* implicit */long long int) 2147483647))))));
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775784LL)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (short)32741))))) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) 5275976357641376828LL)) : (var_16))) : (((/* implicit */unsigned long long int) var_15))))) ? (min((var_15), (((/* implicit */long long int) (short)32759)))) : (((/* implicit */long long int) ((/* implicit */int) (short)32767)))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 5275976357641376823LL)))) ? (((/* implicit */int) (unsigned short)55760)) : (var_0)));
}
