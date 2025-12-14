/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50880
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
    var_20 = ((/* implicit */unsigned short) (signed char)64);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */unsigned short) var_15)), ((unsigned short)24576)))), (-1515801316157702806LL)));
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) max((var_8), ((unsigned short)34834)))) ? (var_0) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-45)))))))), (((/* implicit */long long int) var_8))));
                    arr_8 [i_1] [(unsigned short)19] [i_1] [i_2] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)65535), ((unsigned short)65520))))) : (max((((/* implicit */long long int) (unsigned short)9299)), (var_0))))), (((/* implicit */long long int) (signed char)-64))));
                }
            } 
        } 
    } 
}
