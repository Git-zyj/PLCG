/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225947
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
    var_20 = var_15;
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) ((arr_4 [i_1 - 1]) | (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (var_6) : (var_16)))), (((983040LL) | (((/* implicit */long long int) var_15))))))));
                    arr_11 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) var_13));
                }
            } 
        } 
    } 
}
