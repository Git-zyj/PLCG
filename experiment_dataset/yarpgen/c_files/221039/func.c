/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221039
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 ^= ((/* implicit */signed char) 1892296610417349353ULL);
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))) < (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) * (var_10))))) ? (((/* implicit */int) (!(((_Bool) var_4))))) : ((-(arr_7 [i_2 - 1] [i_2 - 1] [(unsigned char)17] [i_2 - 1]))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_13))));
    var_23 = ((/* implicit */unsigned int) var_6);
}
