/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34584
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
    var_12 = ((/* implicit */unsigned int) max(((~(((((/* implicit */_Bool) 2711389076U)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) var_8))));
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_4))))));
    var_14 &= (+(min((3297074226914452787ULL), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (signed char)106)), ((unsigned short)1029)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) max((var_15), (min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_2])))))))), ((unsigned short)44058)))));
                    var_16 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0]))));
                }
            } 
        } 
    } 
}
