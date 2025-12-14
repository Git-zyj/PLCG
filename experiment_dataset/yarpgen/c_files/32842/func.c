/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32842
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
    var_18 = ((/* implicit */int) var_6);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_2] [i_0 + 1])) - (((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 2]))))) == (((arr_1 [i_0 - 2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 2])))))));
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0 - 2])) | (((/* implicit */int) arr_5 [i_0] [i_1]))))) ^ (((((/* implicit */unsigned int) ((-1) ^ (((/* implicit */int) (unsigned short)31904))))) | (3052396828U))))))));
                }
            } 
        } 
    } 
}
