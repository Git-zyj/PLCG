/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242894
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
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [(_Bool)1] = ((/* implicit */_Bool) max((min((((/* implicit */int) (unsigned char)152)), (((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) var_4)))))), ((~(((/* implicit */int) ((unsigned short) 5061455356368148922ULL)))))));
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((unsigned long long int) 534773760U)))));
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])), ((~(var_8))))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)49396))))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */short) arr_3 [i_1] [i_0] [i_0]);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (_Bool)1))));
}
