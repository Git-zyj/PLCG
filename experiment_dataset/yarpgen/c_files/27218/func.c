/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27218
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
    var_12 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)0)) : (min(((-2147483647 - 1)), (((/* implicit */int) var_1)))))), (((((/* implicit */int) (signed char)0)) & (((/* implicit */int) (unsigned short)0))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 4; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1 + 3] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
                    arr_9 [i_0] = ((((((((/* implicit */_Bool) (signed char)0)) ? (var_6) : (((/* implicit */int) (unsigned char)0)))) >= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) (unsigned char)248)) : (((int) max(((signed char)-1), ((signed char)0)))));
                    arr_10 [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)4746)) ? (13771973914510087352ULL) : (((/* implicit */unsigned long long int) -116589568))));
                }
            } 
        } 
    } 
    var_13 += ((/* implicit */unsigned char) var_8);
}
