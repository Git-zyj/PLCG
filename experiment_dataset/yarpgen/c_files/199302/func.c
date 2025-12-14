/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199302
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((2027251086867524365ULL), (((/* implicit */unsigned long long int) (unsigned short)45605))))) ? (arr_1 [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247))))), (((/* implicit */unsigned int) arr_6 [i_0] [i_0]))));
                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 516096)) ? (-2147483637) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)65535)), (arr_5 [i_0] [i_0] [i_1])))) : (9841260871552197214ULL))) : (((((/* implicit */_Bool) 3097320355529924567ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)53052)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_1 [i_0] [i_1])))) : (((unsigned long long int) arr_2 [i_0]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) var_4);
    var_15 ^= var_4;
}
