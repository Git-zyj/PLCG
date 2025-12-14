/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220044
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
    var_17 = ((/* implicit */short) min((((/* implicit */unsigned long long int) 268435455LL)), ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (18446744073709551615ULL)))))));
    var_18 &= ((/* implicit */unsigned short) var_3);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) max((var_19), (max((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) (_Bool)0)))))))), (((((((/* implicit */int) var_4)) > (((/* implicit */int) (unsigned char)155)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) >= (384U))))) : (4294966912U)))))));
                    var_20 += ((/* implicit */unsigned short) max((((arr_1 [i_2 - 2]) << (((arr_1 [i_2 - 2]) - (18394952356220155932ULL))))), (((unsigned long long int) 4294966884U))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_5);
}
