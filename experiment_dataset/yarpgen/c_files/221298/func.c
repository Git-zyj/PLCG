/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221298
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
    var_18 = ((/* implicit */unsigned long long int) (unsigned short)3773);
    var_19 = ((/* implicit */unsigned int) ((var_16) ? (((13019445222128586771ULL) * (((/* implicit */unsigned long long int) 1043148088)))) : (((17022145169845990455ULL) / (17022145169845990455ULL)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */long long int) (~((~((-(((/* implicit */int) (unsigned short)3762))))))));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (signed char)32))));
                }
            } 
        } 
        var_21 = ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) (unsigned short)61763)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */unsigned long long int) (-(-1)))))) * (min((min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0] [i_0])), (var_8))), (((/* implicit */unsigned long long int) arr_7 [i_0] [(_Bool)1] [i_0]))))));
    }
    var_22 = ((/* implicit */unsigned short) max((var_13), (((((/* implicit */int) var_17)) ^ (((((/* implicit */int) (unsigned short)55927)) << (((((/* implicit */int) (unsigned char)222)) - (210)))))))));
}
