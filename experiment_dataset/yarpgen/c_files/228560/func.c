/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228560
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
    var_10 = ((/* implicit */int) var_2);
    var_11 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3404550156U))))), (var_9)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) min((((-1LL) % (((/* implicit */long long int) 3404550153U)))), (((/* implicit */long long int) ((((((/* implicit */int) (signed char)41)) + (((/* implicit */int) (unsigned char)97)))) != (((/* implicit */int) ((4LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20712)))))))))));
                    arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(arr_8 [i_0] [i_1] [i_0] [i_0])))) ^ (arr_6 [i_0] [i_0] [i_0])));
                }
            } 
        } 
    } 
}
