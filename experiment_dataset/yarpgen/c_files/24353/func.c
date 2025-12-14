/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24353
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
    var_15 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) (short)30286)), (min((((/* implicit */unsigned long long int) (unsigned char)36)), (var_5))))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) max(((unsigned char)3), ((unsigned char)27)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [(_Bool)1] [(_Bool)1] = arr_3 [i_2] [i_0];
                    arr_10 [i_1] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (signed char)-67)), ((unsigned char)252)));
                    arr_11 [i_0] [(_Bool)1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_8), (arr_0 [i_2]))))) > (max((var_10), (((/* implicit */unsigned long long int) (_Bool)1))))));
                }
            } 
        } 
    } 
}
