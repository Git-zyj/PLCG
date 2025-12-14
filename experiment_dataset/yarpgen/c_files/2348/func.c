/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2348
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
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min(((short)(-32767 - 1)), (((/* implicit */short) (unsigned char)255))))), (max((((/* implicit */unsigned int) (short)31323)), (3117410367U)))));
                var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)0)), (((unsigned long long int) (short)-31329))))) ? (((/* implicit */long long int) min((1909869464), (((/* implicit */int) (short)31323))))) : ((((_Bool)1) ? (((/* implicit */long long int) min((((/* implicit */int) (short)31323)), (841353723)))) : (7823203787319998242LL)))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)60714)), (((((/* implicit */_Bool) (short)-31323)) ? (((/* implicit */int) (unsigned short)20)) : (((/* implicit */int) (unsigned short)23218))))));
}
