/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4253
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
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */signed char) min((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) * (3908428255U))), (((arr_1 [i_0 + 1]) * (((/* implicit */unsigned int) 0))))));
                    var_14 ^= ((/* implicit */unsigned char) max((max(((-(2673605169U))), (((/* implicit */unsigned int) -22)))), (((/* implicit */unsigned int) (unsigned short)65535))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 2 */
    for (unsigned short i_3 = 2; i_3 < 14; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            {
                arr_16 [i_3] = ((/* implicit */_Bool) (-((-(((arr_1 [(short)7]) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-75)))))))));
                arr_17 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)-91)), (3120075993U)))), (var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2147483647U))))) : (((/* implicit */int) max(((unsigned char)219), (((/* implicit */unsigned char) (signed char)-97)))))));
            }
        } 
    } 
}
