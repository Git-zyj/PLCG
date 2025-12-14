/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205836
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
    var_16 *= ((/* implicit */short) var_8);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) -3226846114323167191LL))))) | (((/* implicit */int) ((((/* implicit */_Bool) -1132628878)) && (((/* implicit */_Bool) 10593971673274076564ULL)))))));
                    arr_11 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) 7852772400435475052ULL)))));
                }
            } 
        } 
    } 
}
