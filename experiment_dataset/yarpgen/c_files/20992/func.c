/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20992
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
    var_11 = ((/* implicit */long long int) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        var_12 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(arr_1 [8LL]))))));
        var_13 -= ((/* implicit */signed char) (~(905050226743731784LL)));
    }
    for (long long int i_1 = 1; i_1 < 18; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 3; i_4 < 19; i_4 += 3) 
                {
                    {
                        arr_15 [i_2] [i_1] = ((/* implicit */_Bool) ((var_9) << (((min((((/* implicit */unsigned long long int) (unsigned char)118)), (((((/* implicit */unsigned long long int) var_9)) % (var_2))))) - (117ULL)))));
                        var_14 += ((/* implicit */unsigned char) -905050226743731780LL);
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */short) arr_7 [i_1]);
    }
}
