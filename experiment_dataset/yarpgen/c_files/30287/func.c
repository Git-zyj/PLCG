/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30287
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
    var_17 = ((/* implicit */unsigned int) -5LL);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (2059181841) : ((+(-2059181845)))))) ? (-2059181834) : (((/* implicit */int) (_Bool)1))));
                var_19 = ((/* implicit */_Bool) ((((-2059181839) * (((/* implicit */int) ((arr_3 [i_0] [i_0]) < (((/* implicit */unsigned long long int) 2059181818))))))) ^ (((/* implicit */int) ((((/* implicit */int) (signed char)7)) <= (-808727446))))));
                var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)7)) || (((/* implicit */_Bool) -8074689606830194051LL)))))))) ? (max((((/* implicit */int) ((unsigned short) -2059181818))), ((+(((/* implicit */int) var_9)))))) : ((+(-2059181839)))));
            }
        } 
    } 
    var_21 -= ((/* implicit */long long int) var_14);
    var_22 -= ((/* implicit */int) (!(((/* implicit */_Bool) var_1))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 4; i_2 < 18; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_10 [i_3] [1] = ((/* implicit */unsigned short) -2059181842);
                var_23 ^= ((/* implicit */long long int) (signed char)-7);
            }
        } 
    } 
}
