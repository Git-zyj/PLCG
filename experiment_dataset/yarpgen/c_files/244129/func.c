/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244129
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
    var_14 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */int) min((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))), (((long long int) ((unsigned short) (_Bool)1)))));
                    var_16 |= ((/* implicit */short) max((((((((/* implicit */_Bool) (unsigned char)111)) ? (arr_6 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)67))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) ((unsigned short) ((unsigned long long int) var_13))))));
                    var_17 = ((/* implicit */int) arr_2 [(unsigned char)7] [i_2]);
                    var_18 = ((/* implicit */unsigned char) max(((short)-23492), (((/* implicit */short) ((arr_2 [i_0] [i_1]) || (arr_2 [i_1] [i_2]))))));
                }
            } 
        } 
    } 
}
